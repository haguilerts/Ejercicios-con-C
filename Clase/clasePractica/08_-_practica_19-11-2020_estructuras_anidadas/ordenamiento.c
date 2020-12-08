#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 6
#define FALSO 0
#define VERDADERO 1
#define MAX 1000

 typedef int elemento_t ;
 typedef elemento_t vector_t [ MAX ];
ñ{
l ,         |rf!# define FALSO 0
2 # define VERDADERO 1
3 # define MAX 1000
4
5 typedef int elemento_t ;
6 typedef elemento_t vector_t [ MAX ];TW2N Xsxzws2
}
    v,ñ.{l{oid imprimir(int vector[], int tope){
        printf("{");
        for (int i = 0; i < tope; i++){
            printf(" %i |",vector[i]);
        }     
        printf("}\n");
        
    }

void ordenar_vector(int vec[], int top){
//[0]{4,5,1,6,8,10} |
//[1]{4,5,10,6,8,1} | [2]{4,5,1,6,8,10}
    for (int  i = 0; i < top; i++){
        int posMinActual=0;
        printf("[%i]:",i);
        for (int j = 0; j < top; j++){
            if (vec[j]<vec[posMinActual])  
//[j]   [0]       [1]       [2]      [3]       [4]      [5]
//[i] 4<4 (F) | 5<4 (F) |'1'<4 (V)| 6<1 (F)| 8<1 (F) | 10<1 (F) 
//[i] 4<2 (F) | 5<2 (F) | 10<2 (F)| 6<2 (F)| 8<2 (F) | '1'<2 (V) 
//[i] 4<10 (F) | 5< (F) | 10< (F)| 6< (F)| 8< (F) | < (V) 
                posMinActual=j; 
//pos=0   | pos=0   | 'pos=2' | pos=2  | pos=2   | pos=2
//pos=2   | pos=2   |  pos=2  | pos=2  | pos=2   |'pos=5'
        }
        int aux = vec[posMinActual];    //aux= 1 |10   
        vec[posMinActual]=vec[top-i-1]; //[2]= 10|[5]=8  
        vec[top-i-1]=aux;               //[5]= 1 |[4]=10   
        imprimir(vec,top);                //
    }
}


void ordenamiento(int vec[], int top){
    printf("-ANTES:\n");
    imprimir(vec, top);
    printf("--DESPUES:\n");
    ordenar_vector(vec, top);
}
int main(){
    int vector[MAX]={4,5,1,6,8,10};
    int tope=6;
    ordenamiento(vector, tope);
    return 0;
}