/*
35 E.P. que lea 25 números (N) y que imprima los que sean iguales a
cero.

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
	float n;//almacena los numeros introducidos por el usuario
	int i=1, a=26, cond=0;//contador de datos ingresados, numero de datos permitidos +1, condicion a cumplir
	
	printf("Programa para determinar si un numero es igual a 0\n");
	
	//Proceso
	while(i<a){
		//Entrada
		printf("Introduzca el %d%c numero:\t",i,248);
		scanf("%f",&n);
		//Salida
		if(n==cond){
			printf("El numero %.2f es igual a 0\n",n);
		}
		i++;
	}
	printf("\nHa introducido %d numeros\n",i-1);
	
	getch();
	return 0;
	/*El programa presenta una ejecución correcta al introducir cualquier número real desigual a 0 el programa sigue leyendo números
	en el caso contrario imprime que el número no es igual a 0
	Revisado por: Daniel Mendez Sierra*/
}
