/* Nombre: Programa que imprima la tienda
Descripción:E.P. que lea las utilidades anuales de una cadena de 5 tiendas y
que determine e imprima, cuantas tiendas tuvieron utilidades mayor a
los $ 2,000,000.
Autor: Programadores Insomnes
Versión:1.0*/
#include <stdio.h>
int main() {
	/*INICIO 
	util= Guarda las utilidades de cada tienda
	i= contador del número de tienda*/
	int util,i;
	/*PROCESO Y SALIDA
	Se le pide al usuario escribir las utilidades de cada tienda y el if va a imprimir las utilidades mayores a 20k*/
	for(i=1;i<=5;i++) {
		printf("Escribe las utilidades anuales de la tienda # %d \n",i);
		scanf("%d",&util);
		if (util>20000){
			printf("La tienda # %d tiene una utilidad mayor a 20k \n", i);
		}
	}
	return 0;
}

