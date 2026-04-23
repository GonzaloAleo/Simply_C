#include <stdio.h>
#include "funcionesFechas.h"

int main()
{
    long fecha;
    int dia,mes,anio;
    int cantMarzo=0,cantBisiesto=0,cantError=0;
    int anioBisiesto, hayError;

    printf("Ingrese una fecha: ");
    scanf("%d",&fecha);

    while(fecha !=0){
        dividirFecha(fecha,&dia,&mes,&anio);
        anioBisiesto=esAnioBisiesto(anio);

        if(mes == 3){
            cantMarzo++;
        }

        if(anioBisiesto){
            cantBisiesto++;
        }

        hayError = (dia==29) && (mes==2) && !anioBisiesto;

        if(hayError){
            cantError++;
        }

        printf("Ingrese otra fecha: ");
        scanf("%d",&fecha);
    }

    printf("Fechas de marzo: %d\n",cantMarzo);
    printf("Anios bisiesto: %d\n", cantBisiesto);
    printf("Fechas con erro: %d\n", cantError);

    return 0;
}
