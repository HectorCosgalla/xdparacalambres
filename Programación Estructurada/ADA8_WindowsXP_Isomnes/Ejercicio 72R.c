
/*Ejercicio 72

72. E.P. que cree un archivo de texto (.txt) llamado "Grupo_LIS para
almacenar los datos de los alumnos de Programación Estructurada y
que contenga el siguiente menú de opciones:
1. Crear (nombre, Parcial1, Parcial2, Proyecto, calcular y guardar el
promedio final)
2. Agregar más contactos (nombre, Parcial1, Parcial 2, Proyecto,
calcular y guardar el promedio final).
3. Visualizar toda la información existente en la pantalla.

Version: 1.0
Fecha: 4/04/2022 
Autor: WindowsXP - Jose Damian Gomez Hernandez
*/

//Incluimos las librerias a usar
#include <stdio.h>


	
int main(int argc, char *argv[]) {
	//Primero declaramos variables a usar
	FILE *Grupo;
	char *contenido = NULL;
	int n,menu=0;
	size_t longitud = 0;
	char Nombre[50],pantalla[100];
	float Parcial1,Parcial2,Proyecto,Promedio;
	//Creamos el menu de opciones solicitadas y evaluamos la opcion del usuario por medio del ciclo while
	while (menu<10){
		printf("1-Crear fichero\n");
		printf("2-Agregar contantos\n");
		printf("3-Visualizar informacion en pantalla\n");
		printf("4-Salir\n");
		scanf("%d",&n);
		switch (n){
		case 1:
			//Creamos el fichero en caso de no existir y en caso de existir, se vuelve a crear otro
			Grupo=fopen("Grupo_LIS.txt","w+");
			fprintf(Grupo,"Nombre ");
			fprintf(Grupo,"Parcial 1 ");
			fprintf(Grupo,"Parcial 2	");
			fprintf(Grupo,"Proyecto ");
			fprintf(Grupo,"Promedio	");
			fprintf(Grupo,"\n");
			fclose(Grupo);
			break;
		case 2:
			//Solicitamos la informacion del alumnos y procedemos a llenar con la informacion correspondiente el archivo
			Grupo=fopen("Grupo_LIS.txt","a+");
			printf("Inserte nombre del alumno\n");
			scanf("%s",&Nombre);
			printf("Inserte calificacion del parcial 1 del alumno\n");
			scanf("%f",&Parcial1);
			printf("Inserte calificacion del parcial 2 del alumno\n");
			scanf("%f",&Parcial2);
			printf("Inserte califacion del proyecto del alumno\n");
			scanf("%f",&Proyecto);
			Promedio=(Parcial1+Parcial2+Proyecto)/3;
			fprintf(Grupo,"%s	",Nombre);
			fprintf(Grupo,"%f	",Parcial1);
			fprintf(Grupo,"%f	",Parcial2);
			fprintf(Grupo,"%f	",Proyecto);
			fprintf(Grupo,"%f	",Promedio);
			fprintf(Grupo,"\n");
			fclose(Grupo);
			break;
		case 3:
			//Se procede a imprimir string por string por medio de getline hasta finalizar el archivo
			Grupo=fopen("Grupo_LIS.txt","a+");
			while (getline(&contenido, &longitud, Grupo) != -1){
				printf("%s", contenido);
			}
			fclose(Grupo);	
			break;
		case 4:
			//Se aumenta el valor de la variable menu para finalizar el ciclo while
			menu=100;
			break;
		default:
			//En caso de un elemnto no valido
			printf("Opcion no valida");
		}
	};
	return 0;
}
/*
Q/A: El codigo funciona correctamente, sin embargo, no cuando se intenta poner un Nombre
con apellido, el programa lo toma como 2 personas y no una. Por lo demas, crea bien el archivo .txt.
le escribe correctamente, y se visualiza lo que se encuentra en el archivo de manera correcta.
Por lo tanto, el programa funciona correctamente cuando el dato de entrada es solo un Nombre sin apellidos.
Cabe señalar que no utiliza estructuras. Revisado por: Aaron Graniel.
*/
