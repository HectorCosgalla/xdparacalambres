/* 

60. E.P. que lea una matriz de 20 X 30 elementos y que genere e
imprima un vector de 20 elementos que contenga la sumatoria de cada
fila de la matriz.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=20,c=30,i,y,par=0,impar=0;
	int matriz[f][c];
	int sumavector[f],sumatemporal;
	//Se procede a llenar la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se recorre la matriz y por cada fila se ira sumando su resultado y almacendandose en un vector resultado
	for (i=0;i<f;i++){
		sumatemporal=0;
		for (y=0;y<c;y++){
			sumatemporal=sumatemporal+matriz[i][y];
		}
		sumavector[i]=sumatemporal;
	}
	//Se procede a mostrar el vector resultado
	for (i=0;i<f;i++){
		printf("La suma de la fila numero %d es : %d \n",i+1,sumavector[i]);
	}
	return 0;
}
/*Q/A: El programa se ejecuta correctamente, los resultados de las sumatorias son correctos, se olvidó eliminar las variables no usadas pero todo lo demas está bien.
Revisado por: Emilio Campos Daguer*/
