#include <stdio.h>
#define MAXIMO_DONACIONES 5
#define DONANTE_PREFERIDO 'M'

void cargar_donaciones(int donaciones[MAXIMO_DONACIONES], int* tope_donaciones,
                      char donantes[MAXIMO_DONACIONES], int* tope_donantes) {
  printf("Holis! Acá vas a ingresar las donaciones\n");
  printf("Cuando quieras dejar de donar ingresa un número negativo\n");

  int donacion_actual;
  char donante_actual;

  // tope = 0
  // pregunta 1
  printf("Ingrese una donación: \n");
  scanf("%i", &donacion_actual);
  printf("Ah, e ingrese la inicial de quién dono\n");
  scanf(" %c", &donante_actual);

  // tope = 4
  while(donaciones[(*tope_donaciones)] >= 0   && (*tope_donaciones) < MAXIMO_DONACIONES
      && (*tope_donantes) < MAXIMO_DONACIONES) {

    // guardando en array[4]
    donaciones[(*tope_donaciones)] = donacion_actual;
    donantes[(*tope_donantes)] = donante_actual;

    // tope = 5
    (*tope_donaciones)++;
    (*tope_donantes)++;

    // pregunta 6
    if((*tope_donaciones) < MAXIMO_DONACIONES && (*tope_donaciones) < MAXIMO_DONACIONES) {
      // no entra con tope = 5
      printf("Ingrese una donación: \n");
      scanf("%i", &donacion_actual);
      printf("Ah, e ingrese la inicial de quién dono\n");
      scanf(" %c", &donante_actual);
    } else {
      printf("Te quedaste sin lugar para donaciones\n");
    }
  }
}

void mostrar_donaciones(int donaciones[MAXIMO_DONACIONES], int tope_donaciones,
    char donantes[MAXIMO_DONACIONES], int tope_donantes, char donante_preferido) {

  for(int i = 0; i < tope_donaciones; i++) {
    if(donantes[i] == donante_preferido) {
      printf("Donación: %i\n", donaciones[i]);
    }
  }
}

int main () {
  int donaciones[MAXIMO_DONACIONES];
  char donantes[MAXIMO_DONACIONES];
  int tope_donaciones = 0;
  int tope_donantes = 0;

  cargar_donaciones(donaciones, &tope_donaciones, donantes, &tope_donantes);
  // imprimir donaciones de m
  mostrar_donaciones(donaciones, tope_donaciones, donantes, tope_donantes, DONANTE_PREFERIDO);

  return 0;
}
