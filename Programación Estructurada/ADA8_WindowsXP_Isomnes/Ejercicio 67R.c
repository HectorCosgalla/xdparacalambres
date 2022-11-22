/*Programa: 
Autor: Windows XP - GOMEZ HERNANDEZ JOSE DAMIAN
					-HERVE ORDAZ OSORIO
					-ROSADO TREJO ANDRIK YAHIR
Version: 1.0
01/04/2022
Descripcion: E.P. que lea un arreglo de estructuras los datos de N empleados
de una empresa (clave (numérica), nombre, edad, salario (real), sexo
(numérica) y que determine e imprima los datos de aquellos
empleados cuyo salario es mayor al salario de grupo y su edad menor
de 40 años.*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//DEFINIR VARIABLES:
	
	int n; 
	int *clave; 
	int	*edad; 
	int	*sexo;	//Se define el apuntador
	char *nombre;	//Se define el apuntador
	float *salario; //Se define el apuntador
	float sumaSalario=0, sGrupal=0;
	
	//PROCESO:
	printf ("Ingrese el numero de empleados de la empresa: "); //Entrada de los elementos del arreglo
	scanf ("%d",&n);
	clave = (int*) calloc (n,sizeof(int)); //Se llama calloc para reservar memoria dinamica
	edad = (int*) calloc (n,sizeof(int)); //Se llama calloc para reservar memoria dinamica
	sexo = (int*) calloc (n,sizeof(int)); //Se llama calloc para reservar memoria dinamica
	salario = (float*) calloc (n,sizeof(float)); //Se llama calloc para reservar memoria dinamica
	nombre = (char*) calloc (n,sizeof(char)); //Se llama calloc para reservar memoria dinamica
	
	system("cls");	//SIRVE PARA LIMPIAR LA PANTALLA DE DATOS QUE YA NO SON UTILES
	
	if (clave==NULL){
		exit (1);	
	}
	
	for (int i=0; i<n; i++) //Se utiliza FOR para llenar los elementos del arreglo
	{
		printf ("Ingrese la clave del empleado #% d (6 digitos): ", i + 1);
		scanf ("%d",&clave[i]);
	}
	
	system("cls");	//SIRVE PARA LIMPIAR LA PANTALLA DE DATOS QUE YA NO SON UTILES
	
	if (nombre==NULL){
		exit (1);	
	}
	
	for (int i=0; i<n; i++) //Se utiliza FOR para llenar los elementos del arreglo
	{
		printf ("Ingrese el nombre del empleado #% d: ", i + 1);
		scanf ("%s",&nombre[i]);
	}
	
	system("cls");	//SIRVE PARA LIMPIAR LA PANTALLA DE DATOS QUE YA NO SON UTILES
	
	if (edad==NULL){
		exit (1);	
	}
	
	for (int i=0; i<n; i++) //Se utiliza FOR para llenar los elementos del arreglo
	{
		printf ("Ingrese la edad del empleado #% d: ", i + 1);
		scanf ("%d",&edad[i]);
	}
	
	system("cls");	//SIRVE PARA LIMPIAR LA PANTALLA DE DATOS QUE YA NO SON UTILES
	
	if (salario==NULL){
		exit (1);	
	}
	
	for (int i=0; i<n; i++) //Se utiliza FOR para llenar los elementos del arreglo
	{
		printf ("Ingrese el salario del empleado #% d: ", i + 1);
		scanf ("%f",&salario[i]);
		
		sumaSalario = sumaSalario + salario[i];
	}
	
	sGrupal = sumaSalario/n;
	
	system("cls");	//SIRVE PARA LIMPIAR LA PANTALLA DE DATOS QUE YA NO SON UTILES
	
	if (sexo==NULL){
		exit (1);	
	}
	
	for (int i=0; i<n; i++) //Se utiliza FOR para llenar los elementos del arreglo
	{
		
		printf ("Ingrese la el sexo del empleado #% d (1->M o 2->F): ", i + 1);
		scanf ("%d",&sexo[i]);
	}
	
	system("cls");	//SIRVE PARA LIMPIAR LA PANTALLA DE DATOS QUE YA NO SON UTILES
	
	printf ("LISTA FINAL\n");
	for (int i=0; i<n; i++) {
		if(salario[i]>sGrupal && edad[i]>40){
			printf("%d // ", clave[i]); printf("%c // ", nombre[i]); printf("%d // ", edad[i]); printf("%.2f // ", salario[i]); printf("%d\n", sexo[i]);//SALIDA: Se imprimen los elementos del arreglo
		}
	}
	printf("\n\n");
	
	free (clave); //Se libera el espacio asignado por calloc
	free (nombre);	//Se libera el espacio asignado por calloc
	free (edad); //Se libera el espacio asignado por calloc
	free (salario); //Se libera el espacio asignado por calloc
	free (sexo); //Se libera el espacio asignado por calloc
	
	system("pause");
	
	return 0;
}
/*Q/A: Me parece bastante bien realizada la interfaz del programa, solo que el error en este programa es que la impresión de los resultados no aparece ni intentando con diferentes 
valores dentro de lo que pide el programa en la lista final. Revisado por: Emilio Campos Daguer*/
