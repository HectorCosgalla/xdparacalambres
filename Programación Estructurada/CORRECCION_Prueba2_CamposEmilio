#include <stdio.h>
#include <string.h>

#define E 4
/*
Nombre: Programa que calcule promedios
Descripcion:E.P. que lea un arreglo (vector para los N alumnos) de la asignatura
Programacion Estructurada, que contenga una estructura llamada alumno que
incluya los miembros: nombre, edad, grupo y semestre.  Ademas, debe leer un;
segundo arreglo (matriz de N X 4 elementos), con las calificaciones del curso:
Parcial1, Parcial2 y  Proyecto.  De tal forma, la fila del vector de alumnos
corresponda a la fila de la matriz que contiene las calificaciones del curso.

Se pide desplegar un menu con las siguientes opciones (validar la captura del
usaurio y controlar la salida del programa con la opcion <Salir>):

a)    Determinar el promedio final de cada alumno y almacenarlo en la cuarta
columna de la matriz de calificaciones, asi como determinar el promedio de
grupo.

b)    Ordenar ambos arreglos, de acuerdo con el orden alfabetico del nombre de;
dichos alumnos.  Es decir, al finalizar el ordenamiento deben coincidir las
filas en ambos arreglos, que corresponden a los datos de cada alumno

c)    Reporte de alumnos (nombre y semestre), que aprobaron el curso (contar con
promedio de al menos 70 puntos). Version: 1.0 Autor: Emilio Campos Daguer Fecha:;
08/04/2022
*/

typedef struct calif {
	float parcial1;
	float parcial2;
	float proyecto;
} calif;

typedef struct datos {
	char nombre[100];
	float edad;
	float grupo;
	float semestre;
} datos;

void promedios(calif cals[], datos data[], int n);
void ordenar_alf(calif cals[], datos data[], int n);
void aprobados(calif cals[], datos data[], int n);
void mayor(calif cals[], datos data[], int n);


int main() {
	
	int n;
	
	printf("Ingrese la cantidad de alumnos que desea subir al sistema\n");
	scanf("%d", &n);
	
	calif cals[n];
	datos data[n];
	
	printf("Numero de alumnos aceptado, ingresa los datos correspondientes:\n");
	for (int i = 0; i < n; i++) {
		printf("Escriba el nombre del alumno:\n");
		fflush(stdin);
		gets(data[i].nombre);
		printf("Escriba la edad del alumno %d:\n", i + 1);
		scanf("%f", &data[i].edad);
		fflush(stdin);
		printf("Escriba el grupo del alumno %d:\n", i + 1);
		scanf("%f", &data[i].grupo);
		fflush(stdin);
		printf("Escriba el semestre del alumno %d:\n", i + 1);
		scanf("%f", &data[i].semestre);
		fflush(stdin);
		printf("Escriba la calificacion del parcial 1 del alumno %d:\n", i + 1);
		scanf("%f", &cals[i].parcial1);
		fflush(stdin);
		printf("Escriba la calificacion del parcial 1 del alumno %d:\n", i + 1);
		scanf("%f", &cals[i].parcial2);
		fflush(stdin);
		printf("Escriba la calificacion del proyecto del alumno %d:\n", i + 1);
		scanf("%f", &cals[i].proyecto);
		fflush(stdin);
	}
	
	printf("Bienvenido al programa de promedios del salon");
	
	int opc;
	do {
		printf("\n\tMENU\n");
		printf(
			   "_______________________\n");
		printf("1. Calcular promedios finales.\n");
		printf("2. Ordenar alfabeticamente.\n");
		printf("3. Reporte de alumnos aprobados.\n");
		printf("4. Reporte de alumnos mayores.\n");
		printf("5. Salir.\n: ");
		scanf("%d", &opc);
		printf(
			   "_______________________\n");
		
		switch (opc) {
		case 1:
			promedios(cals, data, n);
			break;
		case 2:
			ordenar_alf(cals, data, n);
			break;
		case 3:
			aprobados(cals, data, n);
			break;
		case 4:
			mayor(cals, data, n);
			break;
		}
	} while (opc != 5);
	return 0;
}

void ordenar_alf(calif cals[], datos data[], int n) {
	
	
	
	int desordenados, arr_desordenado = 1;
	datos aux;
	calif aux2;
	char n1[100], n2[100];
	
	while (arr_desordenado) {
		desordenados = 0;
		for (int i = 0; i < n - 1; i++) {
			strcpy(n1, data[i].nombre);
			strcpy(n2, data[i + 1].nombre);
			
			if (strcmp(n1, n2) > 0) {
				
				aux = data[i];
				data[i] = data[i + 1];
				data[i + 1] = aux;
				
				aux2 = cals[i];
				cals[i] = cals[i + 1];
				cals[i + 1] = aux2;
				
				desordenados++;
			}
		}
		if (desordenados == 0)
			arr_desordenado = 0;
	}
	
	for (int i = 0; i < n; i++) {
		printf("Nombre: %s  Edad: %.2f  Grupo: %.2f  Semestre: %.2f\n",
			   data[i].nombre, data[i].edad, data[i].grupo, data[i].semestre);
		printf("Parcial 1: %.2f  Parcial2: %.2f  Proyecto: %.2f\n",
			   cals[i].parcial1, cals[i].parcial2, cals[i].proyecto);
	}
}

