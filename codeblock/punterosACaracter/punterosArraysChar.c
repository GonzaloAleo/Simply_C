#include<stdio.h>

//prototipos de funciones
void recibeArray(char[]);
void recibePuntero(char*);

int main(){
    char s[] = "Esta es una cadena";

    recibeArray(s);
    recibePuntero(s);

    return 0;
}

void recibeArray(char x[]){
    printf("x = %s\n",x);
    printf("x[3] = %c\n",x[3]);
}

void recibePuntero(char* x){
    printf("x = %s\n",x);
    printf("x[3] = %c\n",x[3]);
}
//Se llega a la conclusion: un char[] encaja con un char*
