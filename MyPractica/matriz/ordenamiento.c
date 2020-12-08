#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 
void insertarOrdenado(vector_t vector, elemento_t elemento, int *tope){
    int inserto;
    int i;
    elemento_t elem_aux;
    inserto = FALSO;
    for (i = 0; i < (*tope); i++){
        if (elemento < vector[i]){
            elem_aux = vector[i];
            vector[i] = elemento;
            elemento = elem_aux;
            inserto = VERDADERO;
        }
    }
    if (inserto){
        vector[*tope] = elem_aux;
        *(tope)++;
    }
    if ((!inserto) || (tope == 0)){
        vector[*tope] = elemento;
        *(tope)++;
    }
}
*/
int main(){
    int vector[100] = {8, 6, 4, 2, 0, -1, 1, 3, 14};
    int max =0;
    int min=0;
    for (int i = 0; i < 9; i++){
        if (vector[i]==vector[0])  {
            max=vector[0];  
            printf("    ok max: %i\n",max);
        }else if( max<vector[i]){
            printf("   off max: \n");
            max=vector[i];
        }
        if(min>vector[i]){
            min=vector[i];
        }              
    }
    printf("_max: %i\t _min: %i \n",max,min);

    return 0;
}
