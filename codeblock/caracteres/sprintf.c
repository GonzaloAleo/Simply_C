#include <stdio.h>

void pruebaSprintf(){
    printf("--- PRUEBA SPRINTF ---\n\n");

    char nom[]="Pablo";
    int edad=39;
    double altura=1.70;

    char salida[50];

    sprintf(salida
            ,"Mi nombre es %s, tengo %d y mido %1f"
            ,nom
            ,edad
            ,altura);

    printf("%s\n",salida);
}
