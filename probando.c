#include <stdio.h>

double valorAbsoluto(double);

int main(){
    double d,v; 

    printf("Ingrese un numero: ");
    scanf("%lf",&v);

    d = valorAbsoluto(v);

    printf("\nEl valor absoluto de %lf es %lf",v,d);
    
    return 0;
}

/*
double valorAbsoluto(double d){

    double ret = d;

    if(d<0){
        ret = -ret;
    }

    return ret;

    
}*/

//Con if-inline
double valorAbsoluto(double d){
    return d<0?-d:d;
}
