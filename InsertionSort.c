#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// DECLARACIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido); //GENERA NUMEROS ALEATORIOS PARA EL ARRAY
void ordenamientoInsercion(int arregloRecibido[], int numeroElementosRecibidos); //ORDENA LOS ELEMENTOS INSERTANDOLOS

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
void ordenamientoInsercion(int arregloRecibido[], int numeroElementosRecibidos)
{
    int hueco = 0;
    int valor = 0;
    for (int i = 1; i < numeroElementosRecibidos; i++)
    {
        valor = arregloRecibido[i]; //EXTRAIGO UN ELEMENTO DEL ARREGLO
        // VAMOS A BUSCAR EL LUGAR DE valor E INSERTARLO EN EL ARREGLO
        hueco = i - 1; // hueco ES UN ELEMENTO UNO ANTES QUE i 
        // SE VA A ESTAR MOVIENDO HACIA ATRAS UNO POR UNO 
        //ESTO LO HACE HASTA QUE ENCUENTRE UN ELEMENTO MÁS pequeño O HASTA LLEGAR AL FINAL DEL ARREGLO 
        while (arregloRecibido[hueco] > valor && hueco >= 0)// SI LO ANTERIOR NO OCURRE
        {// RECORREMOS EL ARREGLO POR LA IZQUIERDA, PARA IR HACIENDO HUECO EN EL ARREGLO
            printf("%d\n",hueco);
            arregloRecibido[hueco + 1] = arregloRecibido[hueco];
            hueco = hueco - 1;
        }
        arregloRecibido[hueco + 1] = valor; 
        // UNA VEZ ENCONTRADA LA POSICIÓN DONDE LO VOY A INSERTAR
        // COLOCAMOS EL ELEMNTO QUE VAMOS A INSERTAR

    }
    
}


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numeroDeElementos = 0;
    printf("Por favor introduce el numero de elementos del arreglo: ");
    scanf("%d",&numeroDeElementos);
    int arreglo[numeroDeElementos];
    numerosAleatorios(arreglo,numeroDeElementos); //MANDA A LLAMAR A LA FUNCIO numerosAleatorios
    printf("Numeros del arreglo sin ordenar\n");
    for (int i = 0; i < numeroDeElementos; i++)
    {
        printf("%d,", arreglo[i]);
    }
    printf("\n \n");
    ordenamientoInsercion(arreglo,numeroDeElementos);
    printf("Numeros del arreglo ordenados\n");
    for (int i = 0; i < numeroDeElementos; i++)
    {
        printf("%d,", arreglo[i]);
    }
    printf("\n \n");
    system("pause");
    return 0;
}
