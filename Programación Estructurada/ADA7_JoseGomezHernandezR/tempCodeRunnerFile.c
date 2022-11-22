/* 

62. E.P que lea una matriz de 5 X 5 elementos y que calcule e imprima
la suma de sus elementos que se encuentran en la diagonal principal.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=5,c=5,i,y;
	int matriz[f][c];
	int suma=0;
	//Se procede a llenar la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se procede a recorrer la matriz y en los casos donde el el contador de filas y el contador de columnas sean iguales, se procedea a sumar su valor ya que sera una diagonal
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			if (i==y){
				suma=suma+matriz[i][y];
			}
		}
	}
	//Se imprime el resultado de la suma de toda la diagonal
	printf("la suma de los elemntos de la diagonal es %d",suma);
	return 0;
}
/*
Q/A: El programa funciona correctamente. En los diferentes casos que se probaron, 
el resultado fue lo esperado. Sin embargo la impresi�n de la matriz, se esperaba 
que fuera en forma de matriz.
Revisado por: Daniel Mendez
*/