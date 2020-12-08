#include <stdio.h>
#include <stdbool.h>

#define LARGO_MAR 10
#define ANCHO_MAR 10

const int AGUA = 4;
const char BARQUITO = 'B';
const char TOCADO = 'T';
const char OOOSOOO = 'X';

void pedir_coordenada(int* coordenada){

	printf("Ingrese un número entre 1 y 10: \n");
	scanf("%i", coordenada);
	while(((*coordenada ) < 1) || ((*coordenada) > 10)){
		printf("Error, el valor debe estar entre 1 y 10 (ambos inclusive): \n");
		scanf("%i", coordenada);
	}

	(*coordenada)--;
}



/*
 * Actualiza el terreno, poniendo A si no hay barquito o T si hay barquito.
 * Latitud y longitud, dentro del terreno.
 * El mar viene con elementos validos.
 */
void disparar(char mar[LARGO_MAR][ANCHO_MAR], int latitud, int longitud){

	char que_hay = mar[latitud][longitud];

	if (que_hay == BARQUITO){
		mar[latitud][longitud] = TOCADO;
	} else if (que_hay == AGUA) {
		mar[latitud][longitud] = OOOSOOO;	
	}
}

/*
 * Devolvera true si se gano la partida.
 * Una partida se gana cuando no quedan BARQUITOS
 * 
 */
bool partida_ganada(char mar[LARGO_MAR][ANCHO_MAR]){

	int cuantos_barcos = 0;
	for(int i = 0; i < LARGO_MAR; i++){
		for(int j = 0; j < ANCHO_MAR; j++){
			if (mar[i][j] == BARQUITO){
				cuantos_barcos++;
			}
		}
	}

	return (cuantos_barcos == 0);
	//if (cuantos_barcos == 0){
	//	return true;
	//} else {
	//	return false;
	//}
}

void inicializar_mar(char mar[LARGO_MAR][ANCHO_MAR]){
	for(int i = 0; i < LARGO_MAR; i++){
		for(int j = 0; j < ANCHO_MAR; j++){
			mar[i][j] = AGUA;
		}
	}
}

void cargar_barquito(char mar[LARGO_MAR][ANCHO_MAR]){
	mar[0][2] = BARQUITO;
	mar[1][2] = BARQUITO;
}

void mostrar_mar(char mar[LARGO_MAR][ANCHO_MAR]){
	for(int i = 0; i < LARGO_MAR; i++){
		for(int j = 0; j < ANCHO_MAR; j++){
			printf("%c ", mar[i][j]);
		}
		printf("\n");
	}
}

int main(){

	char mar[LARGO_MAR][ANCHO_MAR];
	int latitud, longitud;

	inicializar_mar(mar);
	cargar_barquito(mar);
	mostrar_mar(mar);

	pedir_coordenada(&latitud);
	pedir_coordenada(&longitud);

	disparar(mar, latitud,longitud);
	mostrar_mar(mar);

	return 0;
}












