/*Nombre del Programa: Programa para calcular Domingo de Pascua Descripción:  E.P. que lea como
entrada un año y determine e imprima la fecha del domingo de
Pascua.
, Autor: Emilio Campos Daguer, Versión: 1.0*/
#include <stdio.h>
int main() {
	/*Se declaran las variables como enteros
	A= operación 1, B= Operación 2, C= Operación 3, D=Operación 4
	E=Operación 5 N=Número de día*/
	int anio, A, B, C, D, E, N;
	/* ENTRADA
	Se le pide al usuario el año*/
	printf("Escribe el año \n");
	scanf("%d", &anio);
	A=anio%19;
	B=anio&4;
	C=anio%7;
	D=(19*A+24)%30;
	E=(2*B+4*C+6*D+5)%7;
	N=(22+D+E);
	/*PROCESO Y SALIDA
	Aquí se utiliza un if/else para saber el día correspondiente a que mes e imprimir el resultado*/
	if (N>31){
		N=N-31;
		printf("El día corresponde %d del mes de abril \n",N);
	}
	else if (N<=31){
		printf("El día  corresponde al %d del mes de marzo \n",N);
	}
	return 0;
}

