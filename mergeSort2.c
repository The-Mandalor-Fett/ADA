#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
void numerosAleatorios(int arregloRecibido[],int numElementosRecibido); //GENERA NUMEROS ALEATORIOS PARA EL ARRAY

void numerosAleatorios(int arregloRecibido[],int numElementosRecibido){
    for (int i = 0; i < numElementosRecibido; i++)
    {
        arregloRecibido[i] = rand()%100; //LLENA UN ARREGLO DE 0 A 99
        // AL SER UN arreglo ALGO PARECIDO A UN APUNTADOR 
        // PUEDE MODIFICAR LOS VALORES DE NUESTRO VALOR EN MAIN
    }
}

int main()
{
    srand(time(NULL));
    int n,i;
    printf("Introduce el tamanio (hasta 30):");
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
    numerosAleatorios(a,n);
    printf("\nEl array sin arreglar es :");
    for(i=0;i<n;i++){
         printf("%d ",a[i]);
    }
    mergesort(a,0,n-1);
    printf("\nEl array arreglado es :");
    for(i=0;i<n;i++){
         printf("%d ",a[i]);
    }
    printf("\n \n");
    system("pause");
    return 0;
}
 
void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid); // recursión de la izquierda
        mergesort(a,mid+1,j); // recursión de la derecha
        merge(a,i,mid,mid+1,j); //Mezcla los sub-arrays
    }
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50]; //array temporal para usado mezclar
    int i,j,k;
    i=i1; //el primero de la 1er lista
    j=i2; //el primero de la 2da lista
    k=0;
    while(i<=j1 && j<=j2) //mientras se tenga elementos en las listas
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=j1) //copia los restantes de la primera lista
        temp[k++]=a[i++];
    while(j<=j2) //copia los restantes de la segunda lista
        temp[k++]=a[j++];
    //Transfiere los elementos del temp[] de regreso a a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}