/* 

63. E.P. que lea una matriz de 20 X 20 elementos y que cuente e
imprima cuantos elementos igual a cero se encuentran en las primeras
10 filas.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=20,c=20,i,y;
	int matriz[f][c];
	int ceros=0;
	//Se llena la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se recorre la matriz y cuando el contador filas estre entre las primeras 10 se procedera a buscar ceros en la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			if (i<11){
				if (matriz[i][y]==0){
					ceros=ceros+1;
				}
			}
		}
	}
	//Se imprime la cantidad de 0 en las primeras 10 filas
	printf("Hay %d de ceros en las primeras 10 filas", ceros);
	return 0;
}
/*
Q/A: El programa funciona correctamente. Podria funcionar mas eficientemente, pero cumple lo requerido
Revisado por: Daniel Mendez
*/