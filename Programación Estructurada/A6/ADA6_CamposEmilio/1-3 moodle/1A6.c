#include <stdio.h>
/*
Nombre: Programa que calcula la moda de un vector
Descripción:1. La MODA de un vector, es aquél elemento del arreglo que se repite con mayor frecuencia. De tal forma, en caso de existir más de un número 
que se repite con igual frecuencia máxima, entonces no existe la moda. E.P. que lea un vector de 10 elementos que sean enteros y determine la moda
 del arreglo. Si no la hay, deberá imprimir no existe la moda. Se recomienda ordenar los elementos del arreglo.
AUTOR: Emilio Campos Daguer
Ver.:1.0
Compilador: Zinjai
Fecha: 18/03/2022
*/

int main()
{
	/*
	Se declaran las variables y definen las dimensiones de los arreglos
	array= array principal,n=pedir la dimensión,i= identificador y contador,array2=segundo array,
	posicion= moda,numero=,j=identificador 2,mayor=,posicionmayor=0*/
	int array[100],n,i,array2[100],posicion=0,numero=0,j=0,mayor=0,posicionmayor=0;
	//ENTRADA
	printf("Dame las dimensiones del arreglo (maximo 100) \n");
	scanf("%d",&n);
	// Se piden los valores de vector
	
	for(i=0;i<n;i++) {
		printf("Dame el valor %d del vector : ",i+1);
		scanf(" %d",&array[i]);
	}
	/*PROCESO
	Calcular moda
	*/
	for(i=0;i<n;i++) {
		array2[i]=0;
	}
	/*Se recorre el vector para comprobar las repeticiones*/
	for(i=0;i<n;i++) {
		numero = array[i];
		posicion = i;
		for(j=i;j<n;j++) {
			if(array[j]==numero) array2[posicion]++;
		}
	}
	/*Se comprueba el elemento con mas repeticiones*/
	mayor=array2[0];
	posicionmayor = 0;
	for(i=0;i<n;i++) {
		if(array2[i]>mayor) {
			posicionmayor=i;
			mayor=array2[i];
		}
	}
	/*SALIDA 
	Se imprimen los resultados*/
	printf("\nVector : ");
	for(i=0;i<n;i++) {
		printf(" %d",array[i]);
	}
	printf("\nLa moda es: %d",array[posicionmayor]);
	return 0;
}
