/*Nombre del Programa: Programa para sumar o multiplicar Descripci�n: E.P. que lea tres n�meros enteros y si el primero es positivo,
calcular e imprimir el producto de los otros dos; de lo contrario, calcular
la suma., Autor: Emilio Campos Daguer, Versi�n: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/* 
	n1= n�mero 1, n2= n�mero 2, n3= n�mero 3, suma= suma de los n�meros
	multiplicaci�n= se multiplican los n�meros*/
	float n1,n2,n3,suma,multiplicacion;
	/*Se piden los n�meros*/
	printf("\n Escribe el primer numero: ");
	scanf("%f",&n1);
	printf("\n Escribe el segundo numero: ");
	scanf("%f",&n2);
	printf("\n Escribe el tercer numero: ");
	scanf("%f",&n3);
	/*Se realizan las operaciones correspondientes de suma y multiplicaci�n*/
	suma= n1+n2+n3;
	multiplicacion= (n1*n2)*n3;
	/*Operador condicional para saber cual es el n�mero mayor y saber que respuesta imprimir*/
	if (n1<0){
		printf("\n\n La suma es %f",suma);
	}else{
		printf("\n\n La multiplicacion es %f",multiplicacion);
	}
	getch();
	return 0;
}

