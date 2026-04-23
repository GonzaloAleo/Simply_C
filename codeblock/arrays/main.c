//Arreglos dinamicos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Gracias a malloc() obteníamos el puntero que nos daba la dirección del bloque de memoria reservado dinámicamente
    calloc() cumple la misma función que malloc(),
    con una diferencia: calloc() si inicializa a 0 el contenido de cada elemento del array dinámico
    */
    int *a;
    a = (int *) calloc(5,sizeof(int)); //Esto me permite manejar el tamaño del array dinamicamente
    //a = (int *) malloc(5,sizeof(int));
    //Como calloc() y malloc() son punteros genericos (void*), casteamos para que devuelvan el valor esperado

    a[0] = 6;
    a[1] = -512;
    a[2] = 2001;
    a[3] = -3;
    a[4] = 10;

    for(int i = 0;i < 5; ++i){
        printf("%d\n",a[i]);
    }
    printf("\n");

    int *p = a; //apunta al primer elemento del array

    printf("Valor del puntero al primer elemento del array: %d\n",*p);

    *p = 3; //es lo mismo que hacer a[0] = 3;

    printf("Valor del puntero al primer elemento del array luego de la reasignacion: %d\n",*p);

    free(a); //libera la memoria reservada

    return 0;
}
