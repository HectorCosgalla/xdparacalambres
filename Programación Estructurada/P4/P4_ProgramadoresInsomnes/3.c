/*
Nombre: Ejericio 3 salario de programadores
Descripcion: Para un estudio se requiere calcular el salario mensual promedio de programadores junior 
en empresas tecnológicas, se visitarán 10 empresas y en cada una se encuestará a un número diferente de programadores. 
E.P. que determine e imprima el salario mensual promedio de todos los programadores.
Autor: Programadores Insomnes
Version: 1.0
Fecha: 16/02/2022
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int empresas, programadores, contprogra, totalPro;
	float salario, totalSalario, promSalario;
	empresas=1;
	programadores=0;
	contprogra=1;
	totalPro=0;
	salario=0;
	
	/*Entrada y Proceso: se introduce el numero de trabajadores en cada una de las 10 empresas
	y el salario de cada uno. Tambien se calcula el promedio*/
	do{
		printf("Empresa %d ingrese el numero de trabajadores \n", empresas);
		scanf("%d", &programadores);
		do{
			printf("Ingrese el salario mensual del trabajador %d: ", contprogra);
			scanf("%f", &salario);
			++contprogra;
			totalSalario= totalSalario+ salario;
		} while(contprogra<=programadores);
		++empresas;
		totalPro= totalPro+programadores;
		contprogra=1;
	} while(empresas<=10);
	
	promSalario= totalSalario/totalPro;
	
	/*Salida: se imprime el salario promedio de los programadores*/
	printf("\nEl salario mensual promedio de todos los programadores es de: %f", promSalario);

	return 0;
}

