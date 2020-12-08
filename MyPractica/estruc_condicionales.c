#include <stdio.h>
#include <stdbool.h>


void Cambiar(){
    printf("Bienvenido a switch...\n");
	int num =2 ;
	printf("ingrese un numero:\t");
	//scanf("--%i",&num);
		switch(num){
			case 1:
				printf("\t nro vale 1\n");
				break;
			case 2:
				printf("\t nro vale 2\n");
				break;
			case 3:
				printf("\t nro vale 3\n");
				break;
			case 4:
				printf("\t nro vale 4 o 5\n");
				break;
			default:
				printf("\t nro vale 5\n");				
		}
 // tengo problemas para ejecutar...
	char l=45;
	printf("ingrese una letra:\t");
	scanf(" %c",&l);
	printf("\t letra.%c\n",l);
				
		switch(l){
			case 'a':
				printf("\n\t Ingresado la letra 'a'.\n");
				break;
			case 'b':
				printf("\t Ingresado la letra 'b'.\n");
				break;
			case 'c':
				printf("\t Ingresado la letra 'c.\n");
				break;
			case 'd':
				printf("\t Ingresado la letra 'd'.\n");
				break;
			case 65:
				printf("\t Ingresado la letra 'A'.\n");
				break;
			default:
				printf("\t Nose se ingreso ninguna letra.%c\n",l);
				
		}
}
void Mientras(){
    int a=0, b=0;
	printf("Bienvenido al while \n");
	while(a<=10){	// si es verdadero continua, si es falso termina la ejcucion 	
		printf(".n°: %i\n",a);// contador de 0 al 10
		a=a+1;
	}

	do{
		printf("N°: %i\n",b);
		b=b+1;
	}while(b<=10);
	// al menos UNA VES  ejecuta la intruccion, 
	// si es verdaero vuelve a ejcutar, pero cuando es falso sale (THEN END)
	
	printf("fin.. \n");
}
void Para(){
    printf("Bienvenido al for \n");
		for (int i = 0; i <10; ++i){ // acendente de 0 a 10
			printf(".n°: %i\n",i);
		}

		for (int i = 10; i>=0; i--){ // desendente de 10 a 0
			printf("..n°: %i\n",i);
		}
		
		for (int i = 0; i <20; i+=2){ // muntiplo de dos i=i+2 => i+=2
			printf( "  n°:%i\n",i);
		}
		 	 
		/*		char c1[6]={'h','e','l','l','o','\0'};
				a: H 	 E 		 L 		 L 		 O 		\0
				a[0]	a[1]	a[2]	a[3]	a[4]	a[5]
			strlen(cadena) : devuleve long de la cadena si toman el caracter final de la cadena 
			strcpy(cad_destino, cad_origen) : copia el contenido del origen al destino
			strcat(cad_destino, cad_origen) : concatena el contenido de origen al final de destino 
			strcmp(cad1, cad2) : compara las dos cadenas y devuele:
				 "0" si son iguales.
				 "-n°"si cad1 < cad2 (presede alfabeticamente a<aa<ab<abc)
				 "+n°"si cad1 > cad2
		*/
		// tengo probelmas
		/*
		char c[5]="hello";
		char c1[6]={'h','e','l','l','o','\0'};
		int b[4]={ 1,2,3,4}
		for (int i = 0; i < strlen(c1); ++i){
			printf("cadena: %c\t _n°:%c\n",c1,c1[i]);
		}
		*/
		// tengo probelmas
		
			printf("matris 5x5..\n");
		for (int i = 0; i <=5; ++i){
			for (int j = 0; i <=5; ++i){
				printf("-i%i _j%i\n",i,j );
			} printf("-i%i ",i );
		}
		printf("------ fin ------\n");
}
void Si(){
    printf("Bienvenido al IF() \n");
    bool condicion = true;
    if(condicion){
        printf("se ejecuta siempre q sea verdadero\n");
    }else{
        printf("se ejecuta se es falso la consicion\n");
    }
}
//----------------------------------------------------
int main(){
    Cambiar();
    Mientras();
    Para();
    Si();
    return 0;
    // gcc estructuras.c -o e && ./e

}
