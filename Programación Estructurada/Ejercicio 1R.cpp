#include <stdio.h> 
/* EJERCICIO 1 PRACTICA DE LABORATORIO
Descripción: E.P que tenga 4 vectores donde se ingresen en cada uno el nombre, peso, altura y edad de N alumnos.
Version: 1.0
Fecha: 29/03/2022
Autor: WindowsXP -GOMEZ HERNANDEZ JOSE DAMIAN
-HERVE ORDAZ OSORIO
-ROSADO TREJO ANDRIK YAHIR
*/
int main() {
	//DEFINIR VARIABLES:
	int n,n2=0; //Variables donde se almacenan el numero de alumnos. n2 es el numero de alumnos con edad mayor al promedio.
	float sumatoria=0,sumatoria2=0,sumatoria3=0, sumatoria4=0; //sumas totales de edad,altura y peso.
	int i; //indice
	float promedio1,promedio2,promedio3,promedio4; //variables donde se almacenan los promedios de edad, edad de los alumnos filtrados,peso y altura.
	
	
	printf("Ingrese el numero de personas del grupo: ");
	scanf("%i",&n); //Entrada que define el numero de alumnos y el tamaño de los 4 vectores
	
	char vector1[100][n];
	float vector2[n];
	float vector3[n];
	float vector4[n]; //Vector1: NOMBRES // vector2: PESO //vector3: ALTURA //vector4: EDAD
	
	for (i=0;i<n;i++){
		printf("\nIngrese el nombre del alumno #%i: ",i+1);
		scanf("%s",vector1[i]);
		printf("\nIngrese el peso del alumno %s (En kilogramos): ",vector1[i]);
		scanf("%f",&vector2[i]);
		printf("\nIngrese la estatura del alumno %s(En centimetros): ",vector1[i]);
		scanf("%f",&vector3[i]);
		printf("\nIngrese la edad del alumno %s: ",vector1[i]);
		scanf("%f",&vector4[i]);
		sumatoria=sumatoria+vector4[i];
	}
	
	promedio1=sumatoria/n; //promedio de edades de todos los alumnos
	
	printf("\n\n");
	printf("\t\tREPORTE DE PERSONAL");
	printf("\nNOMBRE           PESO        ESTATURA     EDAD");
	printf("\n--------------------------------------------------------------------");
	for (i=0;i<n;i++){
		if (vector4[i]>promedio1){ //Con este IF se permite la impresion de datos de los alumnos unicamente con edades mayores al promedio 
			n2++; //n2 empieza como 0 y aumenta dependiento del numero de alumnos que superan la edad promedio. Finalmente es utilizado para calcular los nuevos promedios
			printf("\n%s           %.2f            %.2f       %.2f    ",vector1[i],vector2[i],vector3[i],vector4[i]);
			sumatoria2=sumatoria2+vector2[i];
			sumatoria3=sumatoria3+vector3[i];
			sumatoria4=sumatoria4+vector4[i];	//Sumatorias de peso,altura y edades para calcular el promedio		
		}
		
	}
	promedio2=sumatoria2/n2;
	promedio3=sumatoria3/n2;
	promedio4=sumatoria4/n2; //Calculo de los promedios de peso, altura y edades de los alumnos cuyas edades superan el promedio
	printf("\n--------------------------------------------------------------------");
	printf("\nPROMEDIOS       %.2f            %.2f       %.2f",promedio2,promedio3,promedio4); /*Impresion de los promedios de los alumnos 
	superan el promedio*/
	
	
	
	
	
	
	
	
	
	return 0;
}

/*Q/A: El programa me presento problemas al ejecutarse en mi equipo recomendaría especificar que compilador fue utilizado y guardarlo con la extensión correspondiente 
(se guardo con ".cpp" , fuera de esto la ejecución, lectura e UI son bastante acertadas a lo que solicita el problema así como la delimitación de los datos impresos 
de usuarios con la edad mayor al promedio
Revisado por: Emilio Campos Daguer*/
