/*Nombre del Programa: Programa para obtener el d�a de el mes Descripci�n:  E.P. que lea el n�mero de un mes (1 a 12) y determine e imprima el
n�mero de d�as de ese mes.
, Autor: Emilio Campos Daguer, Versi�n: 1.0*/
#include <stdio.h>
int main() {
	/*Se declara la variable como entero
	m=n�mero de mes*/
	int m;
	/*ENTRADA
	Aqu� se le pide al usuario el n�mero de mes que desea conocer los d�as*/
	printf("Escribe el n�mero de mes que deseas conocer cuantos d�as tiene \n");
	scanf("%d",&m);
	/*PROCESO Y SALIDA
	Aqu� se utiliza un switch con los casos para saber el n�mero de d�as y adem�s se imprime el resultado esperado*/
	switch (m)
	{
	case 1:{
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 3:{
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 5:{
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 7:{
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 8:{
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 10:{
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 12: {
		printf("\n Este mes tiene 31 d�as");
		break;}
	case 4:{
		printf("\n Este mes tiene 30 d�as");
		break;}
	case 6:{
		printf("\n Este mes tiene 30 d�as");
		break;}
	case 9:{
		printf("\n Este mes tiene 30 d�as");
		break;}
	case 11:{
		printf("\n Este mes tiene 30 d�as");
		break;}
	case 2:{
		printf("\n El mes tiene 28 d�as y en a�os bisiestos 29");
		}
	}	
	
	return 0;
}
