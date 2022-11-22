#include <stdio.h>
#include <conio.h>
/*
Nombre: Programa que multiplica vectores
Descipción:52. E.P. que lea un vector de n elementos y que calcule e imprima el
producto de sus elementos
Versión: 1.0
Autor: Emilio Campos
Fecha:18/03/2022
Compilador: Zinjai*/
int main() {
	/*ENTRADA
	Declaramos las variables
	n=numero de elementos del vector, s=sumatoria, array[100]=arreglo, i= contador
	*/
	int n=0,multiplicar=1;
	int i=0, array[100]; 
	/*Se le pide al usuario las dimensiones del arreglo*/
	printf("Dame las dimensiones del arreglo (maximo 100) \n");
	scanf("%d",&n);
	
	/*PROCESO
	Se crea un while para pedir los valores del arreglo*/
	while (i<n){
		printf("Dame un valor %d \n",i+1);
		scanf("%d",&array[i]);
		i++;
	}
	//Reiniciamos contador
	i=0;
	//Se realiza la multiplicación de los elementos
	while (i<n){
		multiplicar=multiplicar*array[i];
		i++;
	}
	//SALIDA
	//Se imprime la suma de los elementos del vector
	printf("La multiplicación de los elementos es %d",multiplicar);
	return 0;
}
