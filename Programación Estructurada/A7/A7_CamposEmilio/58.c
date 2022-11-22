#include <stdio.h>
/*Nombre:Matriz de 6x4
Descripcion: E.P. que lea una matriz de 6 X 4 elementos y que calcule e
imprima la suma de sus elementos.
Autor: Emilio Campos Daguer
Versión: 1.0
Compilador: Zinjai
*/

int main(){
	/*Se declaran las variables
	matriz= matriz, suma= suma de los elementos
	i y j= son identificadores de las dimensiones y elementos de las matrices*/
	int matriz[6][4]; 
	int suma;
	suma=0;
	/*Por medio de un ciclo for se le pide al usuario ingresar los elementos de la matriz*/
	printf("Ingresa 24 numeros enteros para sumarlos\n");
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &matriz[i][j]);
			suma += matriz[i][j];
		}
	}
	
	/*Se imprimen los elementos de la matriz usados*/
	printf("Los elementos de la matriz fueron: \n ");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
	/*Se imprimen los resultados de la suma de elementos*/
	printf("El resultado de la suma de los elementos %d \n", suma);
	return 0;
}


