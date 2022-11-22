#include <stdio.h>

/* 41. E.P. que lea las calificaciones del primer parcial de los N estudiantes de Programación Estructurada y 
que calcule e imprima, el promedio de todo el grupo.*/

int main () {
    
	int N,Calumnos;
	float calif,contador,promedio;
	contador=0;
	Calumnos=1;
	
    //Entrada
	//Proceso
	printf ("Número de alumnos %c: ",163,162);
	scanf ("%i",&N);
	
	while (Calumnos<=N){
	
		printf ("Calificación %c, %i: ",162,Calumnos);
		scanf ("%f",&calif);
		
		if (calif>0 && calif<=100){
			contador=contador+calif;
		}
	Calumnos++;
	}
	
	//Salida
	promedio = contador/N;
	printf ("El promedio es de: %f",162,promedio);
	
	getch (); return 0;
}
