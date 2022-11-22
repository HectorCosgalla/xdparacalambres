#include <stdio.h>

int main(){
	/*Se declaran las variables n=filas,n= columnas, matriz=matriz, par= cantidad de par, impar= cantidad de impar
	multi= numero de elementos*/
	int n, m;
	printf("Dame las dimensiones de la matriz:\n");
	scanf("%d %d", &m, &n);
	int matriz[m][n], par, impar,multi;
	par=0;
	impar=0;
	multi=n*m;
	printf("Ingresa los %d en terminos enteros\n",multi);
	/*PROCESO
	Se crean ciclos for para leer y contar los elementos pares e impares*/
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] % 2 == 0)
			{
				par++;
			}
			else
			{
				impar++;
			}
		}
	}
	/*SALIDA
	Se imprime lo requerido*/
	printf("De los %d elementos ingresados\n",multi);
	printf("%d son pares\n", par);
	printf("%d son impares\n", impar);
	
	return 0;
}
