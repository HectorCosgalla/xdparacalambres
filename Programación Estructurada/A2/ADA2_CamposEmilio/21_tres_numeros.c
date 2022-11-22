/*Nombre del Programa: Programa para sumar o multiplicar Descripción: E.P. que lea tres números enteros y si el primero es positivo,
calcular e imprimir el producto de los otros dos; de lo contrario, calcular
la suma., Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/* 
	n1= número 1, n2= número 2, n3= número 3, suma= suma de los números
	multiplicación= se multiplican los números*/
	float n1,n2,n3,suma,multiplicacion;
	/*Se piden los números*/
	printf("\n Escribe el primer numero: ");
	scanf("%f",&n1);
	printf("\n Escribe el segundo numero: ");
	scanf("%f",&n2);
	printf("\n Escribe el tercer numero: ");
	scanf("%f",&n3);
	/*Se realizan las operaciones correspondientes de suma y multiplicación*/
	suma= n1+n2+n3;
	multiplicacion= (n1*n2)*n3;
	/*Operador condicional para saber cual es el número mayor y saber que respuesta imprimir*/
	if (n1<0){
		printf("\n\n La suma es %f",suma);
	}else{
		printf("\n\n La multiplicacion es %f",multiplicacion);
	}
	getch();
	return 0;
}

