#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*
Nombre: Programa que calcula el promedio mayor, estudiantes uady y mexicanos
Descripción:
E.P. que determine e imprima lo siguiente:

a) Número de alumnos de la UADY que participaron.

b) Número de participantes que sean mexicanos.

c) Nombre del alumno de la UADY que obtuvo la calificación final más alta (sólo es uno). Dicha calificación final, es la suma de las cuatro calificaciones parciales obtenidas en los problemas. 
Version: 1.0
Fecha: 08/03/2022
Compilador utilizado: Zinjai
*/
//Prototipos
int naci_part(int naci);
int uni_part(int uni);

int main() {
	setlocale(LC_ALL," ");
	/*marticula= matricula del estudiante, naci= nacionalidad, uni= universidad, cal1= calificación 1, cal2= calificación 2, cal3= calificación 3, cal4= calificación 4
	mx= contador de mexicanos, wady= contador de alumnos uady*/
	int matricula, naci, uni, cal1, cal2, cal3, cal4,mx,c,wady; 
	/*promedio_mayor= promedio mayor*/
	int promedio_mayor = 0; 
	// promedio= promedio
	float promedio;
	//matricula_mayor= matrícula mayor
	int matricula_mayor; 
	c=0;
	mx=0;
	wady=0;
	/*ENTRADA
	Se piden los valores necesarios*/
	for ( int n=1; n<=100;n++){
	printf("Escribe la matrícula del estudiante #%d \n", n );
	scanf("%d", &matricula);
	printf ("Escribe si la nacionalidad del participante #%d es (1) mexicano o (2) extranjera \n",n); 
	scanf("%d", &naci);
	printf("Escribe el tipo de universidad del participante #%d (1) UADY, (2) Nacional, (3) Extranjera \n", n);
	scanf("%d", &uni);
	printf("Escribe la calificación 1 del participante #%d \n", n);
	scanf("%d", &cal1);
	printf("Escribe la calificación 2 del participante #%d \n", n);
	scanf("%d", &cal2);
	printf("Escribe la calificación 3 del participante #%d \n", n);
	scanf("%d", &cal3);
	printf("Escribe la calificación 4 del participante #%d \n", n);
	scanf("%d", &cal4);
	/*PROCESO
	Sacar matricula mayor*/
	promedio = (cal1+cal2+cal3+cal4)/4;
	if (promedio_mayor < promedio){
		promedio_mayor = promedio;
		matricula_mayor = matricula;
	}
	
	// Sumador de alumnos mexicanos
	if (naci==1){
		mx++;
	}
	//Sumador se alumnos uady
	if (uni==1){
		wady++;
	}
	
	c++;
	}
	/* SALIDA
	Se imprime los resultados*/
	printf("El número de participantes que participaron fueron: %d \n",c);
	printf("El número de participantes de la UADY fue: %d \n", wady);
	printf("El número de participantes mexicanos fue: %d \n",mx);
	printf("\n El alumno que tuvo el mayor promedio fue el %d", matricula_mayor);
	
	return 0;
}
//Función para seleccionar la nacionalidad del participante
int naci_part(int naci){
	switch (naci) {
	case 1:{
		break;
	}
	case 2:{
			break;
		}
	default: {
				break;
			}
	}
	return naci;
}
//Función para seleccionar la universidad del participante
int uni_part(int uni){
	switch (uni) {
	case 1:{
		break;
	}
	case 2:{
			break;
		}
	case 3: {
			}
	default: {
		break;
	}
	}
	return uni;
} 
