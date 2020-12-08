#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "detector_personajes.h"
#include "escape_laboratorio.h"
//#include "utiles.o"


 
int main(){
    char tipo_personaje=detectar_personaje();
    juego_t juego;
    inicializar_juego(&juego ,tipo_personaje);
    printf("mis personaje es: %c \n",tipo_personaje);


    return 0;
}

/*
    gcc juego.c detector_personajes.c escape_laboratorio.c  utiles.o  -o juego -std=c99 -Wall -Wconversion -Werror -lm
    ./juego
 */
