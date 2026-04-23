#include <stdio.h>

int agregar(int a[], int* len, int v){
    a[*len]=v;
    *len=*len+1;
    return len-1; //retorna la posicion en la que se agregó el valor "v"
}
