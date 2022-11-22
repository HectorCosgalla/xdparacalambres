/* Nombre del Programa: Programa para obtener el mayor Descripción: E.P. que lea tres números diferentes y que determine e imprima el
mayor.
la suma., Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/*Se declaran las variables de los 3 números
	n1= número 1, n2= número 2, n3= número 3*/
	float n1,n2,n3;
	/*Se piden los números*/
	printf("\n Escribe el primer numero: ");
	scanf("%f",&n1);
	printf("\n Escribe el segundo numero: ");
	scanf("%f",&n2);
	printf("\n Escribe el tercer numero: ");
	scanf("%f",&n3);
	/*Operador condicional para obtener el número mayor e imprimir el resultado*/
	if (n1>n2&&n1>n3){
		printf("\n\n El número mayor es %f", n1);
	}else
		if (n2>n1&&n2>n3){
			printf("\n\n El número mayor es %f", n2);}
			else 
				if (n3>n1&&n3>n2) {
				printf("\n\n El número mayor es %f", n3);}
				
	getch();
	return 0;
	
}

