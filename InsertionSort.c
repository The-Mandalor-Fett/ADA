#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeroElemntos = 0; 
    printf("Por favor introduce un numero: ");
    scanf("%d",&numeroElemntos);
    int array[numeroElemntos];  
    // GENERA NÚMEROS ALEATORIOS PARA EL ARRAY
    for (int i = 0; i < numeroElemntos; i++)
    {
        array[i] = rand()%100;  // VA DE 0 A 99
        // printf("Array %d Valor %d\n",i,array[i]);
    }
    

    system("pause");
    return 0;
}
