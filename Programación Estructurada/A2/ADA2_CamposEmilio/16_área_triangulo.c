/* 
/*Nombre del Programa: Programa para obtener el área de un triángulo Descripción: 16 E.P. que lea la base (B) y la altura (H) de un triángulo rectángulo,
determine e imprima su área. A= B x H/2.
, Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/*Se declaran base=pedir base,altura=pedir altura, area=realizar multiplicación de b*h*/	
	int base, altura,area;
	/*Se pide la base y la altura*/
	printf("\n Introduzca la base(b) del triangulo: ");
	scanf("%d",&base);
	printf("\n Introduzca la altura(h) del triangulo: ");
	scanf("%d",&altura);
	/*Se mrealiza la operación del área*/
	area= (base*altura)/2;
	/*Se imprime el resultado*/
	printf("\n\n El area del triangulo es: %d", area);
	
	getch();
	
	return 0;
}
