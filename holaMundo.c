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
gcc holaMundo.c -o ejecutable -std=c99 -Wall -Wconversion -Werror 

gcc holaMundo.c -o ejecutable && ./a

PARA VERIFICAR  LOS TPS:
curl -X POST -H "Content-Type: multipart/form-data" -F "file=@./influencers.zip" -F tp=torres  "https://servicios.algoritmos7540mendez.com.ar/tests"

	palabas reservadas: 	
		auto break case char const continue default do double else enum extern float
		for goto if int long register return short signed sizeof static struct
		switch typedef union unsigned void volati	

----------------------------------------
~/Escritorio/tp2$ zip tp2.zip animos.c animos.h 
defendiendo_torres.c defendiendo_torres.h juego.c utiles.h utiles.o 

*/ 