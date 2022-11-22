#include <stdio.h>
/*Nombre: Elementos iguales a 0
Descripción: E.P. que lea una matriz de 20 X 20 elementos y que cuente e
imprima cuantos elementos igual a cero se encuentran en las primeras
10 filas.
Autor: Emilio Campos Daguer
Versión: 1.0
Compilador: Zinjai*/
int main() {
	/*Se declaran las variables
	matriz: matriz,zero=no. de ceros*/
	int matriz[20][20],zero=0;
	/*ENTRADA
	Se le pide al usuario ingresar los datos */
	printf("Ingresa 400 numeros enteros\n");
	/*PROCESO Y SALIDA
	Se crean ciclos for para pedir los elementos y cntabilizar los ceros*/
	
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] == 0)
			{
				zero++;
			}
		}
	}
	printf("%d elementos son iguales a cero\n", zero);
	return 0;
}

