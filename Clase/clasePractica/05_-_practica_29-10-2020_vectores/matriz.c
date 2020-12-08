#include <stdio.h>
#include <stbool.h>

#define ANCHO_MAR 10
#define LARCO_MAR  10
#define BARQUITO  'B'
#define AGUA  'A'
#define TOCADO  'T'
#define FALLADO  'T'

/*
actualiza el terreno, poniendo A sin hay barquito B o T si hay barquito.
latitud y logitud ancho del terreno.
El mar viene con elementos validos
 */
void disparar(char mar][ANCHO_MAR][LARCO_MAR], int latitud, int longitud){
    char que_hay = mar[latitud][longitud];
    if(que_hay== BARQUITO){
         mar][ANCHO_MAR][LARCO_MAR]=TOCADO;
    }else if(que_hay== AGUA){
         mar][ANCHO_MAR][LARCO_MAR]=FALLADO;
    }
}
/*
devolvera true si gano la partida.una partida se gana cuando no quedan barquito(B).
 */
bool partida_ganada(char mar[ANCHO_MAR][LARCO_MAR] ){
    int cuantos_barcos=0;
    for (int fil = 0;fil <ANCHO_MAR ; fil++){
        for (int col = 0;col <LARCO_MAR ; col++){
            if(char mar[fil][col]==BARQUITO){
                cuantos_barcos++;
            }
        }   
    }
    return (cuantos_barcos==0); // si la condicion cumple devolvera TRUE 
}
void mostrar_mar(char mar[ANCHO_MAR][LARCO_MAR]){
    for (int fil = 0;fil <ANCHO_MAR ; fil++){
        for (int col = 0;col <LARCO_MAR ; col++){
            mar[fil][col]=AGUA;
        }   
    }
}
void inicializar_mar(char mar[ANCHO_MAR][LARCO_MAR]){
    for (int fil = 0;fil <ANCHO_MAR ; fil++){
        for (int col = 0;col <LARCO_MAR ; col++){
           printf("%c",mar[fil][col]);
        }  
        printf("\n"); 
    }
}
void cargar_barquito(char mar[ANCHO_MAR][LARCO_MAR]){
    mar[0][2]=BARQUITO;
    mar[1][2]=BARQUITO;
}
void pedir_cordenadas(int *latitud){
    do{
        printf("ingrese la longitud entre 1 y 10\n");
        scanf("%i",latitud);
    }while(!(*latitud >= 1 && *latitud <= 10));
    (*latitud)--;
}
int main(){
    int latitud;
    int longitud;
    char mar[ANCHO_MAR][LARCO_MAR];
    inicializar_mar();
    cargar_barquito();
    mostrar_mar();

    pedir_cordenadas(&latitud);
    pedir_cordenadas(&longitud);

    disparar(mar,latitud,longitud);
    mostrar_mar();
    return 0;
}
/* flacks
1)
“¡Boom! ¡boom!” la batalla naval es un juego, donde el objetivo es hundir los barquitos del
contrincante. Cada uno de los participantes, coloca sus propios barquitos dispersos por su
terreno, y debe adivinar las posiciones de los barquitos del enemigo, para dispararle y hundirlos.
El terreno de cada jugador, puede verse cómo una matriz de 10x10 y cada una de sus posiciones
tendrá A en aquellas celdas donde haya agua, B en las coordenadas donde haya un barquito, X
en las coordenadas donde se haya disparado al agua o T en las coordenadas donde se haya
tocado un barco.
a. Crear un procedimiento que reciba una matriz de caracteres y las coordenadas de un
disparo y actualice la matriz, poniendo una X si el tiro fue al agua o una T si el disparo
tocó un barco.
b. Crear un procedimiento que le permita a un usuario cargar barquitos (los más chiquitos,
de 2 posiciones) en el tablero.
c. Crear una función que reciba una matriz representando a un tablero y devuelva true si se
ha ganado la partida.
d. Crear una función que nos diga si tenemos más de la mitad de nuestros barquitos a salvo.

 */