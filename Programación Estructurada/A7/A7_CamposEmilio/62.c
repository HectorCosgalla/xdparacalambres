#include <stdio.h>
/*Nombre:Suma de la diagonal de matriz de 5x5
Descripción: E.P que lea una matriz de 5 X 5 elementos y que calcule e imprima
la suma de sus elementos que se encuentran en la diagonal principal.
Autor: Emilio Campos Daguer
Versión: 1.0
Compilador: Zinjai
*/
int main(){
	/*Se declaran las variables 
	matriz= matriz, diagonal= sumatoria de la diagonal principal "\"*/
	int matriz[5][5], diagonal = 0;
	printf("Ingresa 25 numeros enteros\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &matriz[i][j]);
			if (i == j)
			{
				diagonal += matriz[i][j];
			}
			
		}
	}
	printf("\nLa matriz ingresada es: \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("La suma de los elementos de la la diagonal principal es: %d", diagonal);
	
	return 0;
}
