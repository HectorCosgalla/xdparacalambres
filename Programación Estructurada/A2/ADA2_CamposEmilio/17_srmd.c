/*Nombre del Programa: Programa para suma, resta, multiplicaci�n y divisi�n Descripci�n: E.P. que lea tres n�meros reales y que determine e imprima la
suma, resta, multiplicaci�n y divisi�n de los mismos.,
 Autor: Emilio Campos Daguer, Versi�n: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>


int main() {
	/*Se declaran las variables como float para pedir reales en caso de se necesario]
	n1= 1er n�mero, n2= 2do n�mero, n3= 3er n�mero, suma= suma de los n�meros
	resta= resta de los n�meros, multiplicaci�n= multiplicaci�n de los n�meros
	divisi�n= divisi�n de los n�meros*/
	float n1,n2,n3,suma,resta,multiplicacion,division;
	/*Se piden los n�meros reales*/
	printf("\n Escribe el pimer numero real: ");
	scanf("%f",&n1);
	printf("\n Escribe el segundo numero real: ");
	scanf("%f",&n2);
	printf("\n Escribe el tercer numero real: ");
	scanf("%f",&n3);
	/*Operaciones correspondientes*/
	suma=n1+n2+n3;
	resta=n1-n2-n3;
	multiplicacion=(n1*n2)*n3;
	division=(n1/n2)/n3;
	/*Se mimprimenm los resultados*/
	printf("\n\n La suma de los numeros reales es: %f", suma);
	printf("\n\n La resta de los numeros reales es: %f", resta);
	printf("\n\n La multiplicacion de los numeros reales es: %f", multiplicacion);
	printf("\n\n La division de los numeros reales es: %f", division);
	
	getch();
	
	return 0;
}

