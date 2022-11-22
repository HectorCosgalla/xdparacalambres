#include <stdio.h>
/*
Nombre: Programa que identifique un número negativo 
Descripción:54. E.P. que lea dos vectores de n elementos y que genere e imprima
un tercer vector con la suma de cada uno de los elementos de los dos
anteriores.
Version: 1.0
Compilador: Zinjai
Autor: Emilio Campos Daguer
Fecha: 19/03/2022*/
int main() {
	/*ENTRADA
	Se crean las variables y se definen las dimensiones de los arreglos
	array= array1, array2= array2,suma_array=tercer vector con la suma de los anterioes,i=contador,n= tamaño del array*/
	int array[100],array2[100],suma_array[100],i=0,n;
	
	printf("Dame las dimensiones del arreglo (maximo 100) \n");
	scanf("%d",&n);
	//Se piden los calores del primer array
	do{
		printf("Dame un valor %d para el primer array \n",i+1);
		scanf("%d",&array[i]);
		i++;
	}while(i<n);
	
	i=0;
	//Se piden los vaores del segundo array
	do{
		printf("Dame un valor %d para el segundo array \n",i+1);
		scanf("%d",&array2[i]);
		i++;
	}while(i<n);
	
	i=0;
	printf("\n");
	//PROCESO
	Se suman los elementos correspondientes de cada array en la misma posición
	do{
		suma_array[i]=array[i]+array2[i];
		i++;
	}while(i<n);
	
	i=0;
	//SALIDA
	//Se imprimen los resultados
	do{
		printf("%d ",suma_array[i]);
		i++;
	}while(i<n);
	
	return 0;
}

