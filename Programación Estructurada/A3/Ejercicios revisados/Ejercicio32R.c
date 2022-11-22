// E.P. que lea la base y la altura de tres triángulos rectángulos diferentes y que calcule e imprima, cual es el área del triángulo mayor.
//@Author Jose Damian Gomez Hernandez
#include <stdio.h>

int main(int argc, char *argv[]) {
	float h1,b1,h2,b2,h3,b3,a1,a2,a3,AreaMaxima;
	int casos;
	printf ("Inserte base del primer triangulo: ");
	scanf ("%f", &b1);
	printf ("Inserte altura del primer triangulo: ");
	scanf ("%f", &h1);
	printf ("Inserte base del segundo triangulo: ");
	scanf ("%f", &b2);
	printf ("Inserte altura del segundo triangulo: ");
	scanf ("%f", &h2);
	printf ("Inserte base del tercero triangulo: ");
	scanf ("%f", &b3);
	printf ("Inserte altura del tercero triangulo: ");
	scanf ("%f", &h3);
	//Se solicitan los datos de los tres triangulos
	a1=(b1*h1)/2;
	a2=(b2*h2)/2;
	a3=(b3*h3)/2;
	//Se calculan sus respectivas areas
	AreaMaxima=a1;
	//Procedo a asumir que el primer triangulo es el de mayor area
	casos=1;
	//Procedo a comparar con ambos triangulos
	if (a2>AreaMaxima){
		casos=2;
		AreaMaxima=a2;
	}
	if (a3>AreaMaxima){
		casos=3;
		AreaMaxima=a3;
	}
	//Segun los if anteriores se procede a evaluar los casos
	switch (casos){
	case 1:
		printf ("El primer triangulo es el mayor: %f", AreaMaxima);
		break;
	case 2:
		printf ("El segundo triangulo es el mayor: %f", AreaMaxima);
		break;
	case 3:
		printf ("El tercero triangulo es el mayor: %f", AreaMaxima);
		break;
	default:
		printf ("No valido");
		/*Q\A: Recomiendo dar una descripción más detallada de las variables
		En el caso del ejercicio la ejecución es correcta y arroja la impresión correcta del triángulo mayor,
		pero no existe la versión con if/else de este.
		Inserte base del primer triangulo: 3
		Inserte altura del primer triangulo: 4
		Inserte base del segundo triangulo: 2
		Inserte altura del segundo triangulo: 6
		Inserte base del tercero triangulo: 7
		Inserte altura del tercero triangulo: 8
		El tercero triangulo es el mayor: 28.000000 (Recomiendo reducir el número de decimales por estética pero igual está bien)
		
		
		Revisado por: Emilio Campos Daguer*/
	}
}
