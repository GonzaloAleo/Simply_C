#include <stdio.h>
#include "funcionesArrays.h"

int main()
{

    int arr[50];
    int len = 0;

    agregar(arr,&len,2);
    agregar(arr,&len,4);
    agregar(arr,&len,6);
    agregar(arr,&len,8);

    printf("El 6 se encuentra en la posicion: %d\n",buscar(arr,len,6));
    printf("El 2 se encuentra en la posicion: %d\n",buscar(arr,len,2));

    return 0;
}
