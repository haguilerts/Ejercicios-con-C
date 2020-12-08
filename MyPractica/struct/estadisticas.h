// estoy en mi: estadisticas.h
// firma, definiciones de struc, const,  etc..
#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H
typedef struct estadisticas { //OBS: mis estruct son similares a objetos
        int dia_mes;
        int segundo_vertical;
        int cantidad_agua;
        int cantidad_chiste;
} estadisticas_t;

/*
 *PRE:
 *POST: la strunt va estar inicializada
 */
void cargar_estadisticas(estadisticas_t* estadisticas);// esnvia la estrct por referencia y no por valor

int calcular_humor(estadisticas_t* estadisticas);

void cadenas();

#endif