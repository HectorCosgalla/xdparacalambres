/*Nombre del Programa: Programa para leer persona con requisitos  Descripción: E.P. que lea el nombre, la edad y el sueldo de una persona y que
determine si cumple o no con los siguientes requisitos: Que sea mayor
de 35 años y su salario este comprendido entre $ 3,000.- y $ 5,000.-.
, Autor: Emilio Campos Daguer, Versión: 1.0*/
#include <stdio.h>

int main() {
	/*Se declaran los valores
	edad= edad de la persona sueldo= sueldo de la persona
	nombre= nombre de la persona*/
	int edad, sueldo;
	char nombre;
	/*ENTRADA 
	Se le pide al usuario ingresar sus datos*/
	printf("Escribe tu nombre \n");
	scanf("%s",&nombre);
	printf("Escribe tu edad \n");
	scanf("%d",&edad);
	printf("Escribe tu sueldo \n");
	scanf("%d",&sueldo);
	/*PROCESO Y SALIDA
	Se realiza el proceso para saber si aplica y no y se imprime*/
	if (sueldo < 3000 && sueldo>5000) {
		printf("TU SUELDO NO APLICA \n");
	}
	else {
		printf("TU SUELDO APLICA \n");
	}
	
	if (edad> 35) {
		printf("TU EDAD NO APLICA \n");
	}
	else {
		printf("TU EDAD APLICA \n");
	}

	return 0;
}

