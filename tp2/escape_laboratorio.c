#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "escape_laboratorio.h"
#include "utiles.h"

void iniciar_mapa(char mapa[100][100], int tope){
   for (int i = 0; i < tope; i++)
       for (int j = 0; j < tope; j++)
           mapa[i][j]='#';
}
void mostrar_mapa(char mapa[100][100], int tope){
    for (int i = 0; i < tope; i++){
        for (int j = 0; j < tope; j++){
            printf("%c ",mapa[i][j]);
        }     
        printf("\n");    
    } 
}
/*
void obtener_paredes(int nivel, coordenada_t paredes[MAX_PAREDES], int *tope_paredes){
    if(nivel ==1){
        for (int i = 0; i < *tope_paredes; i++){
            paredes[i]="p";
        }        
    }
} */

void inicializar_juego(juego_t* juego , char tipo_personaje){
    (*juego).nivel_actual=1;    
    printf("mi nivel es: %i \n",(*juego).nivel_actual);
    (*juego).niveles->tope_paredes=10;
    printf("tope: %i \n",(*juego).niveles->tope_paredes);
    
    char mapa[100][100];
    int tope=10;
    iniciar_mapa(mapa, tope);
    mostrar_mapa(mapa, tope);

    //coordenada_t paredes[MAX_PAREDES];
    //obtener_paredes(1, paredes[MAX_PAREDES],  &((*juego).niveles->tope_paredes) ) ;

}
