#include <stdio.h>

// En la semana numero 2 dejastes 1 materia.
// En la semana numero 4 dejastes 2 materia.
// En la semana numero 6 dejastes 3 materia.
// En la semana numero 8 dejastes 4 materia.
// En la semana numero 10 dejastes 5 materia.

void mostrar_recursadas(int cantidad_materias){ // 2
    /*Condicion de corte*/
    if(cantidad_materias == 0){ // 
        return;
    }

    int semana = cantidad_materias * 2; // 4

    /*Llamado recursivo*/
    mostrar_recursadas(cantidad_materias-1); // 1 <----- 
    printf("En la semana numero %d dejastes %d materia. \n", semana, cantidad_materias); // semana 4 cant 2
}


int main(){
    mostrar_recursadas(7); 
}