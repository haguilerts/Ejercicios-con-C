#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE_PB 21

int main(){
	
	char nombre[MAX_NOMBRE_PB];
	char apellido_colab[MAX_NOMBRE_PB];

	printf("Che Renata decime un nombre para la perra de Berni!\n");
	scanf("%s", nombre);

	printf("Renata eligio: %s\n", nombre);

	printf("Che Renata me gustó mucho el nombre que elegistesss, decime tu ape");
	scanf("%s", apellido_colab);

	if (strlen(nombre) + strlen(apellido_colab) + 1 <= 20) {
		strcat(nombre, " ");
		printf("Ahora se llama: %s\n", nombre);
		strcat(nombre, apellido_colab);
		printf("Ahora se llama: %s\n", nombre);
	} else {
		printf("No entra che, lo dejo como estaba.\n");
	}

	if (strcmp(nombre, apellido_colab) < 0) {
		printf("apellido es mayor que nombre.\n");
	} else if (strcmp(nombre, apellido_colab) > 0) {
		printf("nombre es mayor que apellido.\n");
	} else {
		printf("nombre y apellido son iguales.\n");
	}

	return 0;
}