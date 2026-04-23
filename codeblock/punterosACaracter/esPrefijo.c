#include <string.h>

int esPrefijo(char* x,char* p)
{

    int n = strlen(p);
    return strncmp(x,p,n) == 0;
}
