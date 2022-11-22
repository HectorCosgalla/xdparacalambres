//51. E.P. que lea un vector de n elementos y que calcule e imprima su
//sumatoria.
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
		sum= vector[i]+sum;
		printf(" %d",vector[i]);
		i++;
	}
	printf("\nLa suma es: %d",sum);
}
/*Q/A: El programa lee e imprime bien los elementos y su sumatoria pero recomendaría que el usuario pudiera ingresar esos elementos y 
como mencioné en el ejercicio anterior agregar el compilador en el que se hizo el programa e igual tuve que agregar "int" al programa 
para poder ejecutarlo correctamente en Zinjai
Revisado por: Emilio Campos Daguer*/
