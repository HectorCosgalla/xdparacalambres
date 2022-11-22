/*Nombre del Programa: Programa para obtener el día de el mes Descripción:  E.P. que lea el número de un mes (1 a 12) y determine e imprima el
número de días de ese mes.
, Autor: Emilio Campos Daguer, Versión: 1.0*/
#include <stdio.h>
int main() {
	/*Se declara la variable como entrero 
	m= número de mes*/
	int m;
	/*ENTRADA
	Se le pide al usuario ingresar el número de mes*/
	printf("Escribe el número de mes que deseas conocer \n");
	scanf("%d",&m);
	/*PROCESO Y SALIDA
	Se incluyen if/else que servirán para saber cuantos días tiene el mes*/
	if ( m<0){
		printf("No hay este número de mes");
	} 
	else if (m == 1&&3&&5&&7&&8&&10&&12) {
		printf("El mes tiene 31 días");
	}
	else if (m == 2) {
		printf("El mes tiene 28 días y en años bisiestos 29");
	}
	else if (m == 4&&6&&9&&11) {
		printf("El tiene 30 días");
	}
	
	getch();
	return 0;
}

