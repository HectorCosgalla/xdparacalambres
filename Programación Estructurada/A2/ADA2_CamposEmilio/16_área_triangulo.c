/* 
/*Nombre del Programa: Programa para obtener el �rea de un tri�ngulo Descripci�n: 16 E.P. que lea la base (B) y la altura (H) de un tri�ngulo rect�ngulo,
determine e imprima su �rea. A= B x H/2.
, Autor: Emilio Campos Daguer, Versi�n: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/*Se declaran base=pedir base,altura=pedir altura, area=realizar multiplicaci�n de b*h*/	
	int base, altura,area;
	/*Se pide la base y la altura*/
	printf("\n Introduzca la base(b) del triangulo: ");
	scanf("%d",&base);
	printf("\n Introduzca la altura(h) del triangulo: ");
	scanf("%d",&altura);
	/*Se mrealiza la operaci�n del �rea*/
	area= (base*altura)/2;
	/*Se imprime el resultado*/
	printf("\n\n El area del triangulo es: %d", area);
	
	getch();
	
	return 0;
}
