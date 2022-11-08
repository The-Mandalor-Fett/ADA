#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// DECLARACIÓN DE FUNCIONES
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido); //GENERA NUMEROS ALEATORIOS PARA EL ARRAY
void ordenamientoRapido(int arregloRecibido[], int inicioArreglo, int finArreglo); //ORDENA LOS ELEMENTOS 
void quickSort(int arreglorecibido[], int inicioArray, int finArray); // DIVIDE EL ARREGLO 
void intercambio(int arreglorecibido[], int inicioArray, int finArray); //REALIZA EL intercambio

int main(int argc, char const *argv[])
{
    clock_t inicioAlgoritmo, finAlgorimto;
    srand(time(NULL));
    int numeroElementos = 0;
    int *arreglo = NULL;
    inicioAlgoritmo = clock();
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
 
    quickSort(arreglo, 0, numeroElementos-1);
    finAlgorimto = clock();
    double duracion = ((double)finAlgorimto - inicioAlgoritmo) / CLOCKS_PER_SEC;
    printf("El algoritmo tardo : %f", duracion);
    printf("\n");
    printf("Arreglo ordenado: ");
    for (int i = 0; i < numeroElementos; i++)
    {
        printf("%d, ", arreglo[i]);
    }
    
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

void quickSort(int arreglorecibido[], int inicioArray, int finArray)
{
    int arregloDerecha = 0;
    int arregloIzquierda = 0;
    int pivote = arreglorecibido[(inicioArray + finArray) / 2]; //SE OBTIENE EL pivote
    int auxiliar = 0;
    pivote = arreglorecibido[inicioArray];
    arregloIzquierda = inicioArray;
    arregloDerecha = finArray;
    while(arregloIzquierda <= arregloDerecha)
	{	
		while(arreglorecibido[arregloIzquierda] < pivote) // OBTIENE EL VALOR MENOR DEL LADO IZQUIERDO PARA INTERCAMBIAR
        {
           arregloIzquierda++; 
        }

		while(arreglorecibido[arregloDerecha] > pivote)  // OBTIENE EL VALOR MENOR DEL LADO DERECHO PARA INTERCAMBIAR
        {
        // 
			arregloDerecha--;
        } 

		if(arregloIzquierda <= arregloDerecha)             // SE INTERCAMBIAN LOS VALORES SI SE ENCUENTRA UNO MAYOR A LA IZQUIERDA
		{
			intercambio(arreglorecibido,arregloIzquierda,arregloDerecha);
			arregloIzquierda++;
			arregloDerecha--;
		}
	}
    
    
}
void intercambio(int arreglorecibido[], int inicioArray, int finArray) //
{
    int auxiliar;
	auxiliar=arreglorecibido[inicioArray];
	arreglorecibido[inicioArray]=arreglorecibido[finArray];
	arreglorecibido[finArray]=auxiliar;
}