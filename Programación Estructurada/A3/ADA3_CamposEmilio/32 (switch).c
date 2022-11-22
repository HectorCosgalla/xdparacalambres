/*Nombre del Programa: Programa para calcular al tri�ngulo mayor Descripci�n: E.D.F. que lea la base y la altura de tres tri�ngulos rect�ngulos
diferentes y que calcule e imprima, cual es el �rea del tri�ngulo mayor.
, Autor: Emilio Campos Daguer, Versi�n: 1.0*/
#include <stdio.h>
int main() {
	/*Se declaran las variables como float
	bn=Base del tri�ngulo n�mero n
	hn=Altura deltri�ngulo n
	mayor= n�mero mayor*/
	printf("Bienvenido a los ejercicios de geometr�a, por favor escribe los valores de los tri�ngulos que fueron asignados por tu profesor \n");
	float b1, h1, a1, b2, h2, a2, b3, h3,a3;
	int mayor;
	/*ENTRADA
	Se le piden los datos de los tri�ngulos al usuario*/
	printf( "Escribe la base del primer tri�ngulo respectivamente \n");
	scanf("%f", &b1);
	printf( "Escribe la altura del primer tri�ngulo respectivamente \n");
	scanf("%f", &h1);
	printf( "Escribe la base del segundo tri�ngulo respectivamente \n");
	scanf("%f", &b2);
	printf( "Escribe la altura del segundo tri�ngulo respectivamente \n");
	scanf("%f", &h2);
	printf( "Escribe la base del tercer tri�ngulo respectivamente \n");
	scanf("%f", &b3);
	printf( "Escribe la altura del tercer tri�ngulo respectivamente \n");
	scanf("%f", &h3);
	a1= (b1*h1)/2;
	a2= (b2*h2)/2;
	a3= (b3*h3)/2;
	printf("\n El �rea del tri�ngulo 1 es: %.2f m2",a1);
	printf("\n El �rea del tri�ngulo 2 es: %.2f m2",a2);
	printf("\n El �rea del tri�ngulo 3 es: %.2f m2",a3);
	
	printf("\n Ahora escritas las areas de los triangulos, selecciona cual es el triangulo mayor (1) el primero, (2) el segundo, (3) el tercero");
	scanf("%d", &mayor);
	/*PROCESO Y SALIDA
	Se utiliza un switch para pedir el mayor y se imprime el resultado*/
	switch(mayor){
	case 1:
		printf("\n Seleccionaste el primer triangulo como mayor");
	break;
	case 2:
		printf("\n Seleccionaste el segundo triangulo como mayor");
	break;
	case 3:
		printf("\n Seleccionaste el tercer triangulo como mayor");
	}
	printf("\n Ahora contacta a tu profesor para revisar tu resultado");
	return 0;
}
