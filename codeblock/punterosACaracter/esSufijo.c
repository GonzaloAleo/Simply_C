#include <string.h>

int esSufijo(char* x, char* s)
{
    int desde = strlen(x)-strlen(s);
    return strcmp(s,x+desde)==0;
}
