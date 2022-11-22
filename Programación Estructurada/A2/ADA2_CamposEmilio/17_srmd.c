/*Nombre del Programa: Programa para suma, resta, multiplicación y división Descripción: E.P. que lea tres números reales y que determine e imprima la
suma, resta, multiplicación y división de los mismos.,
 Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>


int main() {
	/*Se declaran las variables como float para pedir reales en caso de se necesario]
	n1= 1er número, n2= 2do número, n3= 3er número, suma= suma de los números
	resta= resta de los números, multiplicación= multiplicación de los números
	división= división de los números*/
	float n1,n2,n3,suma,resta,multiplicacion,division;
	/*Se piden los números reales*/
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

