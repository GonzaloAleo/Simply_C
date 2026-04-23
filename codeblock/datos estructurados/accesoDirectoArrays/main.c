//El programa es sobre un array de contadores
//Cuanta los numeros que aparecieron mayores o igual a cero y menores a 100
#include <stdio.h>

int main()
{
    int aCont[100]; //Array de contadores
    int v;

    inicializarContadores(aCont);

    printf("Ingrese un numero mayor o igual a cero y menor a cien: ");
    scanf("%d",&v);

    while(v>=0 && v<100){
        aCont[v] = aCont[v] + 1;

        printf("Ingrese otro numero mayor o igual a cero y menor a cien: ");
        scanf("%d",&v);
    }
    mostrarResultados(aCont);
    return 0;
}
