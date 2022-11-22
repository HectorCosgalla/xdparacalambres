#include <stdio.h>
/*
Nombre: Programa que imprime enteros negativos y positivos
Descripción: 3. E.P. que lea un vector de 30 elementos que sean enteros y, genere e imprima  un vector con los elementos negativos y otro vector con los elementos positivos.
Versión: 1.0
Autor: Emilio Campos
Fecha: 19/03/2022
Compilador: Zinjai
*/
int main() {
	/*INICIO
	Se declaran las variables y dimensiones de los arreglos
	array=arreglo principal, array_p= segundo arreglo positivos, array_n= tercer arreglo de negativos, i= contador, j= identificador, k= identificador*/
	int array[20], array_p[20], array_n[20],i,j=0,k=0;
	/* PROCESO
	Se inicia un ciclo for para pedir los valores del vector*/
	for(i=0;i<20;i++) {
		printf("Dame el valor %d del vector : ",i+1);
		scanf(" %d",&array[i]);
		//Se segmenta los arreglos en otros dos arreglos uno de pares y uno de impares
		if (array[i] >= 0){
			array_p[j] = array[i];j++;}
		else{
			array_n[k] = array[i];k++;}
	}
	/*SALIDA
	Se imprimen los resultados*/
	printf("\nLos positivos son:\n");
	for(i=0;i<j;i++){
		printf("%d ",array_p[i]);
	}
	
	printf("\nLos negativos son:\n");
	for(i=0;i<k;i++){
		printf("%d ",array_n[i]);

	}
	return 0;
	
}

