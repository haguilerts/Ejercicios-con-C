#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "detector_personajes.h"
#include "escape_laboratorio.h"
#include "utiles.h"


 
int main(){
    char tipo_personaje=detectar_personaje();
    juego_t juego;
    inicializar_juego(&juego ,tipo_personaje);
    printf("mis personaje es: %c \n",tipo_personaje);
    nivel_t nivel;
    int numero_nivel=juego.nivel_actual;
    int cantidad_baldosas_pinches=0;
    int cantidad_guardia=0;
    bool hay_bomba=false;
    inicializar_nivel(&nivel ,numero_nivel ,cantidad_baldosas_pinches ,cantidad_guardia ,hay_bomba);


    return 0;
}

/*
    gcc juego.c detector_personajes.c escape_laboratorio.c  utiles.o  -o juego -std=c99 -Wall -Wconversion -Werror -lm
    ./juego
 */
