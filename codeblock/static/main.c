#include <stdio.h>

int siguienteNumero(){
    static int n=0;

    n++;
    return n;
}

int main()
{
    for(int i=0;i<10;i++){
        printf("%d\n",siguienteNumero());
    }
    return 0;
}
