#include <stdio.h>
#include <conio.h>
/*
Nombre: Calificaciones
Descripcion: Programa que lea las calificaciones finales de 50 alumnos que cursan
Programación Estructurada y que determine e imprima cuantos tienen
calificación mayor al promedio de grupo.
Autor: Programadores Insomnes 
Version: 1.0
Fecha: 18/02/2022
*/

int main(void) {
	/*Declaracion e inicializacion de variables*/
	int a, cont_alum=1, alum_calif_may=0;
	/*a: variable para validar los datos de entrada, cont_alum: contador para el numero de alumnos
	alum_calif_may: contador de alumnos con calificaciones mayores al promedio del grupo.*/
	float calif, prom_grup, sum_calif=0.0;
	/*calif: calificacion final de cada alumno, prom_grup: promedio del grupo, 
	sum_calif: sumador de las calificaciones de los alumnos.*/
	
	/*Entrada*/
	printf("\n Para determinar el promedio del grupo:");
	
	/*Proceso*/
	do{
		do{
			/*Entrada*/
			printf("\n Introduzca la calificacion final del alumno numero %d: ", cont_alum);
			scanf("%f",&calif);//Se lee la calificacion de un alumno
			if(calif < 0)//Se valida si el dato de entrada es menor a 0.
			{
				/*Salida*/
				printf("\n Introduzca una calificacion valida. \n");//Se imprime en caso de que el dato de entrada sea menor a 0
				a=0;
			}
			else
			{
				a=1;
			}
		} while(a==0);
		
		sum_calif += calif;//Sumador de las calificaciones finales de los 50 alumnos 
		
		cont_alum++;
		
	} while(cont_alum<=50);
		
	prom_grup = sum_calif/50;//Se calcula el promedio del grupo
	
	/*Entrada*/
	printf("\n Para determinar a los alumnos que tienen calificación mayor al promedio de grupo:");
	
	cont_alum=1;//Se reinicia el contador de alumnos
	
	do{
		do{
			/*Entrada*/
			printf("\n Introduzca la calificacion final del alumno numero %d: ", cont_alum);
			scanf("%f",&calif);//Se lee la calificacion de un alumno
			if(calif < 0)//Se valida si el dato de entrada es menor a 0.
			{
				/*Salida*/
				printf("\n Introduzca una calificacion valida. \n");//Se imprime en caso de que el dato de entrada sea menor a 0
				a=0;
			}
			else
			{
				a=1;
			}
		} while(a==0);
		
		/*Se determina la cantidad de alumnos que tienen calificación mayor al promedio de grupo*/
		if(calif > prom_grup)//Se compara si la calificacion de un alumno es mayor a promedio del grupo.
		{
			alum_calif_may++;//Se aumenta en 1 el contador de alumnos con calificaciones mayores al promedio del grupo
		}
		
		cont_alum++;
	} while(cont_alum<=50);
	
	/*Salida*/
	/*Se imprime cuantos alumnos tienen calificación mayor al promedio de grupo.*/
	printf("\n Hay %d alumnos, que cursan programacion Estructurada, que tienen calificación mayor al promedio de grupo.", alum_calif_may);
	
	getch();//Se pausa el programa
	
	return 0;
}

