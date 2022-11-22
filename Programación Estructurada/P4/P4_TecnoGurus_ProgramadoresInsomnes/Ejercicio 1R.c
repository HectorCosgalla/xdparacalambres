#include <stdio.h>
//1. Se desea realizar una encuesta a 45 estudiantes, 
//E.P. que lea el mes nacimiento de cada alumno (usando n�meros del 1 al 12) y determine 
//�cu�ntos nacieron en el primer semestre del a�o y cu�ntos en el segundo semestre?. 
//Adem�s, debe validar que el n�mero introducido, corresponda a un mes; por ejemplo, no se acepta 13 como mes. 
//Si el mes es incorrecto debe solicitarlo nuevamente hasta aplicar 45 encuestas v�lidas. 
//Utilizar while-do, como principal estructura repetitiva.
//Realizado por el equipo: Tecno Gur�s.
int main(int argc, char *argv[]) {
	int mes, cont1, conts1, conts2;
	cont1 = 1;
	conts1 = 0;
	conts2 = 0;
	while (cont1 <= 45) {
		printf("Introduzca el mes de nacimiento del alumno: " "%d\n",cont1);
		scanf("%d",&mes);
		if (mes >0 & mes <=6) {
			printf("El alumno naci� en el primer semestre del a�o\n");
			conts1 = conts1 + 1;
			cont1= cont1 + 1;
		}
		else if (mes > 6 & mes <= 12) {
			printf("El alumno naci en el segundo semestre del a�o\n");
			conts2 = conts2 + 1;
			cont1= cont1 + 1;
		}
		else {
			printf("El mes introducido no es v�lido\n");
		}
	}
	printf("Hay " "%d ",conts1);
	printf("alumnos que nacieron en el primer semestre del a�o\n");
	printf("Hay " "%d ",conts2);
	printf("alumnos que nacieron en el segundo semestre del a�o\n");
	return 0;
}

/* Q/A: El programa no funciona puesto que arroja errores de directorios a la hora de correrlo.
Revisión realizada por: Adiel Elioenai Herrera Herrera y Daniel Sierra Mendez