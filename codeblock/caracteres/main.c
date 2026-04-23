#include <stdio.h>
#include "sprintf.h"

int main()
{
    char s[10] = "Pablo";
    char t[] = "Juan"; //El compilador dimensionara automaticamente al array
    char w[10] = {0}; //Inicializada como cadena vacia. En realidad está el "\0"

    printf("s = [%s]\n",s);
    printf("t = [%s]\n",t);
    printf("w = [%s]\n",w);

    pruebaSprintf();

    return 0;
}
