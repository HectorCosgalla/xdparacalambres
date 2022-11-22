/*Nombre: Programa que imprima al empleado
Descripción:E.P. que lea el nombre, el sueldo y el número de hijos de los 20
empleados de la tlapalería “El Sapo Verde”, y que determine e imprima
el nombre de los empleados con salario mayor a $ 1,000.- y que
tengan entre 3 y 7 hijos.
Autor: Programadores Insomnes
Versión: 1.0*/
#include <stdio.h>

int main() {
	/*INICIO
	Declaramos las variables
	no_hijo= Saber cuantos hijos tiene el empleado
	sueldo= Saber el sueldo del empleado
	matricula= Identificar al empleado
	i= contador*/
	int no_hijo, sueldo, matricula,i;
	/*PROCESO y SALIDA
	Iniciamos estructura for para tomar los datos del empleado e imprimirlo si sus
	datos entran en los requisitos establecidos*/
	for(i=1;i<=20;i++){
		printf("Escribe la matrícula del empleado %d \n",i);
		scanf("%d", &matricula); 
		printf("Escribe el no. de hijos del empleado %d \n",i);
		scanf("%d", &no_hijo); 
		printf("Escribe el sueldo del empleado %d \n",i);
		scanf("%d", &sueldo);
		if (no_hijo<=7&& no_hijo>=3&&sueldo>1000.00){
			printf("%d \n",matricula);
			
		}
	}
	return 0;
}
