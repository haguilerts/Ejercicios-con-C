#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_DONACIONES 200

void cargar_donaciones(int donacion[MAX_DONACIONES],int donante[MAX_DONACIONES]  int* ){
        printf("ingresa una donacion.\n");
        scanf("%i",&donacion[*tope]);
        
         printf("ingresa la incial de quien dono.\n");
        scanf("%i",&donacion[*tope]);

    while (donacion[tope]>=0 && tope<MAX_DONACIONES){
        printf("ingresa una donacion.\n");
        scanf("%i",&donacion[*tope]);
        tope ++;
    }
}
//=========================================================================
int main(){
    int donacion[MAX_DONACIONES]; //no se inicializa cuando el usuario ingresa por teclado
    char donates[MAX_DONACIONES];
    
    int tope_donaciones=0; // cant de elementos q tiene el vector
    int tope_donantes=0; // cant de elementos q tiene el vector
    



    cargar_donaciones(donacion, &tope_donaciones, &tope_donantes);
}