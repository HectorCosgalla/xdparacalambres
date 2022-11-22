/*Nombre del Programa: Programa para calcular al triángulo mayor Descripción: E.D.F. que lea la base y la altura de tres triángulos rectángulos
diferentes y que calcule e imprima, cual es el área del triángulo mayor.
, Autor: Emilio Campos Daguer, Versión: 1.0*/
#include <stdio.h>
int main() {
	/*Se declaran las variables como float
	bn=Base del triángulo número n
	hn=Altura deltriángulo n
	mayor= número mayor*/
	float b1, h1, a1, b2, h2, a2, b3, h3,a3, mayor;
	/*ENTRADA
	Se le piden los datos de los triángulos al usuario*/
	printf( "Escribe la base del primer triángulo respectivamente \n");
	scanf("%f", &b1);
	printf( "Escribe la altura del primer triángulo respectivamente \n");
	scanf("%f", &h1);
	printf( "Escribe la base del segundo triángulo respectivamente \n");
	scanf("%f", &b2);
	printf( "Escribe la altura del segundo triángulo respectivamente \n");
	scanf("%f", &h2);
	printf( "Escribe la base del tercer triángulo respectivamente \n");
	scanf("%f", &b3);
	printf( "Escribe la altura del tercer triángulo respectivamente \n");
	scanf("%f", &h3);
	a1= (b1*h1)/2;
	a2= (b2*h2)/2;
	a3= (b3*h3)/2;
	/*PROCESO y SALIDA
	Se utiliza un if/else para saber cual es el número mayor e imprimir el resultado*/
	if (a1>a2){
		mayor=a1;
		if(a3>a1){
			mayor=a3;
			printf("el mayor es el numero 1");
		}
		}
		
	else{
			mayor=a2;
			printf("el mayor es el dos");
			if(a3>a2){
				mayor=a3;
				printf("el triangulo mayor es el numero 3");
		}
	}
	printf("\n%f",mayor);
	return 0;
}
