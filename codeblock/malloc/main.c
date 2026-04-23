#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//malloc permite direccion n bytes consecutivos de memoria
//n es un entero que le pasamos como argumento

char* obtenerSaludo(){
    //cadena local
    char a[] = "Hola, Mundo";

    //longitud de la cadena a retornar
    int n = strlen(a);

    //array de n+1 caracteres generado dinamicamente
    char* r = (char*) malloc(n+1); //la memoria gestionada permanece asignada durante toda la ejecucion del programa

    //asigna la cadena al array gestionado dinamicamente
    strcpy(r,a);
    return r;
}

int main()
{
    char* s = obtenerSaludo();

    //muestro la cadena
    printf("%s\n",s);

    return 0;
}
