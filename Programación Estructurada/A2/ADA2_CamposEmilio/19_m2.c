/*Nombre del Programa: Programa para salario de trabajador Descripción: E.P. que lea el nombre del
trabajador y el total de superficie realizada durante la semana. Se pide imprimir el nombre y su salario correspondiente. La tarifa de
pago es de $ 300.- el metro cuadrado., Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/*/
#include <conio.h>
#include <stdio.h>

int main() {
	/*Se definen las variables como float por si los metros no son enteros
	m2= metros cuadrados, pago=pago por hora*/
	float m2,pago;
	/*Se pide el número de metros cuadrados que construtó el trabajador*/
	printf("\n Introduzca el número de metros cuadrados construidos: ");
	scanf("%f",&m2);
	/*Se realizan las operaciones correspondientes*/
	pago= m2*300;
	/*Se imprimen los resultados*/
	printf("\n\n El pago correspondiente a los metros cuadrados trabajados es: %f", pago);
	
	
	getch();
	return 0;
}
