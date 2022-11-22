/*constructora.c*/
/* Una Compañía constructora le paga a sus trabajadores por metro
cuadrado de construcción terminada. E.P. que lea el nombre del
trabajador y el total de superficie realizada durante la semana. Se
pide imprimir el nombre y su salario correspondiente. La tarifa de
pago es de $ 300.- el metro cuadrado*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

#define Tarifa 300 /*el pago por metro realizado*/

int main(void) {
	/*declaracion de variable*/
	char nombre[20]; /*el nombre del trabajador*/
	int trabajo, sueldo=0; /*la cantidad de superficie cubierta*/
	/*entrada*/
	printf("ingresa el nombre del trabajador\n");
	scanf("%s",nombre); /*se lee el nombre del trabajador*/
	printf("ingresa la cantidad de superficie cubierta por el trabajador\n");
	scanf("%i",&trabajo); /*se lee el trabajo realizado por el trabajador*/
	/*proceso*/
	sueldo=(trabajo*Tarifa);
	/*salida*/
	printf(" el trabajador %s gano %i",nombre,sueldo);
	/*Q/A: La ejecución del programa es correcto, arroja el resultado correcto solo que no hay la opción de poner decimales
	Probado con
	Nombre Juan
	Superficie: 200
	Resultado: "el trabajador Juan ganó 60000"
	.Revisado por Emilio Campos*/
	return 0;
}

