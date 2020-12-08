#include <stdio.h>
//#include <stbool.h>

void mostrar_seguidor(int cant_seguidores){
    // condicion base o condicion de corte 
    if(cant_seguidores==0){
        return;
    }
    printf("paso otro dia y queda %d seguidores\n",cant_seguidores);
    //llamarse a si mismo
    mostrar_seguidor(cant_seguidores-1);
}
void mostrar_seguidor1(int cant_seguidores){
    // condicion base o condicion de corte 
    if(cant_seguidores>0){
        printf("paso otro dia y queda %d seguidores\n",cant_seguidores);   
        mostrar_seguidor(cant_seguidores-1);
    }    
}
void mostrar_recursadas(int cant_materia){
    if(cant_materia>5){
        printf("nooo que hiciste chinchulin. recursaste!!\n");
        return;
    }
    int semana=cant_materia*2;
    printf("en la semana num  %i dejaste %i materias \n",semana,cant_materia);   
    mostrar_recursadas(cant_materia+1);
}
void mostrar_recursadas1(int cant_materia){
    // condicion de corte
    if(cant_materia==0){
        printf("nooo que hiciste chinchulin. recursaste!!\n");
        return;
    }
    // llamado recursivo
        int semana=cant_materia*2;
    if (cant_materia>0) {       
        mostrar_recursadas1(cant_materia-1);
        printf("en la semana num  %i dejaste %i materias \n",semana,cant_materia);   
    } else if (cant_materia<0) {  
        printf("en la semana num  %i dejaste %i materias \n",semana,cant_materia);   
        mostrar_recursadas1(cant_materia+1);
    }   
    
}
int oneta(int num[20],int posicion_actual){
    //condicon de corte
    if(num[posicion_actual]==19){
        return posicion_actual;
    }
    //llamada Recursiva
    posicion_actual=num[posicion_actual];
    return oneta(num,posicion_actual);
}
inicializar_vector(numeros[20]){
    for (int fil = 0;fil <20 ; fil++){
        mar[fil]=;         
    }    
}
//-----------------------------------------------------------------------------------
int main(){
    int vector[200]={4,5,6,7,8,9};
    int numeros[20];
    inicializar_vector(numeros);
    int donde_esta_19= oneta(numeros,0);
    //mostrar_seguidor1(5);
    //mostrar_recursadas1(-5);
    return 0;
}
/*
a. Crear una función o procedimiento recursivo que cuente la cantidad de materias que
Charly va a recursar este cuatri. Está cursando 5 materias.
b. Crear una función o procedimiento recursivo que cuente la cantidad de seguidores de
Charly del instagram. (Como cada vez tiene menos seguidores, hay que contar de forma
descendente hasta que se quede sin seguidores)
 */
/*
Se tiene un vector de 20 posiciones, con los 20 números del 0 al 19, no se sabe cual está en
cada posición. El juego consiste en encontrar la posición donde se encuentra el número 19, para
1
esto, se empieza desde la posición 0 y se debe avanzar, recursivamente a la posición dada por
el valor del vector en la posición actual. Los números no se repiten.
a. Crear una función o procedimiento recursivo que determine la posición del 19

eje:
5 6 1 3 2 17 18 19 14 8 11 10 4 13 12 7 9 15 16 0
resp:
V[0] = 5 -----> V[5] = 17 -----> V[17] = 15 -----> V[15] = 7 -----> V[7] = 19 => Debe devolver 7!
 */
