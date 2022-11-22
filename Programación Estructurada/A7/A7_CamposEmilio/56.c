#include <stdio.h>
/*Nombre:Matriz de 3x3
Descripcion:56. E.P. que lea una matriz de 3 X 3 elementos y los imprima.
Autor: Emilio Campos Daguer
Versión: 1.0
Compilador: Zinjai
*/
int main() {
	/*Se declaran las variables
	matriz: matriz*/
	int matriz[3][3];
	/*ENTRADA
	Se le pide al usuario ingresar los datos */
	printf("Ingresa 9 numeros enteros\n");
	/*PROCESO Y SALIDA
	Se crean ciclos for para pedir los elementos e imprimir la matriz*/
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}

