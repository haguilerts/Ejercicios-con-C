#include <stdio.h>
#include <stdbool.h>

#define DIA_TENIECION 20
#define CM_POR_LT 10
#define LT_POR_CM 0.02
#define VERDE 'V'
#define MORADO 'M'
#define RUBIO 'R'
#define NARANJA 'N'

typedef struct pelo {
    int centimetros_de_largo;
    char color; // Verde, Mordao, Rubio, Naranja
} pelo_t;

typedef struct charly {
    int dias_de_vida;
    int centimetros_de_altura;
    pelo_t pelo;
} charly_t;

bool toca_la_teniecion(charly_t charly){
    return(charly.dias_de_vida%DIA_TENIECION == 0);
}

void calcular_tintura(pelo_t pelo, float* lt_tintura, char* color){
    *lt_tintura = ((pelo.centimetros_de_largo * LT_POR_CM)/CM_POR_LT);

    if(pelo.color == VERDE)
        *color = MORADO;
    else if(pelo.color == MORADO)
        *color = RUBIO;
    else if(pelo.color == RUBIO)
        *color = NARANJA;
    else
        *color = VERDE;
}

/*void tenir_charly(pelo_t* pelo, char color){
    pelo->color = color; // (*pelo).color
}*/

void tenir_charly(charly_t* charly, char color){
    charly->pelo.color = color; // (*charly).pelo.color
}

int main(){
    charly_t charly;
    charly.dias_de_vida = 25880;
    charly.centimetros_de_altura = 12;
    charly.pelo.centimetros_de_largo = 30;
    charly.pelo.color = 'V';

    float lt_tintura;
    char color_proximo;

    if(toca_la_teniecion(charly)){
        printf("\nEs dia de teniecion wachi\n");
        calcular_tintura(charly.pelo, &lt_tintura, &color_proximo);
        printf("\nNecesitas %0.3f lt de tintura color %c\n", lt_tintura, color_proximo);
        //tenir_charly(&(charly.pelo), color_proximo);
        tenir_charly(&(charly), color_proximo);
        printf("\nEl new style charly es %c\n", charly.pelo.color);
    }
    else
        printf("\n:(:(:(:(:(\n");

    return 0;
}