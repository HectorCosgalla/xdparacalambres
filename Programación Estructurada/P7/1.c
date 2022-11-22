#include <stdio.h>
/*
Nombre: Programa de reporte de personal
Descripción:E.P. que lea cuatro vectores de n elementos: un vector que contenga nombres de personas, un segundo con el peso, un tercero con la estatura
 y un cuarto vector con la edad de dichas personas. Se desea imprimir la información de aquellas personas que cuenten con edad mayor a la edad 
promedio de grupo; también determinar  el peso, la estatura y edad promedio de dichas personas, así como generar el siguiente reporte 
(dicho reporte determinará el promedio del peso, estatura y edad, de aquellás personas que aparecen en el listado):
...
Autor: Programadores Insomnes (Emilio Campos)
Compilador: Zinjai
Versión: 1.0
31/03/2022
*/
int main(int argc, char *argv[]) {
	/*Se declaran las variables
	nombre: cadena de caracteres de los nombres
	peso, estatura y edad: vectores de los datos que tienen por nombre
	n= numero de personas
	promedio_peso,promedio_edad,promedio_estatura= promedio de los valores que llevan por nombre*/
	char nombre[100][100];
	int peso[100],estatura[100],edad[100];
	int n;
	int promedio_peso=0, promedio_edad=0,promedio_estatura=0;
	printf("Dame el número de personas:\n");
	scanf("%d",&n);
	/*INICIO
	Mediante un ciclo for pedimos todos los datos necesarios para llenar el reporte*/
	for(int i=0; i<n; i++){
		printf("Dame el nombre de la persona %d:\n",i+1);
		fflush(stdin);
		gets(nombre[i]);
		printf("Dame el peso de la persona %d:\n",i+1);
		scanf("%d",&peso[i]);
		printf("Dame la estatura de la persona %d:\n",i+1);
		scanf("%d",&estatura[i]);
		fflush(stdin);
		printf("Dame la edad de la persona %d:\n",i+1);
		scanf("%d",&edad[i]);
		
	}
	/*PROCESO
	Con un for se realiza la sumatoria de los vectores y se divide entre el numero de personas*/
	for(int i=0; i<n; i++){
		promedio_peso+=peso[i]/n; 
		promedio_edad+=edad[i]/n;
		promedio_estatura+=estatura[i]/n;
	}
	/*SALIDA
	Mediante otro ciclo for se imprimen los resultados de cada vector*/
	printf("REPORTE DE PERSONAL\n");
	printf("-------------------------------------------------------------------------------------------\n");
	for(int i=0;i<n;i++){
		if(promedio_edad<edad[i]){
			printf("%s   peso: %.2d   estatura: %.2d   edad: %d\n",nombre[i],peso[i],estatura[i],edad[i]);
		}
		else if(promedio_edad>=edad[i]){
			printf("%s   peso: %.2d   estatura: %.2d\n",nombre[i],peso[i],estatura[i]);
		}
		}
	printf("--------------------------------------------------------------------------------------------\n");
	/*Se imprimen los promedios */
	printf("promedios peso: %d   estatura: %d   edad: %d",promedio_peso,promedio_estatura,promedio_edad);
	return 0;
}

