/*
Nombre: Ejericio 3 for, salario de programadores
Descripcion: Para un estudio se requiere calcular el salario mensual promedio
de programadores junior en empresas tecnológicas, 
se visitarán 10 empresas y en cada una se encuestará a un número diferente de programadores.
 E.P. que determine e imprima el salario mensual promedio de todos los programadores.  
Autor: Programadores Insomnes(Reynaldo Couoh Martín)
Version: 1.0
Fecha: 22/02/2022
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(int argc, char *argv[]) {
	int i, r, programadores, totalPro;
	float salario, totalSalario, promSalario;
	programadores=0;
	totalPro=0;
	salario=0;
	
	/*Entrada y Proceso: por medio del bucle for se introduce el numero de trabajadores en cada una de las 10 empresas
	y el salario de cada uno.*/
	for (i=1; i<=10;i++){
		printf("Empresa %d ingrese el numero de trabajadores: ", i);
		scanf("%d", &programadores);
		for (r=1;r<=programadores; r++){
			printf("Ingrese el salario mensual del trabajador %d: ", r);
			scanf("%f", &salario);
			totalSalario= totalSalario+ salario;
		}
		totalPro= totalPro+programadores; /*cada vez que se ingrese el numero de empleados 
		en cada empresa, se van a ir acumulando para poder calcular el promedio posteriormente*/
	}
	
	/*Se calcula el promedio*/
	promSalario= totalSalario/totalPro;
	
	/*Salida: se imprime el salario promedio de los programadores*/
	printf("\nEl salario mensual promedio de todos los programadores es de: %f", promSalario);
	
	getch();
	return 0;
}

