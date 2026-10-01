/*
Escribir un programa en C que escriba los números comprendidos entre 1 y 1000. El
programa escribirá en la pantalla los números en grupos de 20, solicitando al usuario si
quiere o no continuar visualizando el siguiente grupo de números. Generalizar el
programa para que escriba los números comprendidos entre dos valores que introduzca
el usuario, y sea éste también quien decida el tamaño del grupo a visualizar por
pantalla.
*/
#include <stdio.h>

int main(){
	
	int nro=0;
	
	printf("Ingrese un numero comprendido entre 1 y 1000: ");
	scanf("%d",&nroUno);
	printf("\n");
	
	while(nroUno <= 0){
		printf("Error, debe ingresar un numero entre 1 y 1000: ");
		scanf("%d",&nro);
		printf("\n");
	}
	
	int i=nro,cont=0;
	
	while(i!=nroDos && (resp == 's' || resp == 'S')){
		printf("%d",&i);
		i++;
		cont++;
		
		if(cont == 20){
			printf("Desea ver otros 20 numeros? (S: si | N: no):");
			scanf("");
		}
	}
	
	
	return 0;
}