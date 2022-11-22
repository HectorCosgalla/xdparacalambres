/*
36. E.P. que lea 50 números y que cuente e imprima cuantos son
negativos.

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
	float n;//almacena el numero introducido por el usuario
	int i=1, a=51, j=0, cond=0;//contador para el ciclo while, numero de datos ingresados máximo +1, contador de numeros negativos, condicion
	
	printf("Programa para determinar si un numero es negativo\n");
	
	//Proceso
	while(i<a){
		//Entrada
		printf("Introduzca el %d%c numero:\t",i, 248);
		scanf("%f",&n);
		//Salida
		if(n<cond){
			printf("El numero %.2f es negativo\n",n);
			j++;
		}
		i++;
	}
	
	//Salida
	printf("\nHa introducido %d numeros, %d de ellos son negativos",i-1,j);
	
	getch();
	return 0;
	/*Q/A: La ejecución es correcta, el programa imprime los números que son negativos después de ser ingresados
	Revisado popr: Danie Mendez Sierraw*/
}
