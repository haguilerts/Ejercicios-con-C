#include <stdio.h> // incluye una biblioteca
#include <string.h>
#include "estadisticas.h"
/* typedef struct estadisticas {
        int dia_mes;
        int segundo_vertical;
        int cantidad_agua;
        int cantidad_chiste;
    } estadisticas_t;
*/
/*
strcpy(); copia un string a otro.
strlen(): calcula la longitud.
strcat(a,b): concatenar. se le asigna la concatenacion a la variable "a".
strcmp(a,b): compara -> son iguales(0), negativo(-1), positivo(1)

 */
int main(){
    
    estadisticas_t estadisticas;
    cargar_estadisticas(&estadisticas);
    cadenas();
    
    return 0;
}
  /*
   
   //gcc main_struct.c estadisticas.c -o e -Wall -Wconversion -Werror

    estadisticas_t estadisticas;// se crea mi 1° estructura 
    estadisticas_t miNuevaEsta; // se crea mi 2° estructura 

    
    miNuevaEsta.dia_mes=20;     // INICIALIZO
    estadisticas.dia_mes=11;
    printf("ingrese segundo vertical:\n");
    scanf("%i",&estadisticas.segundo_vertical); // asi es como asigno valor a mi variable 
   printf( "%i,  %i\n",estadisticas.dia_mes, miNuevaEsta.dia_mes);

    */


