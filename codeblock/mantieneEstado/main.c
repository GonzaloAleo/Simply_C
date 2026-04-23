#include <stdio.h>

int esPrimo(int n){
    if(n <= 1) return 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int siguienteNroPrimo(int* temp){
    (*temp)++;

    while(!esPrimo(*temp)){
        (*temp)++;
    }

    return *temp;
}

int main(){
    int n;
    printf("Ingrese cuantos primos quiere ver: ");
    scanf("%d",&n);

    int aux = 0;

    for(int i = 0; i < n; i++){
        printf("%d\n", siguienteNroPrimo(&aux));
    }

    return 0;
}
