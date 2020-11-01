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
const int MIN_3PUNTAJE_TOTAL  = 161;
const int MAX_3PUNTAJE_TOTAL  = 240;
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
  void traer_nombre(int jug1){    
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
        printf("- Johnny Bravo - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case ALTURA_PURO_HUESO:
        printf("- Puro Hueso - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    }
   } 
   //----------------------------------------------------------------------------------------
  int asignar_puntaje_color(char *color){
    int puntaje;  
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
    return puntaje;  
   } 
   /*
   *PRE:  debe ingresar un color segun el mensaje indicado y del tipo carcater.
   *POST: determinara si el valor ingresado coincide con algun color mencioado,
          caso afirmativo retornara un puntaje segun el color seleccionado.
          caso contrario volvera a ingresar un color.
   */

  int  introducir_color(char *color){  
    printf("--> ingrese un Color: Azul(A), Amarillo(Y), Verde(V), Negro(N), Branco(B) o Rosa(R)\n");
    scanf(" %c",color);    
    while ( !(*color==AZUL || *color==AMARRILLO || *color==VERDE || *color==NEGRO || *color==BLANCO || *color==ROSA) ){
      printf("--> ingrese de nuevo un Color: Azul(A), Amarillo(Y), Verde(V), Negro(N), Branco(B) o Rosa(R)\n");
      scanf(" %c",color);
    }
    return asignar_puntaje_color(color);
      
  }
  
  //-----------------------------------------------------------------------------------------------------
    /*
    *PRE: se introducera un valor entero entre 1988 y 2008 incluyentes.
    *POST: retorna una operacion entera menor a 20.
    */
    int operacion_de_puntaje(int *fecha){
      int respuesta=((*fecha) % 20)+1;
      printf("FN: %i\n",respuesta);
      return respuesta;
    }
  /*
   *PRE: se igresara solo un numero entero positivo. 
   *POST: retornara una un entero entre 1 y 9
   */
  int introducir_fecha_Nacimiento(int *fecha){    
     /* do{
        printf("--> ingrese la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",fecha);
      }while(*fecha<MIN_RANGO_FECHA || *fecha>MAX_RANGO_FECHA ); // 
       */
      printf("--> ingrese la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",fecha);
      while(!(*fecha>=MIN_RANGO_FECHA && *fecha<=MAX_RANGO_FECHA) ){
        printf("--> VUELVA a ingresar la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",fecha);
      }
      return operacion_de_puntaje(fecha);  
         
  }
  //------------------------------------------------------------------------------------------------ 
    /*
    *PRE: se ingresara un sabor para determinar un puntaje apropiado, segun el sabor elejido. No ingresar un numero entero.
    *POST: retornara un puntaje entero 
    */
    int asignar_puntaje_Sabor(char *sabor){
      int puntaje=PUNTAJE_SABOR_AMARGO;    
      if (*sabor == DULCE)
        puntaje=PUNTAJE_SABOR_DULCE;
      else if(*sabor == SALADO)
        puntaje=PUNTAJE_SABOR_SALADO;
      return puntaje;
    }
  /*
  *PRE: se ingresara un sabor con un caracter segun el mensaje indicado.  
  *POST:  retornara un puntaje entero segun el sabor elejido.
  */
  int introducir_sabor(char *sabor){
    printf("--> ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");       
    scanf(" %c",sabor);
    while(!( *sabor==DULCE || *sabor==SALADO || *sabor==AMARGO) ){      
      printf("--> ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");       
      scanf(" %c",sabor);       
    } 
    return asignar_puntaje_Sabor(sabor);    
  }
  //------------------------------------------------------------------------------------------------   
    /*
   *PRE: determinara el talle de zapato entero entre un rango [33 y 47], incluyentes o 0 .
   *POST: retornara un bollean, si la afirmacion es correcta sera TRUE, caso contrario FALSE .
   */
    bool condicion_talla_zapato(int *talla){
      return ((*talla>=MIN_1RANGO_ZAPATO && *talla<=MAX_3RANGO_ZAPATO) || *talla==NULL_RANGO_ZAPATO);
    }
   /*
   *PRE: se debera ingresar un el numero de llate de zapato solo entero.
   *POST: retornara el talle adecuado segun el numero seleccionado.
   */
   void introducir_talla_Zapato(int *talla){
    printf("--> ingrese el Talle de Zapato entre [33 - 47], excluyente o '0'\n");
    scanf("%i",talla);
    while(!(condicion_talla_zapato(talla)) ){
      printf("--> ingrese el Talle de Zapato entre [33 - 47], excluyente o '0'\n");
      scanf("%i",talla);
    }
    
    //return asignar_puntaje_Zapato(talla); 
     // (*talla<MIN_1RANGO_ZAPATO || *talla>MAX_3RANGO_ZAPATO) && *talla!=NULL_RANGO_ZAPATO
  }
  //------------------------------------------------------------------------------------------------   
    /*
    *PRE: se ingresara un talle de zapato entero positivo entre [33 y 47] o 0, incluyente 
    *POST: segun el rango de talle introducido retornara un valor entero entre 2 y 4. 
          caso contrario retorna un 0.
    */
    int multiplicador_zapato(int *talla){
      //int talla;
      //introducir_talla_Zapato(&talla);
      int multiplicador=1;
      if (*talla >=MIN_1RANGO_ZAPATO && *talla <=MAX_1RANGO_ZAPATO)
        multiplicador=2;
      else if (*talla >=MIN_2RANGO_ZAPATO && *talla <=MAX_2RANGO_ZAPATO)
        multiplicador=3;            
      else if (*talla >=MIN_3RANGO_ZAPATO && *talla <=MAX_3RANGO_ZAPATO)
        multiplicador=4;        
      //printf("mult: %i talla: %i\n",multiplicador,*talla);
      return  multiplicador;
    }
   /*
   *PRE: se ingresara 5 punatajes enteros para realizar una operacion arimetica. 
   *POST: retornara un valor entero de la operacion dada.
   */
  int calculo_puntaje_total(int sabor,int* talla,int color,int fecha){
    return ( (sabor + color + fecha)*(multiplicador_zapato(talla)) );
  }
  //------------------------------------------------------------------------------------------------   

   /*
   *PRE:  se ingresara la altura seleccionado de 2 personajes  y la del usuario para determinar el personaje indicado
   *POST: se determinara la altura del personaje mas sercano al usuario para indicar el personaje indicado o seleccionado.
   */
  void personaje_indicado(int altura_P1, int altura_P2, int altura_Usuario){
    int jug1=abs(altura_P1-(altura_Usuario));
    int jug2=abs(altura_P2-(altura_Usuario));
    //printf("j1: %i  -- j2: %i \n",jug1,jug2);
    if (jug1<=jug2)
      traer_nombre(altura_P1);      
    else
      traer_nombre(altura_P2);        
  } 
   /*
   *PRE:  se ingresara el puntaje total y  la altura del usuario para determinar a 
          dos personajes posibles segun el rango del el puntaje total.
   *POST: se prosedera a identificar al personaje indicado 
   */
  void personajes_posibles(int punTotal, int altura_Usuario){
    int altura_Personaje1=0;
    int altura_Personaje2=0;

    if (punTotal>=MIN_1PUNTAJE_TOTAL && punTotal<=MAX_1PUNTAJE_TOTAL){
      altura_Personaje1=altura_personaje(JHONNY_BRAVO);
      altura_Personaje2=altura_personaje(CORAJE);      
    }else if(punTotal>=MIN_2PUNTAJE_TOTAL && punTotal<=MAX_2PUNTAJE_TOTAL){
      altura_Personaje1=altura_personaje(PURO_HUESOS);
      altura_Personaje2=altura_personaje(POLLITO); 
    }else if(punTotal>=MIN_3PUNTAJE_TOTAL && punTotal<=MAX_3PUNTAJE_TOTAL){
      altura_Personaje1=altura_personaje(BLUE);
      altura_Personaje2=altura_personaje(BELLOTA);
    }
    personaje_indicado(altura_Personaje1,altura_Personaje2,altura_Usuario);  
     //printf("PT: %i\n",*punTotal);  

  }
  /*
   *PRE:  se le asignara el valor de altura ingresado por parametro entre [10 y 250], incluyente.
   *POST: --- se le asignara el valor que llega por puntero.
   */
  void puntaje_altura(int *altura){
    printf("ingrese la Altura entre [10 - 250], excluyente\n");
    scanf(" %i",altura);
    while(!(*altura>=MIN_RANGO_ALTURA && *altura<=MAX_RANGO_ALTURA)){
      printf("ingrese la Altura entre [10 - 250], excluyente\n");
      scanf(" %i",altura);
    }    
  }
  //------------------------------------------------------------------------------------------------   
   /*
   *PRE:  se ingresaran los 5 datos ingresados por el suario para inicializarlos
   *POST: determina el puntaje total segun los valores ingresados 
   */
  void  ingresar_Datos(int* fecha,int* talla,int* altura,char* sabor,char* color,int* punTotal){
    int puntaje_fecha        =introducir_fecha_Nacimiento(fecha);
    int puntaje_Sabor        =introducir_sabor(sabor);
    introducir_talla_Zapato(talla);
    int puntaje_color        =introducir_color(color);
    puntaje_altura(altura);      
    *punTotal  = calculo_puntaje_total(puntaje_Sabor,talla,puntaje_color,puntaje_fecha);
    
    
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
    ingresar_Datos(&fachaNacimiento,&tallaZapato,&alturaPers,&saborPreferido,&colorPreferido,&puntaje_total);
    personajes_posibles(puntaje_total, alturaPers);  
    //printf("pt: %i\n",puntaje_total);
    //printf("\n fecha: %i -- talla de zapato: %i -- altura de perosnaje: %i -- saborPreferido: %c -- colorPreferido: %c\n",fachaNacimiento,tallaZapato,alturaPers,saborPreferido,colorPreferido);
    return 0;
}

//gcc detectorPers.c -o e -Wall -Wconversion -Werror && ./e
