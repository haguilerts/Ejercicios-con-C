#include<stdio.h>

int main(void){
    printf("hola mundo");
    return 0;
}
/*
-vim archivo.c
    :set number ::"enumera las filas"
    :0  ::"me muevo a la 1° linea "
    :$  ::"me dirijo a la ultima linea"
    shif + $ ::"se dirige a la ultima col de la fila"
    enter :: edito el texto en la fila q me encuentre
    escape :: salgo de la edicion 
    :x   ::"sale de Vim y guarda los cambios"
-vin archivo.c :"visializa el codigo con todas sus comentarios"

VERIFICA LOS EJECICIOS EN BUEN ESTADO:
cd ..  : ir atras
cd carpeta : ingresa a la carpeta 
ls: muestra 

gcc holaMundo.c -o ejecutable -std=c99 -Wall -Wconversion -Werror : copila si existe errores de sintaxis de error en los codigos
gcc holaMundo.c -o ejecutable && ./ejecutablels : ejecuta el programa 
----------------------------------------
~/Escritorio/tp2$ zip tp2.zip animos.c animos.h 
defendiendo_torres.c defendiendo_torres.h juego.c utiles.h utiles.o 
*****************************************************

Formateador                Salida
	%d ó %i 			entero en base 10 con signo (int)
	%u   				entero en base 10 sin signo (int)
	%o 					entero en base 10 sin signo (int)
	%X 					entero en base 8 sin signo (int)
	%X 					entero en base 16, letras en minúscula (int)
	%f 					Coma flotante decimal de precisión simple (float)
	%lf 				Coma flotante decimal de precisión doble (double)
	%e 					La notación cientı́fica (mantisa / exponente)
	%E 					La notación cientı́fica (mantisa / exponente)
	%c 					caracter (char)
	%s 					cadena de caracteres (string)
	%c 					matrices
	%p o %h				puntero 		 printf("memVector[]: %p\n",&vector[2]);

	\a : alerta
	\b : espacio atras
	\f : salto de paginas
	\n : salto de linea
	\r : retorno de carro
	\t : tabulador horizontal
	\v : tabulador vertical
    
_/*	la dependeia de ser mayo o no se basa de la tabla ASSI.
    < 0    si    cadena1 < cadena2 		return: -1
    ==0    si    cadena1 == cadena2		return:  0
    > 0    si    cadena1 > cadena2		return:  1
    la comparacion se da caracter a caracter: 
*/
//__________________________________________________________________________________________
//--------------------------------------- archivos y abstraccion -------------------------------------------------------------------------
// ifndef:  sirve para no definir mas de una una biblioteca.   .h= que | .o= es el como empaquetado | .c= como
//		  gcc -c arim.c -o arim.o
// complilacion: gcc  -c -g  arim.c -o arim.o
//				 gcc -g unprg.c armi.o -o unprg.o
//
// typedef: 

/*-------------------------------------- pasaje por referencia --------------------------------------------------
operacions unitarios 
& ---> direccion
* ---> contenido


int a,b,c;
&a : toma el espacio de memoria de 'a'
int * ptr_a; 	// almacena espacio de memoria 
&*prt_a: tomas ese espacio de memoria 
	scanf("%i",&a); // asigno un valor atraves del espacio de memoria 
	print("mi contenido de la variable 'a' es : %i \n",a);
	print("mi espacioMemoria de la variable 'a' es : %p \n",&a);

ptr_a=&a; // le asigno el espacio de memoria de 'a' 
	print("mi espacio de memoria de la variable 'ptr_a' es : %i \n",*ptr_a);


 */