void promedios(calif cals[], datos data[], int n) {
	
	
	
	float prom = 0, prom_gen = 0;
	
	printf("PROMEDIO GRUPAL\n");
	printf("---------------------------------------------------------------------"
		   "----------------------\n");
	for (int i = 0; i < n; i++) {
		prom = (cals[i].parcial1 + cals[i].parcial2 + cals[i].proyecto) / 3;
		prom_gen += prom / n;
		printf("Nombre: %s  Edad: %.2f  Grupo: %.2f  Semestre: %.2f\n",
			   data[i].nombre, data[i].edad, data[i].grupo, data[i].semestre);
		printf("Parcial 1: %.2f  Parcial2: %.2f  Proyecto: %.2f, Promedio alumno: "
			   "%.2f \n",
			   cals[i].parcial1, cals[i].parcial2, cals[i].proyecto, prom);
	}
	printf("El promedio grupal fue: %.2f", prom_gen);
	printf("---------------------------------------------------------------------"
		   "-----------------------\n");
}

void aprobados(calif cals[], datos data[], int n) {
	
	
	
	float prom = 0;
	
	printf("ALUMNOS APROBADOS\n");
	printf("---------------------------------------------------------------------"
		   "----------------------\n");
	for (int i = 0; i < n; i++) {
		prom = (cals[i].parcial1 + cals[i].parcial2 + cals[i].proyecto) / 3;
		if (prom >= 70) {
			printf("Nombre: %s Semestre: %.2f\n", data[i].nombre, data[i].semestre);
			printf("Promedio alumno: %.2f \n", prom);
		}
		printf("-------------------------------------------------------------------"
			   "-------------------------\n");
	}
}

void mayor(calif cals[], datos data[], int n) {
	
	
	
	float prom = 0, prom_gen = 0;
	
	printf("PROMEDIOS MAYORES AL GENERAL\n");
	printf("---------------------------------------------------------------------"
		   "----------------------\n");
	for (int i = 0; i < n; i++) {
		prom = (cals[i].parcial1 + cals[i].parcial2 + cals[i].proyecto) / 3;
		prom_gen += prom / n;
		if (prom > prom_gen) {
			printf("Nombre: %s   Promedio alumno: %.2f \n", data[i].nombre, prom);
		}
	}
	printf("El promedio grupal fue: %.2f", prom_gen);
	printf("---------------------------------------------------------------------"
		   "-----------------------\n");
}


/*

Se modificaron todos los procesos:
Modificaciones generales:
Los argumentos de los procesos fueron modificados para recibir los arrays de los datos y las calificaciones,
asi como la n

A todos los procesos se les elimino el procedimiento para recibir los datos de los alumnos y sus calificaciones
Pasando esto a la parte del main, para agilizar la ejecucion ya ahorrar la recabacion de informacion


int main();
Se agrego el procedimiento para la recabacion de informacion antes del menu, entonces:
Se piden los datos y calificaciones de los alumnos, se guardan en arrays del tipo struct de datos y calificaciones
Se guarda la n

Estos datos se pasan a cada funcion, cada vez que es llamada

void promedios(calif cals[], datos data[], int n);
Se cambio el nombre de las variables y se agregaron argumentos, para que los nombres concuerden con 
la logica que ya habia sido escrita anteriormente


void ordenar_alf(calif cals[], datos data[], int n);
Se hizo la funcion desde 0
Por medio de strcmp se comparan los caracteres y si la funcion da un 1, entonces, se reordenan los datos y calificaciones
Esto se repetira hasta que el conteo de datos desordenados sea de 0, en ese caso se termina el while con todos los datos ordenados
Y se imprimen todos los datos en el orden alfabetico que ya estan

Se requiere de variables auxiliares para realizar lo descrito anteriormente

void aprobados(calif cals[], datos data[], int n);
Se cambio el nombre de las variables y se agregaron argumentos, para que los nombres concuerden con 
la logica que ya habia sido escrita anteriormente

void mayor(calif cals[], datos data[], int n);
Se cambio el nombre de las variables y se agregaron argumentos, para que los nombres concuerden con 
la logica que ya habia sido escrita anteriormente

*/
