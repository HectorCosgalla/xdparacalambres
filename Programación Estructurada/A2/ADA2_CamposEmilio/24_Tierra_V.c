/* 
Nombre del Programa: Programa para calcular el volumen de la Tierra Descripción:24 E.P. que determine e imprima el volumen de la tierra. Considerar
que es un esferoide V= 4/3 = PI * a2 * b. Dónde: a = radio ecuatorial = 6378.137 kms, b = radio polar = 6356.752 kms. , 
Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(void) {
	/*Se declaran las variables
	V=Volumen, f=medida equivalente a 4/3, a= radio ecuatorial, b= Nradio polar*/
	float V,f,a,b;
	f=4/3;
	a= 6378.137;
	b= 6356.752;
	/*Se realiza la operación de volumen de una esfera*/
	V= f*M_PI*pow(a,2)*b;
	/*Se imprime el resultado*/
	printf("\n\n El volumen de la tierra en km cubicos es de %.2f", V);

	getch();
	return 0;
			
}
