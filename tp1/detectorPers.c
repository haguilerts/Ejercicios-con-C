//Materia: Algoritmo 1 - trabajo practico n°1 - alum: Giovanny Aguilar Rojas  -  porf: Mendez - año: 2° cutri 2020
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const char DULCE  = 'D';
const char SALADO= 'S';
const char AMARGO= 'A';

#define ALTURA_CORAJE         30
#define ALTURA_POLLITO        50
#define ALTURA_BELLOTA        120
#define ALTURA_BLUE           140
#define ALTURA_JHONNY_BRAVO   180
#define ALTURA_PURO_HUESO     200

const int PUNTAJE_COLOR_AZUL     = 20;
const int PUNTAJE_COLOR_VERDE    = 20;
const int PUNTAJE_COLOR_NEGRO    = 15;
const int PUNTAJE_COLOR_BLANCO   = 15;
const int PUNTAJE_COLOR_ROSA     = 5;
const int PUNTAJE_COLOR_AMARILLO = 5;

const int PUNTAJE_SABOR_SALADO   = 5;
const int PUNTAJE_SABOR_DULCE    = 15;
const int PUNTAJE_SABOR_AMARGO   = 20;

const int MIN_1RANGO_ZAPATO   = 33;
const int MAX_1RANGO_ZAPATO   = 37;
const int MIN_2RANGO_ZAPATO   = 38;
const int MAX_2RANGO_ZAPATO   = 42;
const int MIN_3RANGO_ZAPATO   = 43;
const int MAX_3RANGO_ZAPATO   = 47;
const int NULL_RANGO_ZAPATO   = 0;

const int MIN_RANGO_FECHA   = 1988;
const int MAX_RANGO_FECHA   = 2008;

const int MIN_RANGO_ALTURA   = 10;
const int MAX_RANGO_ALTURA   = 250;

const int MIN_1PUNTAJE_TOTAL  = 1;
const int MAX_1PUNTAJE_TOTAL  = 80;
const int MIN_2PUNTAJE_TOTAL  = 81;
const int MAX_2PUNTAJE_TOTAL  = 160;

#define AZUL      'A'
#define AMARRILLO 'Y'
#define VERDE     'V'
#define NEGRO     'N'
#define BLANCO    'B'
#define ROSA      'R'

#define CORAJE      'c'
#define POLLITO     'P'
#define BELLOTA     'B'
#define BLUE        'R'
#define JHONNY_BRAVO 'J'
#define PURO_HUESOS 'H'

   /*
   *PRE:  se debera ingresar un personaje exixtente.
   *POST: retornara la altura apropiada de cada perosnaja segun el perosjae elejido.
   */
