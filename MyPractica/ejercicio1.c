#include <stdio.h>

void puntero(int* ptr_a,int *a){
 	scanf("%i",&*a); // asigno un valor atraves del espacio de memoria 
		printf("mi contenido de la variable 'a' es : %i \n",*a);
	*ptr_a=*a; // le asigno el espacio de memoria de 'a' 
		printf("mi espacio de memoria de la variable 'ptr_a' es : %p \n",&*ptr_a);
		printf("mi espacio de memoria de la variable 'a' es : %p \n",&*a);

}


int main(){
    printf("binvenidos a ..");
    printf("Algo1 Mendes\n");

 /*    
    int a= 13;
	printf("salto en linea ...\n");
	printf("salto en nueva linea doble...\n\n"); // salto en linea \n
	printf("martin ara un tabulador...\t . lo viste l COMILLA \" ara \n """ );
	printf("%i\n",a );
	printf(" precio $: %i\n ",a); //imprimo la variable y realizo el salto en linea
	printf("---------------------------------\n");
	//, d1=’Aguilar’ apellido: %c\n
	 a= 3;
	int a1=4;
	int a2=-3;
	float b= 2.4,b1=2.5;
	double c=3.14, c1=5.1535, c3=0;
	// caht toma valores de la tabla Assci	
	char d='b', numd1=50, numd2=53, mas=43, letd3=65;// d(b) - 50(2) - 53(5) - 43(+) - 65(A)
	char d4= numd1 + numd2;
	// importamos el formato String para usar cadena de texto	
	char nomb[15]="giovanny\0";// la \0 le da un punto final
	char apell[9]="Aguilar\0";//  imprime la long asignada [0]=A asta [9]=0
	
	printf("El doble de %i es %i y su cuadrado es %i\n",a,a*2,a*a);
	printf(" -int: %i\n -float: %f\n -double: %f\n\n  ", a , b, c);
	printf("-mult.Int: %i\t -sum.float: %f\t -res.Double: %f\n", a*a1 ,b+b1,c-c1);
	printf("mult.Float && Double: %f\t suma:%f\t div0:%f\n",b*c,a+c, b/c3 );
	printf("letra: %c\t ascii: %c\t sumAscii: %c\t 1sumAscii: %c\n",d,mas, numd1 + numd2 , numd1+letd3 ); //se suman las posiones, 50(2) + 53(5) =103(g)
	printf("otraSuma:%c\n ",d4  );
	printf("nombre:%s\t\t apellido:%s\n",nomb ,apell);
	printf("strcat: %s\n",strcat(nomb, apell) ); // imprime todo junto concatenado
	
    printf("\n ------------------- pruevas -----------------------\n ");

	char string_vacio [] = "";
	char string_largo [] = "hola me llama giovanny ." ;
	char string_definido [25] = { "hola me llama brandon \0"};
	char hola []={'h','o','l','a',' ','q','u','e','n',' ','s','o','s','\0'};

			string_puts ( string_vacio) ;
			printf("\n");
			string_puts ( string_largo ) ;
			printf("\n");			
			string_puts ( string_definido ) ;
			printf("\n");			
			string_puts ( hola ) ;
			
			printf("\n------ comparacion con la longitud del string -----\n");
			assert( tamanio(string_vacio) == 0);
			assert( tamanio(string_largo) == 24);
			assert( tamanio(string_definido) == 22);

			puts("\n-----impresion de texto\n");
  
  */   //-------------------------------------------------------------------------------------
/*	printf("\n ---- strlen(longitud), strcpy(asigna valor), strcat(union), sprintf(union sensilla), strcmp(compara) ----\n ");
		
			char texto[]="strlen";
			int longitud;
			longitud = strlen(texto);// te da la longitud de String
			printf( "La cadena \"%s\" tiene un longitud de %i caracteres.\n\n", texto, longitud );

			char texto1[] = "se usa strcpy  ";			
			char destino[50];
			printf( "destino: %s --texto1: %s  \n", texto1, destino );
			strcpy( destino, texto1 );
			printf( "destino: %s --texto1: %s  \n", texto1, destino);
			strcpy( destino, texto );
			printf( "destino: %s --texto: %s \n", texto, destino);
			strcpy( destino, "abc123" );
			printf( "asigno el valor de destino : %s\n\n", destino);

			char nombre_completo[50];
			char nombre[]="Haguilerts";
			char apellido[]="Aguilar Rojas";
			strcpy( nombre_completo, nombre );// lo copia 
			strcat( nombre_completo, " " ); // lo une
			strcat( nombre_completo, apellido ); // lo une
			printf( "El nombre completo (strcat): %s.\n", nombre_completo );

			sprintf( nombre_completo, "%s %s", nombre, apellido );
			printf( "El nombre completo (sprintf): %s.\n", nombre_completo );

			char nombre1[]="Giovanny";
			char nombre2[]="giovanny";
			char nombre22[]="giovanny";
			char nombre3[]="aaa";
			char nombre4[]="aaA";
			int resultado=strcmp(nombre1,nombre2);
			//	la dependeia de ser mayo o no se basa de la tabla ASSI.
			//	< 0    si    cadena1 < cadena2 		return: -1
			//	==0    si    cadena1 == cadena2		return:  0
			//	> 0    si    cadena1 > cadena2		return:  1
			//	la comparacion se da caracter a caracter: 
			
			printf( "Comparación con strcmp: %i\n", resultado); // -1
			printf( "Comparación con strcmp: %i\n", strcmp( nombre2,nombre22 ));// 0
			printf( "Comparación con strcmp: %i\n", strcmp( nombre3,nombre4 ));// 1

printf("\n ------------------- scanert -----------------------\n ");
	int edad ;
	char sexo;
	printf("\nescriva su edad(en años) y sexo(H o M):\n");	
   // scanf ("Edad: %i\t Sexo: %c\n", &edad,&sexo);
   // puts(edad, sexo);
    printf("Berni a que altura estas?..\n");
    int altura;
    scanf("%i", &altura); // asigna valor x consola 
    printf("Berni esta a la altura: \n");

 */
printf("\n ------------------- puntero -----------------------\n ");

int a;
int * ptr_a; 	// almacena espacio de memoria 
	puntero(&*ptr_a,&a);
printf("mi espacioMemoria de la variable 'ptr_a' es : %p \n",&ptr_a);
printf("mi espacioMemoria de la variable 'a' es : %p \n",&a);


printf("-================ fin ================---\n ");

    return 0;
}
//gcc ejercicio1.c -o e -std=c99 -Wall -Wconversion -Werror 
 