/* 

57. E.P. que lea una matriz de N X M elementos y que encuentre e
imprima la posición de los elementos negativos.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables
	int c,f,i,y;
	//Se pregunta el tamaño de la matriz
	printf("Inserte cantidad de filas de la matriz: ");
	scanf("%d",&f);
	printf("Inserte cantidad de columnas de la matriz: ");
	scanf("%d",&c);
	//Se declara la matriz
	int matriz[f][c];
	//Se procede a llenar la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se procede a leer la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			//Se evalua cada posicion que sea menor a 0
			if ((matriz[i][y])<0){
				printf("La posicion %d , %d con el valorr %d es negativo \n", i+1, y+1, matriz[i][y]);
			}
		}
	}
	return 0;
}
/*Q/A: Se imprime correctamente el valor negativo con su posición en la salida del programa, solo identifique un error ortografico en la palabra valor, pero es lo de menos
Revisado por: Emilio Campos Daguer*/
