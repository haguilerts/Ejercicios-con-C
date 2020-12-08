#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "estadisticas.h"

void cargar_estadisticas(estadisticas_t* estadisticas){
   //(*estadisticas).dia_mes == estadisticas->dia_mes
        
    (*estadisticas).dia_mes=11;// INICIALIZO
    //printf("ingrese segundo vertical:\n");
  //  scanf("%i",&(estadisticas->segundo_vertical) ); // asi es como asigno valor a mi variable 

    printf( "%i\n",estadisticas->dia_mes);
}

void miCaracter(){

}
void cadenas(){
    miCaracter();
    char nombre[20]="Giovanny ";
    char apellido[20]= " Aguilar_Rojas";
    char nomcompleto[50];
    char domicilio[20]="av.Gral Paz 123";
    int edad=12;
    printf("ingrese el nombre: ");
    //scanf("%s",nombre);
    strcat(domicilio, " 456"); // concatena
    printf("\n longitud [Rhonny]: %i",strlen("Rhonny"));

    strcpy(nomcompleto,nombre);// se el asigna la concatenacion a la variable nombre
    strcat(nomcompleto,apellido);

    // las comparqacones toma los valores de la tabla assis
    printf("\n -abc<def: %i",strcmp("abc","def"));
    printf("\n -aaa==aaa: %i",strcmp("aaa","aaa"));// 
    printf("\n -def<abc: %i",strcmp("def","abc"));

   /* if(strcmp(gio,bra)==0)) {
     printf("gio:1  | bra:1 ");       
    }
      */
    //printf(" nombre Completo[50]: %s\n",nombCompleto);    
    printf("\n nom: %s  - %s - edad: %i \n",nombre,apellido,edad);  
    printf(" nombre[20]: %s\n",nombre);
    printf(" nombreCompleto[20]: %s\n",nomcompleto);
    printf(" Domicilio[20]: %s\n",domicilio);
    
}
/*
strcpy(); copia un string a otro.
strlen(): calcula la longitud.
strcat(a,b): concatenar. se le asigna la concatenacion a la variable "a".
strcmp(a,b): compara -> son iguales(0), negativo(-1), positivo(1)


 */