int altura_personaje(char p){
    int alt;
    switch (p){
      case CORAJE:
         alt=ALTURA_CORAJE;
        break;
      case POLLITO:
         alt=ALTURA_POLLITO;
        break;
      case BELLOTA:
         alt=ALTURA_BELLOTA;
        break;
      case BLUE:
         alt=ALTURA_BLUE;
        break;
      case JHONNY_BRAVO:
         alt=ALTURA_JHONNY_BRAVO;
        break;
      case PURO_HUESOS:
         alt=ALTURA_PURO_HUESO;
        break;
    }
    return  alt;
  }

   /*
   *PRE: debera ingresar un altura de un perosnaje para determinar el personaje indicado
   *POST: segun la altura seleccionado retornara un mensaje del personaje seleccionado. 
   */
  void traerNombre(int jug1){    
    switch (jug1){
    case ALTURA_CORAJE:
        printf("- Coraje - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case ALTURA_POLLITO:
        printf("- Pollito - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case ALTURA_BELLOTA:
        printf("- Bellota - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case ALTURA_BLUE:
        printf("- Blue - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case ALTURA_JHONNY_BRAVO:
        printf("- Jhony_Bravo - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case ALTURA_PURO_HUESO:
        printf("- Puro_huesos - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    }
   }  
   /*
   *PRE:  debe ingresar un color segun el mensaje indicado y del tipo carcater.
   *POST: determinara si el valor ingresado coincide con algun color mencioado,
          caso afirmativo retornara un puntaje segun el color seleccionado.
          caso contrario volvera a ingresar un color.
   */
  int  introducir_color(char *color){  
    int puntaje;    
    do{
      printf("--> ingrese un Color: Azul(A), Amarillo(Y), Verde(V), Negro(N), Branco(B) o Rosa(R)\n");
            scanf(" %c",color);
      switch (*color){
        case AZUL:
            puntaje=PUNTAJE_COLOR_AZUL;            
          break;
        case VERDE:
            puntaje=PUNTAJE_COLOR_VERDE;           
          break;
        case NEGRO:
            puntaje=PUNTAJE_COLOR_NEGRO;            
          break;
        case BLANCO:
            puntaje=PUNTAJE_COLOR_BLANCO;          
          break;
        case ROSA:
            puntaje=PUNTAJE_COLOR_ROSA;          
          break;
        case AMARRILLO:
            puntaje=PUNTAJE_COLOR_AMARILLO;          
          break;
        //printf("res: %i\n",res);
      }
    } while (*color!=AZUL && *color!=AMARRILLO && *color!=VERDE && *color!=NEGRO && *color!=BLANCO && *color!=ROSA );
    return puntaje;    
  }
  
  //-----------------------------------------------------------------------------------------------------
    /*
    *PRE: se introducera un valor entero entre 1988 y 2008 incluyentes.
    *POST: retorna una operacion entera menor a 20.
    */
    int operacion_de_puntaje(int *fecha){
      int res=((*fecha) % 20)+1;
      return res;
    }
  /*
   *PRE: se igresara solo un numero entero positivo. 
   *POST: retornara una un entero entre 1 y 9
   */
  int introducir_fecha_Nacimiento(int *fecha){    
      do{
        printf("--> ingrese la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",fecha);
      }while(*fecha<MIN_RANGO_FECHA || *fecha>MAX_RANGO_FECHA ); // 
      return operacion_de_puntaje(fecha);      
  } 
    /*
    *PRE: se ingresara un sabor para determinar un puntaje apropiado, segun el sabor elejido. No ingresar un numero entero.
    *POST: retornara un puntaje entero 
    */
    int asignar_puntaje_Sabor(char *s){
      int puntaje=PUNTAJE_SABOR_AMARGO;    
      if (*s == DULCE)
        puntaje=PUNTAJE_SABOR_DULCE;
      else if(*s == SALADO)
        puntaje=PUNTAJE_SABOR_SALADO;
      return puntaje;
    }
  /*
  *PRE: se ingresara un sabor con un caracter segun el mensaje indicado.  
  *POST:  retornara un puntaje entero segun el sabor elejido.
  */
  int introducir_sabor(char *s){
    do{      
      printf("--> ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");       
      scanf(" %c",s);       
    } while(!( *s==DULCE || *s==SALADO || *s==AMARGO) );
    return asignar_puntaje_Sabor(s);    
  }
    /*
    *PRE: se ingresara un talle de zapato entero positivo entre [33 y 47] o 0, incluyente 
    *POST: segun el rango de talle introducido retornara un valor entero entre 2 y 4. 
          caso contrario retorna un 0.
    */
    int asignar_puntaje_Zapato(int *talla){
      int cont=NULL_RANGO_ZAPATO;
        if (*talla >=MIN_1RANGO_ZAPATO && *talla <=MAX_1RANGO_ZAPATO)
          cont=2;
        else if (*talla >=MIN_2RANGO_ZAPATO && *talla <=MAX_2RANGO_ZAPATO)
          cont=3;            
        else if (*talla >=MIN_3RANGO_ZAPATO && *talla <=MAX_3RANGO_ZAPATO)
          cont=4;        
      //printf("c: %i\n",cont);
      return cont;   
    }
    /*
   *PRE: determinara el talle de zapato entero entre un rango [33 y 47], incluyentes o 0 .
   *POST: retornara un bollean, si la afirmacion es correcta sera TRUE, caso contrario FALSE .
   */
    bool condicion_talla_zapato(int *talla){
      return ((*talla>=MIN_1RANGO_ZAPATO && *talla<=MAX_3RANGO_ZAPATO) || *talla==NULL_RANGO_ZAPATO) ? true : false;
    }
   /*
   *PRE: se debera ingresar un el numero de llate de zapato solo entero.
   *POST: retornara el talle adecuado segun el numero seleccionado.
   */
  int introducir_talla_Zapato(int *talla){
    do{
      printf("--> ingrese el Talle de Zapato entre [33 - 47], excluyente o '0'\n");
      scanf("%i",talla);
    }while(!condicion_talla_zapato(talla));
     return asignar_puntaje_Zapato(talla); 
     // (*talla<MIN_1RANGO_ZAPATO || *talla>MAX_3RANGO_ZAPATO) && *talla!=NULL_RANGO_ZAPATO
  }
  
   /*
   *PRE:  se le asignara el valor de altura ingresado por parametro entre [10 y 250], incluyente.
   *POST: --- se le asignara el valor que llega por puntero.
   */
  void puntaje_altura(int *altura){
      do{
        printf("ingrese la Altura entre [10 - 250], excluyente\n");
        scanf("%i",altura);
      }while(*altura<MIN_RANGO_ALTURA || *altura>MAX_RANGO_ALTURA);    
  }
   /*
   *PRE: se ingresara 5 punatajes enteros para realizar una operacion arimetica. 
   *POST: retornara un valor entero de la operacion dada.
   */
  int puntaje_total(int*sabor,int*talla_zapato,int*color,int*fecha){
    return ((*sabor + *color + *fecha)*(*talla_zapato));
  }
   /*
   *PRE:  se ingresara la altura seleccionado de 2 personajes  y la del usuario para determinar el personaje indicado
   *POST: se determinara la altura del personaje mas sercano al usuario para indicar el personaje indicado o seleccionado.
   */
  void personaje_indicado(int altP1, int altP2, int* alturaUsuario){
    int jug1=abs(altP1-(*alturaUsuario));
    int jug2=abs(altP2-(*alturaUsuario));
    //printf("j1: %i  -- j2: %i \n",jug1,jug2);
    if (jug1<jug2)
      traerNombre(altP1);      
    else
      traerNombre(altP2);        
  } 
   /*
   *PRE:  se ingresara el puntaje total y  la altura del usuario para determinar a 
          dos personajes posibles segun el rango del el puntaje total.
   *POST: se prosedera a identificar al personaje indicado 
   */
  void personajes_posibles(int* punTotal, int* alturaUsuario){
    int altPersonaje1=0;
    int altPersonaje2=0;

    if (*punTotal>=MIN_1PUNTAJE_TOTAL && *punTotal<=MAX_1PUNTAJE_TOTAL){
      altPersonaje1=altura_personaje(JHONNY_BRAVO);
      altPersonaje2=altura_personaje(CORAJE);      
    }else if(*punTotal>=MIN_2PUNTAJE_TOTAL && *punTotal<=MAX_2PUNTAJE_TOTAL){
      altPersonaje1=altura_personaje(PURO_HUESOS);
      altPersonaje2=altura_personaje(POLLITO); 
    }else{
      altPersonaje1=altura_personaje(BLUE);
      altPersonaje2=altura_personaje(BELLOTA);
    }
    personaje_indicado(altPersonaje1,altPersonaje2,alturaUsuario);  
     //printf("PT: %i\n",*punTotal);  

  }
   /*
   *PRE:  se ingresaran los 5 datos ingresados por el suario para inicializarlos
   *POST: determina el puntaje total segun los valores ingresados 
   */
  void  ingresarDatos(int* fecha,int* tallaZapato,int* altura,char* sabor,char* color,int* punTotal){
    int fecha_nacimiento    =introducir_fecha_Nacimiento(fecha);
    int preferencia_Sabor   =introducir_sabor(sabor);
    int talla_zapato        =introducir_talla_Zapato(tallaZapato);
    int color_preferido     =introducir_color(color);
    puntaje_altura(altura);      
    *punTotal  =(preferencia_Sabor + color_preferido + fecha_nacimiento) * talla_zapato;
    
    //printf("resultado es: %i",punTotal);
  }
//=========================================================================
int main(){
    int fachaNacimiento ;
    int tallaZapato     ;
    int alturaPers      ;
    char saborPreferido ;
    char colorPreferido ;
    int puntaje_total=0;
    ingresarDatos(&fachaNacimiento,&tallaZapato,&alturaPers,&saborPreferido,&colorPreferido,&puntaje_total);
    personajes_posibles(&puntaje_total, &alturaPers);  
   
    //printf("\n fecha: %i -- talla de zapato: %i -- altura de perosnaje: %i -- saborPreferido: %c -- colorPreferido: %c\n",fachaNacimiento,tallaZapato,alturaPers,saborPreferido,colorPreferido);
    return 0;
}

//gcc detectorPers.c -o e -Wall -Wconversion -Werror && ./e
