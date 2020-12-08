#include <stdio.h>
#include "matematicas.h"



}
int main(){
    int num1=56;
    int num2=99;

    int suma_num=suma(num1,num2);
    int mult_num=multiplicacion(num1,num2);
    int resta_num=resta(num1,num2);
    int divi_num=divicion(num1,num2);

    if (es_par(num1)) {
        printf("es par num1");
    }
    
    return 0;
}

/*
.h (hoaders): van toda las firmas de los contratos (el llamado a la funcion publica) 
    con us post y pre. constantes publicas y estructuras.
    implementacion de fucniones publicas(son funciones q puede acceder) y privadas(q el usuario no pueda acceder)
.c : van mis cosdigos y funcions publicas y privadas


 copila: gcc struct_obj.c matematicas.c -o e -Wall -Wconversion -Werror 
 ejecuta: ./e
 */