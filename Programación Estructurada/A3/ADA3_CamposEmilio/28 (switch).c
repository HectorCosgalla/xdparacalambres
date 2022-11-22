/*Nombre del Programa: Programa para obtener el día de el mes Descripción:  E.P. que lea el número de un mes (1 a 12) y determine e imprima el
número de días de ese mes.
, Autor: Emilio Campos Daguer, Versión: 1.0*/
#include <stdio.h>
int main() {
	/*Se declara la variable como entero
	m=número de mes*/
	int m;
	/*ENTRADA
	Aquí se le pide al usuario el número de mes que desea conocer los días*/
	printf("Escribe el número de mes que deseas conocer cuantos días tiene \n");
	scanf("%d",&m);
	/*PROCESO Y SALIDA
	Aquí se utiliza un switch con los casos para saber el número de días y además se imprime el resultado esperado*/
	switch (m)
	{
	case 1:{
		printf("\n Este mes tiene 31 días");
		break;}
	case 3:{
		printf("\n Este mes tiene 31 días");
		break;}
	case 5:{
		printf("\n Este mes tiene 31 días");
		break;}
	case 7:{
		printf("\n Este mes tiene 31 días");
		break;}
	case 8:{
		printf("\n Este mes tiene 31 días");
		break;}
	case 10:{
		printf("\n Este mes tiene 31 días");
		break;}
	case 12: {
		printf("\n Este mes tiene 31 días");
		break;}
	case 4:{
		printf("\n Este mes tiene 30 días");
		break;}
	case 6:{
		printf("\n Este mes tiene 30 días");
		break;}
	case 9:{
		printf("\n Este mes tiene 30 días");
		break;}
	case 11:{
		printf("\n Este mes tiene 30 días");
		break;}
	case 2:{
		printf("\n El mes tiene 28 días y en años bisiestos 29");
		}
	}	
	
	return 0;
}
