/*34 E.P. que lea 100 números (N) y que los imprima

While

Autor Programistas
Version 1.0
Fecha 12/2/22
*/

#include<conio.h>
#include<stdio.h>

int main()
{
	//Declaracion de variables
	float n; //almacena el numero introducido
	int i=1, a=101;//cantidad de numeros ingresados, numero de datos permitidos +1
	
	printf("Programa para leer e imprimir 100 numeros\n");
	
	//Proceso
	while(i<a){
		//Entrada
		printf("Introduzca el %d%c numero:\t", i, 248);
		scanf("%f",&n);
		//Salida
		printf("El %d%c numero es el %.2f\n", i, 248, n);
		i++;
	}	
	printf("\nHa introducido %d numeros\n",i-1);
	
	
	getch();
	return 0;
	/*Q/A: 	El programa lee correctmente los 100 números y te imprime antes de pedir el siguiente el numero de numero que fue ingresado por el usuario
	Revisado por: Daniel Mendez Sierra*/
}

