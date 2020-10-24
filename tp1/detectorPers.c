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
#define JHONNY_BRAVO'J'
#define PURO_HUESOS 'H'


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
  int puntaje_fechaNaci(int *f){    
      do{
        printf("ingrese la fecha de nacimiento entre [1988 -2008], excluyente\n");
        scanf("%i",f);
      }while(*f<1988 || *f>2008); // 
      int res=((*f) % 20)+1;
        printf("res:%i \n",res);
        //printf("MisRes:%i \n",1988 % 20);
      return res;
  } 
  int puntaje_sabor(char *s){
    do{
      printf("ingrese un Sabor: Dulce(D),Salado(S) o Amargo(A)\n");
      scanf("%c",s);
    } while((*s)!=Dulce && (*s)!=Salado && (*s)!=Amargo);
    int puntaje=20;    
    if (*s == Dulce)
      puntaje=15;
    else if(*s == Salado)
      puntaje=5;
    return puntaje;
  }
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
        default:
            
          break;
        printf("res: %i\n",res);
      }
    } while (*c!=AZUL && *c!=AMARRILLO && *c!=VERDE && *c!=NEGRO && *c!=BLANCO && *c!=ROSA );
    return res;    
  }
  void puntaje_altura(int *a){
      do{
        printf("ingrese la Altura entre [10 - 250], excluyente\n");
        scanf("%i",&*a);
      }while(*a<10 || *a>250);    
  }
  int puntaje_total(int*s,int*z,int*c,int*f){
    return ((*s + *c + *f)*(*z));
  }
  int personaje_indicado(p1,p2,alturaUsuario){
    int jug1=abs(p1-alturaUsuario);
    int jug2=abs(p2-alturaUsuario);
    if (jug1<jug2){
     return jug1;
    return jug2;
    
  }
  void personajes_posibles(puntajeTotal, alturaUsuario){
    int p1,p2;
    if (puntajeTotal>=1 && puntajeTotal<=80){
      p1=altura1=altura_personaje(JHONNY_BRAVO);
      p2=altura1=altura_personaje(CORAJE);      
    }else if(puntajeTotal>=81 && puntajeTotal<=160){
      p1=altura1=altura_personaje(PURO_HUESOS);
      p2=altura1=altura_personaje(POLLITO); 
    }else if(puntajeTotal>=161 && puntajeTotal<=240){
      p1=altura1=altura_personaje(BLUE);
      p2=altura1=altura_personaje(BELLOTA);
    }
    int jugIndicado=personaje_indicado(p1,p2,alturaUsuario);

  }

  void  ingresarDatos(){
    int fecha,talleZapato,altura;
    char sabor, color;
    int fechaN =puntaje_fechaNaci(&fecha);
    int preSabor  =puntaje_sabor(&sabor);
    int zapato  =puntaje_Zapato(&talleZapato);
    int col   =puntaje_color(&color);
    puntaje_altura(&altura);      
    int punTotal= puntaje_total(&preSabor,&zapato,&col,&fechaN);
    personajes_posibles(punTotal, altura, )
    
    printf("resultado es: %i",punTotal);
  }
//=========================================================================
int main(){
    ingresarDatos();
    //puntaje_total=(puntaje_comida()+puntaje_color()+puntaje_año() ) * mult_talla_zapato();
    return 0;
}
//gcc detectorPers.c -o e -Wall -Wconversion -Werror && ./e
