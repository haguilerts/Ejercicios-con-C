//Materia: Algoritmo 1 - trabajo practico n°1 - alum: Giovanny Aguilar Rojas  -  porf: Mendez - año: 2° cutri 2020
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const char Dulce  = 'D';
const char Salado= 'S';
const char Amargo= 'A';

#define altura_coraje         30
#define altura_pollito        50
#define altura_bellota        120
#define altura_blue           140
#define altura_jhonnyBravo    180
#define altura_puroHueso      200

const int valor_color_Azul     = 20;
const int valor_color_Verde    = 20;
const int valor_color_Negro    = 15;
const int valor_color_Blanco   = 15;
const int valor_color_Rosa     = 5;
const int valor_color_Amarillo = 5;

const int valor_sabor_Salado   = 5;
const int valor_sabor_Dulce    = 15;
const int valor_sabor_Amargo   = 20;

const int MIN_rango_Zapato   = 33;
const int MAX_rango_Zapato   = 47;
const int NULL_rango_Zapato   = 0;

const int MIN_rango_Fecha   = 1988;
const int MAX_rango_Fecha   = 2008;

const int MIN_rango_Altura   = 10;
const int MAX_rango_Altura   = 250;

const int MIN_1puntaje_total  = 1;
const int MAX_1puntaje_total  = 80;
 const int MIN_2puntaje_total   = 81;
 const int MAX_2puntaje_total   = 160;

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
         alt=altura_coraje;
        break;
      case POLLITO:
         alt=altura_pollito;
        break;
      case BELLOTA:
         alt=altura_bellota;
        break;
      case BLUE:
         alt=altura_blue;
        break;
      case JHONNY_BRAVO:
         alt=altura_jhonnyBravo;
        break;
      case PURO_HUESOS:
         alt=altura_puroHueso;
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
    case altura_coraje:
        printf("- Coraje - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case altura_pollito:
        printf("- Pollito - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case altura_bellota:
        printf("- Bellota - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case altura_blue:
        printf("- Blue - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case altura_jhonnyBravo:
        printf("- Jhony_Bravo - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.\n");
      break;
    case altura_puroHueso:
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
  int  introducir_color(char *c){  
    int puntaje;    
    do{
      printf("--> ingrese un Color: Azul(A), Amarillo(Y), Verde(V), Negro(N), Branco(B) o Rosa(R)\n");
            scanf(" %c",&*c);
      switch (*c){
        case AZUL:
            puntaje=valor_sabor_Amargo;            
          break;
        case VERDE:
            puntaje=valor_sabor_Amargo;           
          break;
        case NEGRO:
            puntaje=valor_sabor_Dulce;            
          break;
        case BLANCO:
            puntaje=valor_sabor_Dulce;          
          break;
        case ROSA:
            puntaje=valor_sabor_Salado;          
          break;
        case AMARRILLO:
            puntaje=valor_sabor_Salado;          
          break;
        //printf("res: %i\n",res);
      }
    } while (*c!=AZUL && *c!=AMARRILLO && *c!=VERDE && *c!=NEGRO && *c!=BLANCO && *c!=ROSA );
    return puntaje;    
  }
  
  //-----------------------------------------------------------------------------------------------------
    /*
    *PRE: se introducera un valor entero entre 1988 y 2008 incluyentes.
    *POST: retorna una operacion entera menor a 20.
    */
    int operacion_de_puntaje(int *f){
      int res=((*f) % 20)+1;
      return res;
    }
  /*
   *PRE: se igresara solo un numero entero positivo. 
   *POST: retornara una un entero entre 1 y 9
   */
  int introducir_fNacimiento(int *f){    
      do{
        printf("--> ingrese la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",f);
      }while(*f<MIN_rango_Fecha || *f>MAX_rango_Fecha ); // 
      return operacion_de_puntaje(f);      
  } 
    /*
    *PRE: se ingresara un sabor para determinar un puntaje apropiado, segun el sabor elejido. No ingresar un numero entero.
    *POST: retornara un puntaje entero 
    */
    int asignar_puntaje_Sabor(char *s){
      int puntaje=20;    
      if (*s == Dulce)
        puntaje=15;
      else if(*s == Salado)
        puntaje=5;
      return puntaje;
    }
  /*
  *PRE: se ingresara un sabor con un caracter segun el mensaje indicado.  
  *POST:  retornara un puntaje entero segun el sabor elejido.
  */
  int introducir_sabor(char *s){
    do{
       // printf("123\n");
      printf("--> ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");
       // printf("456\n");
      scanf(" %c",s);
       // printf("789\n");
    } while(!( *s==Dulce || *s==Salado || *s==Amargo) );
    return asignar_puntaje_Sabor(s);    
  }
    /*
    *PRE: se ingresara un talle de zapato entero positivo entre [33 y 47] o 0, incluyente 
    *POST: segun el rango de talle introducido retornara un valor entero entre 2 y 4. 
          caso contrario retorna un 0.
    */
    int asignar_puntaje_Zapato(int *tz){
      int cont=0;
        if (*tz >=33 && *tz <=37)
          cont=2;
        else if (*tz >=38 && *tz <=42)
          cont=3;            
        else if (*tz >=43 && *tz <=47)
          cont=4;        
      //printf("c: %i\n",cont);
      return cont;   
    }
   /*
   *PRE: se debera ingresar un llate de zapato entero entre un rango [33 y 47], incluyentes o 0.
   *POST: retornara el talle adecuado segun el numero seleccionado.
   */
  int introducir_talla_Zapato(int *tz){
    do{
      printf("--> ingrese el Talle de Zapato entre [33 - 47], excluyente o '0'\n");
      scanf("%i",tz);
    }while((*tz<MIN_rango_Zapato || *tz>MAX_rango_Zapato) && *tz!=NULL_rango_Zapato);
     return asignar_puntaje_Zapato(tz);    
  }
  
   /*
   *PRE:  se le asignara el valor de altura ingresado por parametro entre [10 y 250], incluyente.
   *POST: --- se le asignara el valor que llega por puntero.
   */
  void puntaje_altura(int *a){
      do{
        printf("ingrese la Altura entre [10 - 250], excluyente\n");
        scanf("%i",&*a);
      }while(*a<10 || *a>250);    
  }
   /*
   *PRE: se ingresara 5 punatajes enteros para realizar una operacion arimetica. 
   *POST: retornara un valor entero de la opracion dada.
   */
  int puntaje_total(int*s,int*z,int*c,int*f){
    return ((*s + *c + *f)*(*z));
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
    int altPersonaje1;
    int altPersonaje2;

    if (*punTotal>=MIN_1puntaje_total && *punTotal<=MAX_1puntaje_total){
      altPersonaje1=altura_personaje(JHONNY_BRAVO);
      altPersonaje2=altura_personaje(CORAJE);      
    }else if(*punTotal>=MIN_2puntaje_total && *punTotal<=MAX_2puntaje_total){
      altPersonaje1=altura_personaje(PURO_HUESOS);
      altPersonaje2=altura_personaje(POLLITO); 
    }else{
      //if(punTotal>=161 && punTotal<=240){
      altPersonaje1=altura_personaje(BLUE);
      altPersonaje2=altura_personaje(BELLOTA);
    }
    personaje_indicado(altPersonaje1,altPersonaje2,alturaUsuario);  
    //printf("pt: %i\n",punTotal);
   // printf("p1: %i  -- p2: %i \n",p1,p2);
   // printf("jugadir indicado es: %i \n",jugIndicado);
    
  }
   /*
   *PRE:  se ingresaran los 5 datos ingresados por el suario para inicializarlos
   *POST: determina el puntaje total segun los valores ingresados 
   */
  void  ingresarDatos(int* fecha,int* talleZapato,int* altura,char* sabor,char* color,int* punTotal){
    int fechaN    =introducir_fNacimiento(fecha);
    int preSabor  =introducir_sabor(sabor);
    int zapato    =introducir_talla_Zapato(talleZapato);
    int col       =introducir_color(color);
    puntaje_altura(altura);      
    *punTotal  =(preSabor + col + fechaN) * zapato;
    
    //printf("resultado es: %i",punTotal);
  }
//=========================================================================
int main(){
    int fachaNacimiento;
    int tallaZapato;
    int alturaPers;
    char saborPreferido;
    char colorPreferido;
    int puntaje_total;
    ingresarDatos(&fachaNacimiento,&tallaZapato,&alturaPers,&saborPreferido,&colorPreferido,&puntaje_total);
    personajes_posibles(&puntaje_total, &alturaPers);  
   
    //printf("\n fecha: %i -- talla de zapato: %i -- altura de perosnaje: %i -- saborPreferido: %c -- colorPreferido: %c\n",fachaNacimiento,tallaZapato,alturaPers,saborPreferido,colorPreferido);
    return 0;
}

//gcc detectorPers.c -o e -Wall -Wconversion -Werror && ./e
