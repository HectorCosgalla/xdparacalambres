/* 

58. E.P. que lea una matriz de 6 X 4 elementos y que calcule e
imprima la suma de sus elementos

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=6,c=4,i,y,suma=0;
	int matriz[f][c];
	//Se procede a llenar la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se procede a recorrer la matriz y a sumar cada valor
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			suma=suma+matriz[i][y];
		}
	}
	//Se imprime el resultado
	printf("La suma de todos los valores es: %d",suma);
	return 0;
}
/*Q/A: La suma realizada por el programa es correcta
Revisado por: Emilio Campos Daguer*/
