#include <stdio.h>
/*Nombre:Matriz de 15x13
Descripcion: E.P. que lea una matriz de 15 X 13 elementos y que calcule e
imprima lo siguiente:
a) El elemento menor del arreglo.
b) El total de elementos negativos de la fila 10 a la 13.
c) El mayor elemento del arreglo.
Autor: Emilio Campos Daguer
Versión: 1.0
Compilador: Zinjai
*/
int main() {
	/*Se declaran las variables
	matriz=matriz, menor=menor, mayor=mayor*/
	int matriz[15][13], menor = 10000000,mayor=0;
	/*ENTRADA
	Se le pide al usuario ingresar los elementos*/
	printf("Ingresa 195 numeros enteros\n");
	/*PROCESO
	Se le leen los elementos y se saca el elemento mayor y menor*/
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j]>mayor){
				mayor=matriz[i][j];
			
			}
			
			if (matriz[i][j]<menor){
				menor=matriz[i][j];
				
			}
			
		}
	}
	/*SALIDA
	Se imprimen los resultados*/
	printf("El elemento mayor es: %d \n",mayor);
	printf("El elemento menor es: %d \n",menor);
	return 0;
}

