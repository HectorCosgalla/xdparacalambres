#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*
I. Se cuenta con una lista con los resultados de 20 matrículas estudiantileses en un concurso internacional de matemáticas. 
Dicha lista contiene la siguiente información de cada estudiante: 
matrícula, nombre de universidad, país de nacimiento, Cal1, Cal2, Cal3 y Cal4. Por otro lado, se puede observar que para cada estudiante se tiene la calificación que obtuvo en 
cada uno de los cuatro problemas de que constaba el concurso. También, se conoce que algunos alumnos participantes en la competencia, son de la UADY. 

E.P. que determine e imprima lo siguiente:

a) Número de alumnos de la UADY que participaron.

b) Número de participantes que sean mexicanos.

c) Nombre del alumno de la UADY que obtuvo la calificación final más alta (sólo es uno). Dicha calificación final, es la suma de las cuatro calificaciones parciales obtenidas 
en los problemas. 

Implementar al menos dos funciones con paso de parámetros por valor, tales  como: ingresarDatos;  calcularCalFinal; verificarNacionalidad; verificarUniversidad;  imprimirResultados.
*/
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
}
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
} 
int main(void) {
	int matricula, naci, uni, cal1, cal2, cal3, cal4,mx,c,part,wady;
	c=0;
	mx=0;
	wady=0;
	for ( int n=1; n<=2;n++){
	printf("Escribe la matrícula del estudiante #%d \n", n );
	scanf("%d", &matricula);
	printf ("Escribe si la nacionalidad del participante #%d es (1) local o (2) extranjera \n",n); 
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
	///////////////////////////////////////////////////////
	
	//////////////////////////////////////////////////////
	if (naci==1){
		mx++;
	}
	////////////////////////////////////////////////////////////
	if (uni==1){
		wady++;
	}
	//////////////////////////////////////////////////////////////////
	c++;
	}
	printf("El número de participantes que participaron fueron: %d \n",c);
	printf("El número de participantes de la UADY fue: %d \n", wady);
	printf("El número de participantes mexicanos fue: %d \n",mx);
	printf("El participante que tuvo mayor calificación fue %d",part);
	
	return 0;
}

