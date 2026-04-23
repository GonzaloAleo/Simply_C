#include <stdio.h>

int main()
{
    char* arr[] = {"Hola","Gracias","Chau"};

    for(int i=0;i <3;i++){
        printf("%s\n",arr[i]);
    }
    puts("--- FIN ---");
    return 0;
}
