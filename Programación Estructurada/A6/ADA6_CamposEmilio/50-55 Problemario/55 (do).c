#include <stdio.h>
/*Nombre: Programa que identifique un número negativo 
Descripción:55. E.P. que lea un vector de n elementos, el cual se sabe tiene un
elemento negativo y que determine e imprima su posición.
Version: 1.0
Compilador: Zinjai
Autor: Emilio Campos Daguer
Fecha: 19/03/2022
*/
int main() {
	/*
	ENTRADA
	Se declaran las variables y se definen las dimensiones del array
	i= identificador*/
	int i=0, array[100],n,posicion=0,negativo=0; 
	/*Se le pide al usuario las dimensiones del arreglo*/
	printf("Dame las dimensiones del arreglo (maximo 100) \n");
	scanf("%d",&n);
	
	/*PROCESO
	Se crea un while para pedir los valores del arreglo*/
	do{
		printf("Dame un valor entero (escribe SOLO UN negativo) %d \n",i+1);
		scanf("%d",&array[i]);
		/*Se identifica si el valor es el negativo*/
		if(array[i]<0){
			negativo=array[i];
			posicion=i;
		}
		
		i++;
	}while (i<n);
	/*SALIDA
	Se imprimen los resultados*/
	printf("El elemento mayor es: %d \n",negativo);
	printf("Y su posisión en el vector es: %d \n",posicion+1);
	return 0;
	return 0;
}

