/*Nombre del Programa: Programa para obtener el d�a de el mes Descripci�n:  E.P. que lea el n�mero de un mes (1 a 12) y determine e imprima el
n�mero de d�as de ese mes.
, Autor: Emilio Campos Daguer, Versi�n: 1.0*/
#include <stdio.h>
int main() {
	/*Se declara la variable como entrero 
	m= n�mero de mes*/
	int m;
	/*ENTRADA
	Se le pide al usuario ingresar el n�mero de mes*/
	printf("Escribe el n�mero de mes que deseas conocer \n");
	scanf("%d",&m);
	/*PROCESO Y SALIDA
	Se incluyen if/else que servir�n para saber cuantos d�as tiene el mes*/
	if ( m<0){
		printf("No hay este n�mero de mes");
	} 
	else if (m == 1&&3&&5&&7&&8&&10&&12) {
		printf("El mes tiene 31 d�as");
	}
	else if (m == 2) {
		printf("El mes tiene 28 d�as y en a�os bisiestos 29");
	}
	else if (m == 4&&6&&9&&11) {
		printf("El tiene 30 d�as");
	}
	
	getch();
	return 0;
}

