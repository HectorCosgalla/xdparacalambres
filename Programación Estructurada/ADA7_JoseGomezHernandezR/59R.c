/* 

59. E.P. que lea una matriz de M X N elementos y que cuente e
imprima cuantos elementos son pares y cuantos son impares.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las vairables a usar
	int f,c,i,y,par=0,impar=0;
	//Se pregunta el tamaño de la matriz
	printf("Inserte cantidad de filas de la matriz: ");
	scanf("%d",&f);
	printf("Inserte cantidad de columnas de la matriz: ");
	scanf("%d",&c);
	//Se declaral la matriz
	int matriz[f][c];
	//Se llena la matriz
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
		}
	}
	//Se procede a recorrer la matriz y a evaluar su resudio cuando se divide entre 2 para saber si es par o impar
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			if ((matriz[i][y]%2)==0){
				par=par+1;
			}
			else if ((matriz[i][y]%2)==1){
				impar=impar+1;
			}
		}
	}
	//Se imprime la cantidad de pares e impares
	printf("Hay %d de pares en la matriz \n",par);
	printf("Hay %d de impares en la matriz",impar);
	return 0;
}
/*Q/A: El programa se ejecuta correctamente conforme al número de elementos de filas y columnas ingresados y el contador funciona bien.
Revisado por: Emilio Campos Daguer*/
