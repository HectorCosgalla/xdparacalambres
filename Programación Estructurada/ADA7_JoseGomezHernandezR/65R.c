/* 

65. E.P. que lea dos matrices de M X N elementos y que determine e
imprima si la diagonal principal de la primera es igual a la diagonal
principal de la segunda.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f,c,i,y;
	printf("Inserte cantidad de filas de la matriz: ");
	scanf("%d",&f);
	printf("Inserte cantidad de columnas de la matriz: ");
	scanf("%d",&c);
	//Se declaran las matrices y otras variables
	int matrizA[f][c];
	int matrizB[f][c];
	int menor;
	int sumador=0;
	//Se evalua la cantidad de filas y columnas para saber cual es la menor, ya que sera el tama�o de la diagonal
	if (f>c){
		menor=c;
	}
	else{
		menor=f;
	}
	//Se llena la matriz A
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz A en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matrizA[i][y]);
		}
	}
	//Se llena la matriz B
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz B en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matrizB[i][y]);
		}
	}
	//Se procede a evaluar los casos donde el contador de filas y columnas sean iguales ya que sera una diagonal
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			if (i==y){
				if ((matrizA[i][y])==(matrizB[i][y])){
					//Se suma 1 a la cantidad de iguales que hay
					sumador=sumador+1;
				}
			}
		}
	}
	//Se evalua la cantidad de iguales que hay, tiene que ser igual al tama�o de la diagonal calculada previamente
	if (sumador==menor){
		printf ("Las diagonales son iguales");
	}
	else{
		printf ("Las diagonales son diferentes");
	}
	return 0;
}
/*
Q/A: El programa funciona correctamente.
Se probaron matrices para ambos escenarios y en ambos el resultado fue el correcto
Revisado por: Daniel Mendez
*/