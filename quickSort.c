#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// DECLARACIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido); //GENERA NUMEROS ALEATORIOS PARA EL ARRAY
void ordenamientoRapido(int arregloRecibido[], int numeroElementosRecibidos); //ORDENA LOS ELEMENTOS 
int quickSort(int arreglorecibido[], int inicioArray, int finArray); // DIVIDE EL ARREGLO Y REALIZA LOS INTERCAMBIOS



int main(int argc, char const *argv[])
{
    int numeroElementos = 0;
    int *arreglo = NULL;
    printf("Por favor introduce un número de elementos : ");
    scanf("%d", &numeroElementos);
    arreglo = (int *)malloc(numeroElementos * sizeof(int));
    
    return 0;
}
