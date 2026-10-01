#include <stdio.h>

int main(){
	float fahrenheit = 0.0;
	
	printf("Ingrese la temperatura en farenheit: ");
	scanf("%f",&fahrenheit);
	
	float celsius = (fahrenheit - 32.0)*(5./9.0);
	
	printf("La temperatura %.1f Farenheit equivalen a %.1f grados Celsius",fahrenheit,celsius);
	
	return 0;
}