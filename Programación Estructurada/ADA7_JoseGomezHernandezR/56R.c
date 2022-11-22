/* 

56. E.P. que lea una matriz de 3 X 3 elementos y los imprima.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables
	int matriz[3][3],i,y;
	//Se procede a llenar la matriz
	for (i=0;i<3;i++){
		for (y=0;y<3;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Y se procede a mostrar la misma matriz
	for (i=0;i<3;i++){
		for (y=0;y<3;y++){
			printf("%d ", matriz[i][y]);
		}
		printf("\n");
	}
	return 0;
}
/*Q/A: Se imprime correctamente el programa, me agrada especifique la cuadrícula de la matriz
Revisado por: Emilio Campos Daguer*/
