/*
Nombre: Ejericio 44
Descripcion: Los estudiantes de Ingeniería de Software presentaron un
examen de admisión con 100 preguntas. E.P. que lea la matricula y el
número de respuestas correctas para cada una de las 50 personas
que presentaron y que determine e imprima, para cada uno, su
matrícula y su calificación
Autor: Programadores Insomnes
Version: 1.0
Fecha: 19/02/2022
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*declaracion de variables*/
	int matricula, respuestas, alumnos;
	alumnos=1;
	
	/*entrada y proceso en donde se ingresan las matriculas y el numero de respuestas,
	se evaluan, se asigna una calificacion y se imprime*/
	do{
		printf("Alumno %d ingrese su matricula ", alumnos);
		scanf("%d",&matricula);
		printf("ingrese el numero de respuestas correctas que tuvo en el examen ");
		scanf("%d", &respuestas);
		switch(respuestas>30 && respuestas<=50)
		{
		case 1:
			printf("alumno con matricula %d tu calificacion es 50 \n", matricula);
			break;
		}
		
		switch(respuestas>50 && respuestas<=60)
		{
		case 1:
			printf("alumno con matricula %d tu calificacion es 60 \n", matricula);
			break;
		}
		
		switch(respuestas>60 && respuestas<=65)
		{
		case 1:
			printf("alumno con matricula %d tu calificacion es 70 \n", matricula);
			break;
		}
		
		switch(respuestas>65 && respuestas<=75)
		{
		case 1:
			printf("alumno con matricula %d tu calificacion es 80 \n", matricula);
			break;
		}
		
		switch(respuestas>75 && respuestas<=90)
		{
		case 1:
			printf("alumno con matricula %d tu calificacion es 90 \n", matricula);
			break;
		}
		
		switch(respuestas>90)
		{
		case 1:
			printf("alumno con matricula %d tu calificacion es 100 \n", matricula);
			break;
		}
		
		switch(respuestas<30)
		{
		case 1:
			printf("alumno con matricula %d no tienes calificacion \n", matricula);
			break;
		}
		
		++alumnos;
	} while(alumnos<=50);
	return 0;
}

