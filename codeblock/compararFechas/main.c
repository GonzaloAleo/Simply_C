#include <stdio.h>
#include "fechas.h"

int main()
{
    int d1,m1,a1,d2,m2,a2;
    long f1,f2;

    printf("Ingrese la primer fecha: ");

    scanf("%d %d %d",&d1,&m1,&a1);

    printf("\nIngrese la segunda fecha: ");

    scanf("%d %d %d",&d2,&m2,&a2);

    f1 = unificarFecha(d1,m1,a1); //Recibe argumentos
    f2 = unificarFecha(d2,m2,a2); //Recibe argumentos

    if(f1 > f2){
        printf("\nLa primer fecha es posterior a la segunda.");
    }
    else{
        printf("\nLa segunda fecha es posterior a la primera.");
    }

    return 0;
}
