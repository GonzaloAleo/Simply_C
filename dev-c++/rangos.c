#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	
	printf("  rango minimo int: %d\n  rango maximo int: %d ",INT_MIN,INT_MAX);
	printf("\n  tamanio en bytes: %d", sizeof(int));
	printf("\n  rango minimo long: %d\n  rango maximo long: %d ",LONG_MIN,LONG_MAX);
	printf("\n  tamanio en bytes: %d", sizeof(long));
	printf("\n  rango minimo char: %d\n  rango maximo char: %d ",CHAR_MIN,CHAR_MAX);
	printf("\n  tamanio en bytes: %d", sizeof(char));
	printf("\n  rango minimo float: %E\n  rango maximo float: %E ",FLT_MIN,FLT_MAX);
	printf("\n  tamanio en bytes: %d", sizeof(float));
	
	return 0;
}