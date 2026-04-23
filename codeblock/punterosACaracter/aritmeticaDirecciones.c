#include<stdio.h>

int main(){
    char a[] = "Esto es una cadena";

    //Se muestran los caracteres de las distintas direcciones
    printf("[%s]\n",a);
    printf("[%s]\n",a+5);
    printf("[%s]\n",a+9);
    printf("[%s]\n",a+12);

    return 0;
}
