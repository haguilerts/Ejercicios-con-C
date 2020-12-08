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

void imprimir_laboratorio(int nivel , coordenada_t paredes_laboratorio[MAX_PAREDES],int tope){
	int dimension=12 ;
    char mapa[17][17];
	if(nivel%2==0) //par
		dimension =17 ;
	
	for(int i=0;i< dimension;i++){         
		for(int j=0;j< dimension;j++){ 
			mapa[i][j] = '.';            
        }
    }
	for(int i =0 ;i< tope; i++){        
		//mapa[paredes_laboratorio[0].fil][paredes_laboratorio[0].col]= 'I';

		mapa[paredes_laboratorio[i].fil][paredes_laboratorio[i].col]= '#';
        //printf("[%i]: %i \n",i,paredes_laboratorio[i].fil);
	}
	for(int i=0;i< dimension;i++){
		for(int j=0;j< dimension;j++){ 
            if (i==0 || i==dimension-1){
                mapa[i][j] = '=';
            }else if(j==0 || j==dimension-1){
                 mapa[i][j] ='|';
            }
			printf("%c ",mapa[i][j]);
        }
		printf("\n");	
	}
}
void inicializar_juego(juego_t* juego , char tipo_personaje){
    printf("estas en iniciar_juego()\n");
    (*juego).nivel_actual=2;    
    printf("mi nivel es: %i \n",(*juego).nivel_actual);
    (*juego).niveles->tope_paredes=10;
    printf("tope: %i \n",(*juego).niveles->tope_paredes);
    char mapa[100][100];
    int tope=10;
    iniciar_mapa(mapa, tope);
    //mostrar_mapa(mapa, tope);

    coordenada_t paredes_laboratorio[MAX_PAREDES];    
    obtener_paredes((*juego).nivel_actual, paredes_laboratorio,  &((*juego).niveles->tope_paredes) ) ;
    imprimir_laboratorio( (*juego).nivel_actual , paredes_laboratorio, (*juego).niveles->tope_paredes );

}

void inicializar_nivel(nivel_t* nivel , int numero_nivel , int cantidad_baldosas_pinches ,
    int cantidad_guardia , bool hay_bomba){
    printf("estas iniciar_nivel()\n");

    
}
