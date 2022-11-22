/*Nombre del Programa: Programa para imprimir 5 enteros y 3 reales Descripción: 15 E.P. que lea e imprima cinco números enteros y tres reales.
, Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/*Se declaran las variables 
	r1=real 1, r2=real 2, r3=real 3, con float para imprimir números reales*/
	/*Se declaran las variables 
	e1=entero 1, e2=entero 2 e3=entero 3 e4=entero 4, e5= entero 5 con int para imprimir solo números enteros*/
	float r1, r2,r3;
	int e1,e2,e3,e4,e5;
	/* Se piden y leen los 3 números reales*/
	printf("\n Introduzca el primer número real: ");
	scanf("%f",&r1);
	printf("\n Introduzca el segundo número real: ");
	scanf("%f",&r2);
	printf("\n Introduzca el tercer número real: ");
	scanf("%f",&r3);
	/* Se piden y leen los 5 números enteros*/
	printf("\n Introduzca el primer número entero: ");
	scanf("%d",&e1);
	printf("\n Introduzca el segundo número entero: ");
	scanf("%d",&e2);
	printf("\n Introduzca el tercer número entero: ");
	scanf("%d",&e3);
	printf("\n Introduzca el cuarto número entero: ");
	scanf("%d",&e4);
	printf("\n Introduzca el quinto número entero: ");
	scanf("%d",&e5);
	/* Se imprimen los resultados*/
	printf("\n\n El primer numero real es: %f", r1);
	printf("\n\n El segundo numero real es: %f", r2);
	printf("\n\n El tercer numero real es: %f", r3);
	printf("\n\n El primer número entero es: %d", e1);
	printf("\n\n El segundo número entero es: %d", e2);
	printf("\n\n El tercer número entero es: %d", e3);
	printf("\n\n El cuarto número entero es: %d", e4);
	printf("\n\n El quinto número entero es: %d", e5);
	
	getch();
	return 0;
}

