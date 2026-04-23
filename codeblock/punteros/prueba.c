#include<stdio.h>

int main(){

    int a = 10;  //2 bytes
    long b = 80; //4 bytes
    char c = 'A';//1 byte

    int* p = &a; //Puntero a 'a'

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %c\n",c);
    printf("p = %d\n",*p); //Devuelve el valor de la variable apuntada por p

    return 0;
}
