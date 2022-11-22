/*Nombre del Programa: Programa para convertir celsius a ferenheit Descripción: E.P. que lea un valor C que representa una cantidad en grados
centígrados y que lo convierta a grados Fahrenheit (F). F= C * 1.8 +
32., Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/* Se definen los grados como reales ya que puede haber una conversión decimal
	grados= grados celcius, f= grados farenheit*/
	float grados,f;
	/*Se piden los grados celcius*/
	printf("\n Introduzca los grados Celcius a convertir: ");
	scanf("%f",&grados);
	/*Se realiza las operaciones correspondientes*/
	f= (grados*1.8)+32;
	/* Se imprime el resultado*/
	printf("\n\n La conversion a grados Farenheit es: %f", f);
	
	
	getch();
	return 0;
}
