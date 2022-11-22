/* Nombre: Programa del promedio final 
Descripción: E.P. que determine e imprima la calificación final de un alumno del
curso “Programación Estructurada”. El desglose de dicha evaluación
está en escala 100 y tiene los siguientes porcentajes:
40%, dos exámenes parciales.
30%, tareas y trabajos.
20%, proyecto final.
10%, participación en clase.
Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>
#include <math.h>
int main() {
	/* Se declara la variable como */
	float p1,p2,t,pf,part,parcial,prom;
	/* Se piden las calificaciones de las variables correspondientes*/
	/* p1=examen 1, p2= examen 2, t= tareas y trabajos, pf=proyecto final, part= participaciones
	parcial=promedio examenes, prom=promedio*/
	printf("\n Escribe la calificación del primer examen parcial en base a 100: ");
	scanf("%f",&p1);
	printf("\n Escribe la calificación del segundo examen parcial en base a 100: ");
	scanf("%f",&p2);
	printf("\n Escribe la calificación de las tareas y trabajos en base a 100: ");
	scanf("%f",&t);
	printf("\n Escribe la calificación del proyecto final en base a 100: ");
	scanf("%f",&pf);
	printf("\n Escribe la calificación del las participaciones en clase en base a 100: ");
	scanf("%f",&part);
	/*Se realizan las opeeraciones correspondientes para obtener el promedio*/
	parcial= (p1+p2)/2;
	prom= (parcial*0.40)+(t*0.30)+(pf*0.20)+(part*0.10);
	/*Se escriben los reesultados*/
	printf("\n\n El promedio final es: %.2f", prom);
	
	getch();
	return 0;
	
}


