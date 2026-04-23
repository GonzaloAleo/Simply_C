#include<stdio.h>
#include "esSufijo.h"

int main(){

    char a[] = "Esto es una cadena";
    char b[] = "na";

    printf("[%s] es sufijo de [%s]? %d\n",b,a,esSufijo(a,b));

    return 0;
}
