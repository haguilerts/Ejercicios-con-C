#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const char Dulce  = 'D';
const char Salado= 'S';
const char Amargo= 'A';

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

#define FECHA_NACIENTO 'F'

/*
   *PRE:
   *POST:
   */
int altura_personaje(char p){
    int alt;
    switch (p){
      case CORAJE:
         alt=30;
        break;
      case POLLITO:
         alt=50;
        break;
      case BELLOTA:
         alt=120;
        break;
      case BLUE:
         alt=140;
        break;
      case JHONNY_BRAVO:
         alt=180;
        break;
      case PURO_HUESOS:
         alt=200;
        break;
    }
    return  alt;
  }
   /*
   *PRE:
   *POST:
   */
  void traerNombre(int jug1){    
    switch (jug1){
    case 30:
        printf("- Coraje - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.");
      break;
    case 50:
        printf("- Pollito - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.");
      break;
    case 120:
        printf("- Bellota - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.");
      break;
    case 140:
        printf("- Blue - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.");
      break;
    case 180:
        printf("- Jhony_Bravo - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.");
      break;
    case 200:
        printf("- Puro_huesos - Es el personaje detectado por la ULTRA MAQUINA DETECTADORA.");
      break;
    }
   }  
   /*
   *PRE:
   *POST:
   */
  int puntaje_color(char *c){  
    int res;    
    do{
      printf("ingrese un Color: Azul(A), Amarillo(Y), Verde(V), Negro(N), Branco(B) o Rosa(R)\n");
            scanf("%c",&*c);
      switch (*c){
        case AZUL:
            res=20;            
          break;
        case VERDE:
            res=20;           
          break;
        case NEGRO:
            res=15;            
          break;
        case BLANCO:
            res=15;          
          break;
        case ROSA:
            res=5;          
          break;
        case AMARRILLO:
            res=5;          
          break;
        //printf("res: %i\n",res);
      }
    } while (*c!=AZUL && *c!=AMARRILLO && *c!=VERDE && *c!=NEGRO && *c!=BLANCO && *c!=ROSA );
    return res;    
  }
  
  //-----------------------------------------------------------------------------------------------------
  int operacion_de_puntaje(int *f){
     int res=((*f) % 20)+1;
     return res;
  }
  /*
   *PRE: se debe introducir un valor entero entre [1988 -2008], excluyente
   *POST: retornara una operacion 
   */
  int introducir_fNacimiento(int *f){    
      do{
        printf("ingrese la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",f);
      }while(*f<1988 || *f>2008 ); // 
       return operacion_de_puntaje(f);
        //printf("resOperacion:%i \n",res);
        //printf("MisRes:%i \n",1988 % 20);
      
  } 
   /*
   *PRE:
   *POST:
   */
  int puntaje_sabor(char *s){
    do{
       // printf("123\n");
      printf("ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");
       // printf("456\n");
      scanf("%c",s);
       // printf("789\n");
    } while(!( *s==Dulce || *s==Salado || *s==Amargo) );
    int puntaje=20;    
    if (*s == Dulce)
      puntaje=15;
    else if(*s == Salado)
      puntaje=5;
    return puntaje;
  }
  
   /*
   *PRE:
   *POST:
   */
  int puntaje_Zapato(int *tz){
    do{
      printf("ingrese el Talle de Zapato entre [33 - 47], excluyente o '0'\n");
      scanf("%i",tz);
    }while((*tz<33 || *tz>47) && *tz!=0);
    int cont=0;
      if (*tz >=33 && *tz <=37)
        cont=2;
      if (*tz >=38 && *tz <=42)
        cont=3;            
      else if (*tz >=43 && *tz <=47)
        cont=4;        
    printf("c: %i\n",cont);
    return cont;   
  }
  
   /*
   *PRE:
   *POST:
   */
  void puntaje_altura(int *a){
      do{
        printf("ingrese la Altura entre [10 - 250], excluyente\n");
        scanf("%i",&*a);
      }while(*a<10 || *a>250);    
  }
   /*
   *PRE:
   *POST:
   */
  int puntaje_total(int*s,int*z,int*c,int*f){
    return ((*s + *c + *f)*(*z));
  }

   /*
   *PRE:
   *POST:
   */
  void personaje_indicado(int p1, int p2, int* alturaUsuario){
    int jug1=abs(p1-(*alturaUsuario));
    int jug2=abs(p2-(*alturaUsuario));
    printf("j1: %i  -- j2: %i \n",jug1,jug2);
    if (jug1<jug2)
      traerNombre(p1);     
    else
      traerNombre(p2);   
  } 
   /*
   *PRE:
   *POST:
   */
  void personajes_posibles(int punTotal, int* alturaUsuario){
    int altPersonaje1;
    int altPersonaje2;

    if (punTotal>=1 && punTotal<=80){
      altPersonaje1=altura_personaje(JHONNY_BRAVO);
      altPersonaje2=altura_personaje(CORAJE);      
    }else if(punTotal>=81 && punTotal<=160){
      altPersonaje1=altura_personaje(PURO_HUESOS);
      altPersonaje2=altura_personaje(POLLITO); 
    }else{
      //if(punTotal>=161 && punTotal<=240){
      altPersonaje1=altura_personaje(BLUE);
      altPersonaje2=altura_personaje(BELLOTA);
    }
    personaje_indicado(altPersonaje1,altPersonaje2,alturaUsuario);  
    printf("pt: %i\n",punTotal);
   // printf("p1: %i  -- p2: %i \n",p1,p2);
   // printf("jugadir indicado es: %i \n",jugIndicado);
    
  }
   /*
   *PRE:
   *POST:
   */
  void  ingresarDatos(int* fecha,int* talleZapato,int* altura,char* sabor,char* color ){
    int fechaN    =introducir_fNacimiento(fecha);
    int preSabor  =puntaje_sabor(sabor);
    int zapato    =puntaje_Zapato(talleZapato);
    int col       =puntaje_color(color);
    puntaje_altura(altura);      
    int punTotal  =(preSabor + col + fechaN) * zapato;
    personajes_posibles(punTotal, altura);
    
    //printf("resultado es: %i",punTotal);
  }
//=========================================================================
int main(){
    int fachaNacimiento;
    int tallaZapato;
    int alturaPers;
    char saborPreferido;
    char colorPreferido;
    ingresarDatos(&fachaNacimiento,&tallaZapato,&alturaPers,&saborPreferido,&colorPreferido);
    
   
    return 0;
}
//gcc detectorPers.c -o e -Wall -Wconversion -Werror && ./e
