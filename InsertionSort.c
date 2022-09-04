#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numerosAleatorios(int arregloRecibido[],int numElementosRecibido);

void numerosAleatorios(int arregloRecibido[],int numElementosRecibido)
{
    
}
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numeroDeElementos = 0;
    printf("Por favor introduce el numero de elementos del arreglo: ");
    scanf("%d",&numeroDeElementos);
    int arreglo[numeroDeElementos];

    system("pause");
    return 0;
}
