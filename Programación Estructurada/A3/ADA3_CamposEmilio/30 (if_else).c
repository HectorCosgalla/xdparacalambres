/*Nombre del Programa: Programa para calcular Domingo de Pascua Descripci�n:  E.P. que lea como
entrada un a�o y determine e imprima la fecha del domingo de
Pascua.
, Autor: Emilio Campos Daguer, Versi�n: 1.0*/
#include <stdio.h>
int main() {
	/*Se declaran las variables como enteros
	A= operaci�n 1, B= Operaci�n 2, C= Operaci�n 3, D=Operaci�n 4
	E=Operaci�n 5 N=N�mero de d�a*/
	int anio, A, B, C, D, E, N;
	/* ENTRADA
	Se le pide al usuario el a�o*/
	printf("Escribe el a�o \n");
	scanf("%d", &anio);
	A=anio%19;
	B=anio&4;
	C=anio%7;
	D=(19*A+24)%30;
	E=(2*B+4*C+6*D+5)%7;
	N=(22+D+E);
	/*PROCESO Y SALIDA
	Aqu� se utiliza un if/else para saber el d�a correspondiente a que mes e imprimir el resultado*/
	if (N>31){
		N=N-31;
		printf("El d�a corresponde %d del mes de abril \n",N);
	}
	else if (N<=31){
		printf("El d�a  corresponde al %d del mes de marzo \n",N);
	}
	return 0;
}

