#include <stdio.h>
#include <conio.h>
/*
Nombre: Programa que determine el elemento del arreglo mayor 
Descripción:53. E.P. que lea un vector de n elementos y que determine el elemento
mayor del arreglo y su posición.
Fecha: 18/03/2022
Autor: Emilio Campos
Versión: 1.0
Compilador: Zinjai
*/
int main() {
	/*
	ENTRADA
	Se declaran las variables y se dimensionan los array
	i=contador, array=array,n= dimensión del vector, mayor= elemento mayor, posicion= posicion del mayor*/
	int i=0, array[100],n,mayor=0,posicion=0; 
	/*Se le pide al usuario las dimensiones del arreglo*/
	printf("Dame las dimensiones del arreglo (maximo 100) \n");
	scanf("%d",&n);
	
	/*PROCESO
	Se crea un do-while para pedir los valores del arreglo*/
	do{
		printf("Dame un valor %d \n",i+1);
		scanf("%d",&array[i]);
		if(array[i]>mayor){
			mayor=array[i];
			posicion=i;
		}
		
		i++;
	}while (i<n);
	//SALIDA
	//Se imprimen los resultados
	printf("El elemento mayor es: %d \n",mayor);
	printf("Y su posisión en el vector es: %d \n",posicion+1);
	return 0;
}

