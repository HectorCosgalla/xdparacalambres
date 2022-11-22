/*33 E.P. que lea 10 números (N) y que determine e imprima los que
sean mayores a 100.

WHILE

Autor Programistas
Version 1.0
Fecha 11/2/22
*/

#include <conio.h>    // console input output
#include <stdio.h>    // Standard Input/Output
#include <math.h>     //operaciones matematicas

int main()  
{
	//Declaracion de variables
	float n; //almacenan numero ingresado
	int max = 100, i=1, a=11;//condicion a cumplir, cantidad de numeros ingresados, numero de datos permitidos +1
	
	printf("Programa para determinar si un numero es mayor o menor a 100\n");
	
	//Proceso
	while(i<a){
		
	//Entrada		
		printf("Introduzca el %d%c numero:\t", i, 248);
		scanf("%f",&n);
	
	//Salida
		if(n>max){
			printf("\tEl numero %.1f es mayor que %d\n", n, max);
		}else if(n==max){
			printf("\tEl numero %.1f es igual a %d\n", n, max);
		}else{
			printf("\tEl numero %.1f es menor que %d\n", n, max);
		}
		
		i++;//i es el contador de datos que introduce el usuario. Aumenta en 1 cada vez que el usuario inserta un dato
	}
	
	printf("\nHa introducido %d numeros\n",i-1);
	getch(); /* Pausa, lee un carácter por teclado, sin eco por pantalla */
	
    return 0;   // return 0, indica que finalizó correctamente la ejecución	
  /* Q/A: El programa ejecuta adecuadamente imprime correctamente los números que son mayores a 100 y los que son menores a 100
	y me parece un buen detalle el avisar al usuario terminó de ingresar los datos ("Ha introducido 10 numeros").
	
	Revisado por: Daniel Mendez Sierra*/ 
}


