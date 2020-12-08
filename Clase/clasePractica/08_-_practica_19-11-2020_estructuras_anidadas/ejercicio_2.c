#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_NOMBRE 70
#define MAX_COLABORADOR 20
#define MAX_PELICULAS 200

const char TERROR = 'T';

typedef struct colaborador {
	char nombre[MAX_NOMBRE];
	int cuatrimestres;
	bool respetado_por_gonza;
} colaborador_t;

typedef struct pelicula{
	char titulo[MAX_NOMBRE];
	char genero; // 'D': Drama - 'A': Acción - 'R': Romántica - 'T': Terror - 'S': Suspenso - 'I': Animada.
	colaborador_t colaborador;
	int gonzalitos; // 1 a 5
} pelicula_t;

//--------------------------------------------------------------------------------------
void cargar_peliculas(pelicula_t peliculas[MAX_PELICULAS], int* tope);

int main(){
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++){
		printf("%i\n", rand());
	}
	pelicula_t filmones[MAX_PELICULAS];
	int tope;
	//char colab[MAX_NOMBRE] = "Berni";

	cargar_peliculas(filmones, &tope);

	//mostrar_pelis_de_terror_no_charly_no_renata(filmones, tope);
/*
	pelicula_t pelicula_nueva;
	solicitar_pelicula(&pelicula_nueva);

	filmones[tope] = pelicula_nueva;
	tope++;

	mostrar_pelis_de_colab(filmones, tope, colab);
*/
	return 0;
}
void mostrar_pelis_de_colab(
	pelicula_t peliculas[MAX_PELICULAS],
	int tope,
	char colab[MAX_NOMBRE]
	){

	for(int i = 0; i < tope; i++){

		if (strcmp(peliculas[i].colaborador.nombre, colab) == 0){
			printf("%i - %s\n", i, peliculas[i].titulo);
		}

	}

}

void mostrar_pelis_de_terror_no_charly_no_renata(
	pelicula_t peliculas[MAX_PELICULAS],
	int tope
	){

	for(int i = 0; i < tope; i++){

		if (
			peliculas[i].genero == TERROR &&
			strcmp(peliculas[i].colaborador.nombre, "Charly") != 0 &&
			strcmp(peliculas[i].colaborador.nombre, "Renata") != 0
		)
		printf("%i - %c - %s - %s\n", i, peliculas[i].genero, peliculas[i].colaborador.nombre, peliculas[i].titulo);
	}

}

void solicitar_pelicula(pelicula_t* peli_nueva){

	printf("Ingrese titulo: ");
	scanf("%s", peli_nueva->titulo);
	//(*peli_nueva).titulo

	printf("Ingrese genero: ");
	scanf(" %c", &(peli_nueva->genero));

	printf("Ingrese gonzalitos: ");
	scanf("%i", &(peli_nueva->gonzalitos));

	printf("Ingrese el nombre del colab: ");
	scanf("%s", (*peli_nueva).colaborador.nombre);


	printf("Ingrese los cuatris: ");
	scanf("%i", &((*peli_nueva).colaborador.cuatrimestres));

	peli_nueva->colaborador.respetado_por_gonza = rand() % 2;
	//(*peli_nueva).colaborador.respetado_por_gonza = false;
}





























































































































































































































































































































void cargar_peliculas(pelicula_t peliculas[MAX_PELICULAS], int* tope) {
  
	(*tope) = 0;

	strcpy(peliculas[*tope].titulo, "The Truman Show");
	peliculas[*tope].genero = 'D';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Pulp fiction");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Charly");
	peliculas[*tope].colaborador.cuatrimestres = 50;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 1;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Mi villano favorito");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 3;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Eterno resplandor de una mente sin recuerdos");
	peliculas[*tope].genero = 'D';
	strcpy(peliculas[*tope].colaborador.nombre, "Pablo");
	peliculas[*tope].colaborador.cuatrimestres = 4;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "El maquinista");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Renata");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 2;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "9 Reinas");
	peliculas[*tope].genero = 'D';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 3;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Fenomeno siniestro");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Sol");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Spiderman: into the spiderverse");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Tomy");
	peliculas[*tope].colaborador.cuatrimestres = 5;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Coco");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 3;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Frozen 2");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Sol");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Kung Fu Panda");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Santi");
	peliculas[*tope].colaborador.cuatrimestres = 5;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "12 Monos");
	peliculas[*tope].genero = 'A';
	strcpy(peliculas[*tope].colaborador.nombre, "!Gonza");
	peliculas[*tope].colaborador.cuatrimestres = 4;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Coraline");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Delfi");
	peliculas[*tope].colaborador.cuatrimestres = 6;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "El extraño mundo de Jack");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Sol");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Antes de partir");
	peliculas[*tope].genero = 'D';
	strcpy(peliculas[*tope].colaborador.nombre, "Pablo");
	peliculas[*tope].colaborador.cuatrimestres = 4;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 3;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Charly y la fábrica de chocolate");
	peliculas[*tope].genero = 'R';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 2;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Shrek");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Agus");
	peliculas[*tope].colaborador.cuatrimestres = 4;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 2;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Up!");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Frankenweenie");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Renata");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "El grinch");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Charly y la fábrica de chocolate");
	peliculas[*tope].genero = 'D';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Clases de física 2");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Manu");
	peliculas[*tope].colaborador.cuatrimestres = 100;
	peliculas[*tope].colaborador.respetado_por_gonza = true;
	peliculas[*tope].gonzalitos = 1;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Siniestro");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Santi");
	peliculas[*tope].colaborador.cuatrimestres = 5;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 4;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Hereditary");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Santi");
	peliculas[*tope].colaborador.cuatrimestres = 5;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 2;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Los 7 enanitos");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Charly");
	peliculas[*tope].colaborador.cuatrimestres = 50;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 2;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Avatar: la leyenda de Aang");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Charly");
	peliculas[*tope].colaborador.cuatrimestres = 50;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 2;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Emoji");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Charly");
	peliculas[*tope].colaborador.cuatrimestres = 50;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 3;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Hocus Pocus");
	peliculas[*tope].genero = 'T';
	strcpy(peliculas[*tope].colaborador.nombre, "Renata");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 5;
    (*tope)++;

	strcpy(peliculas[*tope].titulo, "Mulan");
	peliculas[*tope].genero = 'I';
	strcpy(peliculas[*tope].colaborador.nombre, "Renata");
	peliculas[*tope].colaborador.cuatrimestres = 1;
	peliculas[*tope].colaborador.respetado_por_gonza = false;
	peliculas[*tope].gonzalitos = 5;
	(*tope)++;
}
