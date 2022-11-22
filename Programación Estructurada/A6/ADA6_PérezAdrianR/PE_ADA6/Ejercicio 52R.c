//52. E.P. que lea un vector de n elementos y que calcule e imprima el
//producto de sus elementos.
//Autor: Adrian Pérez
//Versión 1.0
//Fecha 18/3/2020
#include <stdio.h>

int main() 
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
/*Q/A:el programa se ejecuta correctamente solo que pues no tiene caso que los valores de los elementos se impriman desde 0 ya que siempre va a dar 0 el producto, recomendaría 
poder pedir y leer al usuario los valores de los elementos. Sumado a esto tuve el mismo problema con el compilador no especificado en los anteriores ejercicios
Reevisado por: Emilio Campos Daguer*/
