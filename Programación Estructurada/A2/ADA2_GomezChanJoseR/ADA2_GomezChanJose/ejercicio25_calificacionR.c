/*calificacion*/
/*que determine e imprima la calificación final de un alumno del
curso “Programación Estructurada”. El desglose de dicha evaluación
está en escala 100 y tiene los siguientes porcentajes:
40%, dos exámenes parciales.
30%, tareas y trabajos.
20%, proyecto final.
10%, participación en clase*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variables*/
	float exam, tarea, proyecto, part, cal;
	/*entrada*/
	printf("ingrese el valor obtenido por ambos examenes en base 100\n");
	scanf("%f",&exam); /*se lee el valor del examen*/
	printf("ngrese el valor obtenido por las tareas y trabajos en base 100\n");
	scanf("%f",&tarea); /*se lee el valor de las tareas*/
	printf("ingrese el valor obtenido por los proyectos en base 100\n");
	scanf("%f",&proyecto); /*se lee el valor de los proyectos*/
	printf("ingrese el valor obtenido por las participaciones en base 100\n");
	scanf("%f",&part); /*se lee el valor de las participaciones*/
	/*proceso*/
	/*se calcula la calificacion final*/
	cal=(exam*.40)+(tarea*.30)+(proyecto*.20)+(part*.10);
	/*salida*/
	/*se imprimen la calificacion*/
	printf("la calificacion final es %.2f", cal);
	/*Q/A: La ejecucion del programa es correcto
	Cada multiplicación y suma correspondiente al proceso se realiza de manera adecuada
	Probado con:
	examenes: 89
	tareas: 75
	proyectos: 70
	participaciones: 97
	Resultado programa= la calificacion final es 81.80 correcto
	.Revisado por Emilio Campos*/
	return 0;
}

