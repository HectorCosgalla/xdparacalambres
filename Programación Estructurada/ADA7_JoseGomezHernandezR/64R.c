/* 

64. E.P. que lea una matriz de 15 X 13 elementos y que calcule e
imprima lo siguiente:
a) El elemento menor del arreglo.
b) El total de elementos negativos de la fila 10 a la 13.
c) El mayor elemento del arreglo.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=15,c=13,i,y;
	int matriz[f][c];
	int tronomayor, tronomenor;
	int negativos=0;
	//Se llena la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se establecen los tronos con valores cualquiera
	tronomayor=matriz[0][0];
	tronomenor=tronomayor;
	//Se inicia el recorrido de la matriz y se evaluara cuales son menores y mayores a los tronos asignados y tambien se evaluara la cantidad de negativos entre las filas 9 y 14
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			if (matriz[i][y]>tronomayor){
				tronomayor=matriz[i][y];
			}
			if (matriz[i][y]<tronomenor){
				tronomenor=matriz[i][y];
			}
			if (i>9){
				if (i<14){
					if ((matriz[i][y])>0){
						negativos=negativos+1;
					}
				}
			}
		}
	}
	//Se proceden a imprimir los resultados
	printf("El elemento menor de la matriz es %d \n", tronomenor);
	printf("Hay %d de negativos entre las filas 10 y 13 \n", negativos);
	printf("El elemento mayor de la matriz es %d \n", tronomayor);
	return 0;
}
/*
Q/A: El programa funciona correctamente.
Es claro en sus instrucciones y realiza lo pedido
Revisado por: Daniel Mendez
*/