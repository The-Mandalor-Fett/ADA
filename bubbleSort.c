#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// DECLARACIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido); //GENERA NUMEROS ALEATORIOS PARA EL ARRAY
void ordenamientoBurbuja(int arregloRecibido[], int tamanioArray); // FUNCION QUE ORDENA EL ARRAY

//DEFINICIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido)
{
    for (int i = 0; i < numElementosRecibido; i++)
    {
        arregloRecibido[i] = rand()%100; //LLENA UN ARREGLO DE 0 A 99
        // AL SER UN arreglo ALGO PARECIDO A UN APUNTADOR 
        // PUEDE MODIFICAR LOS VALORES DE NUESTRO VALOR EN MAIN
    }
    
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
     int tamanio = 10;
    // int tamanio = 100;
    // int tamanio = 1000;
    // int tamanio = 10000;
    // int tamanio = 40000;
    // int tamanio = 100000;
    // int tamanio = 200000;
    // int tamanio = 400000;
    int *arreglo = (int*)malloc(tamanio*sizeof(int));
    numerosAleatorios(arreglo,tamanio);

    return 0;
}
