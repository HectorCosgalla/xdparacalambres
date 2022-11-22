//52. E.P. que lea un vector de n elementos y que calcule e imprima el
//producto de sus elementos.
//Autor: Adrian Pérez
//Versión 1.0
//Fecha 18/3/2020
#include <stdio.h>

main() 
{
	int n,i=0,sum=0;
	
	printf("Ingresa el valor de n: ");
	scanf("%i", &n);
	int vector[100];
	
	while (i<n){
		vector[i]=i;
		sum= vector[i]*sum;
		printf(" %d",vector[i]);
		i++;
	}
	printf("\nEl producto es: %d",sum);
}
