#include <stdio.h>
#include <stdbool.h>

int oneta(int numeros[20], int posicion_actual){

	/* Condicion de corte */
	if (numeros[posicion_actual] == 19){
		return posicion_actual;
	}

	/* Llamada recursiva */
	int valor = oneta(numeros, numeros[posicion_actual]);
	return valor;

}

int main(){

	int numeros[20];
	inicializar_vector(numeros);

	int posicion_19 = oneta(numeros, 0);
	return 0;
}












