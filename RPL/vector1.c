#include <stdio.h>
#define MAX_HABITACIONES 200

/*
int posicion_llave(char habitaciones[MAX_HABITACIONES], int tope_habitaciones) {
    char llave="L";
	for (int i = 0; i < tope_habitaciones; i++){
        if ( habitaciones[i]==llave){
            printf("[pos]: %i, %c\n",habitaciones[i],llave);
            return habitaciones[i];
            break;
        }       
    }
    
}
 */
//=========================================================================
int main(){
    char habitaciones[MAX_HABITACIONES]=['L','M','S','A','W','Q'];
    int tope_habitaciones=6;
    //int ubicacion_llave = posicion_llave(habitaciones, tope_habitaciones);
     char llave="L";
	for (int i = 0; i < tope_habitaciones; i++){
        if ( habitaciones[i]==llave){
            printf("[pos]: %i, %c\n",habitaciones[i],llave);
            return habitaciones[i];
            break;
        }       
    }
    return 0;
}

/*
Un día lluvioso y con mucho frío, los amigos imaginarios se estaban aburriendo mucho,
por lo que se les ocurrió una idea para molestar al Señor Conejo: 
Esconder la llave de la mansión en una de las tantas habitaciones.

Sabiendo que la llave sólo puede estar en las habitaciones abiertas, que cada posición
del vector representa una habitación, y que la llave está representada por una L,
implementar una función que devuelva en que posición se encuentra dicha llave.

Ejemplos:

Si se recibe un vector [T,R,P,L,E,S,B], se debe devolver la posición 3.
Si se recibe un vector [L,M,S,A,W,Q], se debe devolver la posición 0.
 */