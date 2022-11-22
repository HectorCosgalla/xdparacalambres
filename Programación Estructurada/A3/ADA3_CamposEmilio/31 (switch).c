/*Nombre del Programa: Programa para leer persona con requisitos  Descripción: E.P. que lea el nombre, la edad y el sueldo de una persona y que
determine si cumple o no con los siguientes requisitos: Que sea mayor
de 35 años y su salario este comprendido entre $ 3,000.- y $ 5,000.-.
, Autor: Emilio Campos Daguer, Versión: 1.0*/
#include <stdio.h>

int main() {
	/*Se declaran los valores
	edad= edad de la persona sueldo= sueldo de la persona
	nombre= nombre de la persona
	sueldocor= pedir si el sueldo es correcto
	edadcor=pedir su la edad es correcta*/
	int edad, sueldo, edadcor, sueldocor;
	char nombre;
	/*ENTRADA 
	Se le pide al usuario ingresar sus datos*/
	printf("Escribe tu nombre \n");
	scanf("%s",&nombre);
	printf("Escribe tu edad \n");
	scanf("%d",&edad);
	printf("Escribe tu sueldo \n");
	scanf("%d",&sueldo);
	
	printf("Si la edad es mayor a 35 escribe (1), si la edad es mayor a 35 escribe (2)\n");
	scanf("%d", &edadcor);
	/*PROCESO Y SALIDA
	Se realiza el proceso con un switch para pedir al usuario revisar si sus datos son correctos para luego imprimir un resultado */
	switch (edadcor){
	case 1:{
		printf("TU EDAD NO APLICA \n");}
	case 2: {
		printf("TU EDAD APLICA \n");
		}
	printf("Si tu sueldo es mayor que 5000 o menor de 3000 escribe (1), si tu sueldo es mayor a 3000 pero menor a 5000 escribe (2)\n");
	scanf("%d", &sueldocor);
	}
	switch(sueldocor){
	case 1:{
		printf("TU SUELDO NO APLICA \n");}
	case 2: {
			printf("TU SUELDO APLICA \n");
		}
	}
	return 0;
}
