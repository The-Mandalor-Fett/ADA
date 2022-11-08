#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// DECLARACIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido); //GENERA NUMEROS ALEATORIOS PARA EL ARRAY
void ordenamientoRapido(int arregloRecibido[], int numeroElementosRecibidos); //ORDENA LOS ELEMENTOS 
int quickSort(int arreglorecibido[], int inicioArray, int finArray); // DIVIDE EL ARREGLO Y REALIZA LOS INTERCAMBIOS



int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numeroElementos = 0;
    int *arreglo = NULL;
    printf("Por favor introduce un número de elementos : ");
    scanf("%d", &numeroElementos);
    arreglo = (int *)malloc(numeroElementos * sizeof(int));
    numerosAleatorios(arreglo, numeroElementos);
    printf("Arreglo sin ordenar ");
    for (int i = 0; i < numeroElementos; i++)
    {
        printf("%d, ",arreglo[i]);
    }
    printf("\n \n");
    ordenamientoRapido(arreglo, numeroElementos);

    return 0;
}

// DEFINICIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[], int numElementosRecibido)
{
    for (int i = 0; i < numElementosRecibido; i++)
    {
        arregloRecibido[i] = rand()%100; //LLENAMOS EL ARREGLO CON NÚMEROS DEL 0 AL 99
    }
    
}
