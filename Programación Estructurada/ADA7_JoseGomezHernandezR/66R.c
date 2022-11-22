/* 

66. E.P. que lea una matriz de 9 X 12 elementos y que cuente todos
los elementos negativos de la misma y los cambie por ceros.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=9,c=12,i,y;
	int matrizA[f][c];
	int contadornegativos=0;
	//Se llena la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz A en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matrizA[i][y]);
		}
	}
	//Se procede a leer la matriz y a remplazar los negativos por 0
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			if ((matrizA[i][y])<0){
				contadornegativos=contadornegativos+1;
				matrizA[i][y]=0;
			}
		}
	}
	//Se imprime la cantidad total de negativos y se imprime la matriz con los negativos remplazados
	printf ("La cantidad de negativos es %d \n", contadornegativos);
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf(" %d ",matrizA[i][y]);
		}
		printf("\n");
	}
	return 0;
}
/*
Q/A: El programa funciona correctamente.
El resultado es adecuado y cumple con lo pedido
Revisado por: Daniel Mendez
*/