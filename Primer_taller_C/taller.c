/*
Autor: Juan Esteban Arias 
Universidad: Sergio Arboleda
Asignatura: Computacion paralela y distribuida
Tipo: Main
*/

#include "funciones_taller.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <stdint.h>

int main(int argc, char *argv[]){

    int opcion;

    do{
        opcion = menu();
        
        switch (opcion){
        case 1:
            multiplicacion();
            break;

        case 2:
            numeroDias();
            break;
        
        case 3:
            distanciaPuntos();
            break;
        
        case 4:
            numerosNaturales();
            break;

        case 5:
            trianguloRectangulo();
            break;
        
        case 6:
            realizarMatriz();
            break;

        case 7:
            numerosAleatorios();
            break;

        case 8:
            sumaMatrices();
            break;

        case 9:
            restaMatrices();
            break;

        case 10:
            productoMatrices();
            break;

        default:
            opcion=0;
            break;
        }
    } while (opcion!=0);

    return 0;
}
