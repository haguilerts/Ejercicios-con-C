#include <stdio.h>


void mostrar_seguidores(int cantidad_seguidores){
    /* Condicion de corte*/
    if(cantidad_seguidores == 0){
        printf("Deja de compartir memes rancios que perdes seguidores, chinchulin.\n");
        return;
    }

    printf("Paso otro día, te quedan %d seguidores\n", cantidad_seguidores);

    /* Llamado recursivo*/
    mostrar_seguidores(cantidad_seguidores-1);
}


int main(){
    mostrar_seguidores(5);
}