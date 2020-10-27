    #include <stdio.h>
	#include <stdlib.h>
	const char Dulce  = 'D';
	const char Salado= 'S';
	const char Amargo= 'A';
	
    void introducir_sabor(char *s){
        do{
            // printf("123\n");
            printf("ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");
            // printf("456\n");
            scanf("%c",s);
            // printf("789\n");
        } while(!( *s==Dulce || *s==Salado || *s==Amargo) );
    }

	int main() {
	  char sabor;
	  introducir_sabor(&sabor);
	  printf("sabor: %s\n",&sabor);
	  return 0;
	}