#include <stdio.h>
#include <stdbool.h>
const char Dulce= "D";
const char Salado= "S";
const char Amargo= "A";
#define AZUL      'A'
#define AMARRILLO 'Y'
#define VERDE     'V'
#define NEGRO     'N'
#define BLANCO    'B'
#define ROSA      'R'

  int fechaNacimento(int *f){
      do{
        printf("ingrese la fecha de nacimiento entre [1988 -2008], excluyente");
        scanf("%i",&*f);
      }while(*f<1988 && *f>2008);
      return (((*f)%20)+1);
  } 
  int Puntaje_sabor(char *s){
    do{
      printf("ingrese un Sabor: Dulce(D),Salado(S) y Amargo(A)");
      scanf("%c",&*s);
    } while(*s!=Dulce || *s!=Salado || *s!=Amargo);
    int puntaje=20;    
    if (*s == Dulce)
      puntaje=15;
    else if(*s == Salado)
      puntaje=5;
    return puntaje;
  }
  int puntaje_Zapato(int *tz){
    do{
      printf("ingrese el Talle de Zapato entre [33 - 47], excluyente");
      scanf("%i",&*tz);
    }while(*tz<33 && *tz>47 *tz!=0);
    int cont=0;
      if (*tz>=33 && *tz<=37){
        cont=2;
      }else if (*tz>=38 && *tz<=42){
        cont=3;
      }else if (*tz>=43 && *tz<=47){
        const=4;
      }    
    return const;   
  }
  int puntaje_color(char *c){  
    int res;    
    do{
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
            printf("ingrese un Color: Azul(A), Amarillo(Y), Verde(V), Negro(N), Branco(B) y Rosa(R)");
            scanf("%c",&*c);
          break;
      }
    } while (*c!=AZUL || *c!=AMARRILLO || *c!=VERDE || *c!=NEGRO || *c!=BLANCO || *c!=ROSA );
    return res;    
  }
  int puntaje_altura(int *a){
      do{
        printf("ingrese la Altura entre [10 - 250], excluyente");
        scanf("%i",&*a);
      }while(*a<10 && *a>250);
      switch (*a){
      case :
        /* code */
        break;
      
      default:
        break;
      }
  }

  void  ingresarDatos(){
      int fechaN;
      char sabor;
      int talleZapato;
      char color;
      int altura;

    int fechaNa =puntaje_fechaNaci(&fechaN);
    int sabor   =puntaje_sabor(&sabor);
    int zapato  =puntaje_Zapato(&talleZapato);
    int color   =puntaje_color(&color);
    int altura  =puntaje_altura(&altura);      
      int sabor= Puntaje_sabor(&sabor);

  }
//=========================================================================
int main(){
    ingresarDatos();
    //puntaje_total=(puntaje_comida()+puntaje_color()+puntaje_año() ) * mult_talla_zapato();
    return 0;
}
