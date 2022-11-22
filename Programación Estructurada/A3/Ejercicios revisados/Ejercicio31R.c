// E.P. que lea el nombre, la edad y el sueldo de una persona y que determine si cumple o no con los siguientes requisitos: Que sea mayor de 35 años y su salario este comprendido entre $ 3,000.- y $ 5,000.-.
//@Author Jose Damian Gomez Hernandez
#include <stdio.h>

int main(int argc, char *argv[]) {
	int edad,caso1,caso2;
	float sueldo;
	char nombre[20];
	printf ("Inserte Nombre: ");
	scanf ("%s",&nombre	);
	printf ("Inserte Edad: ");
	scanf ("%d",&edad);
	printf ("Inserte Sueldo: ");
	scanf ("%f",&sueldo);
	//Se solicita Nombre, edad y sueldo y se procede a evaluar su edad para comprobar mayoria de edad a 35
	if (edad>35){
		caso1=1;
	}
	//se procede a evaluar su sueldo
	if (sueldo>=3000 && sueldo<=5000){
		caso2=1;
	}
	// se procede a evaluar los casos
	switch (caso1){
	case 1:
		printf ("Es mayor de 35 años \n");
		break;
	default:
		printf ("No es mayor de 35 años \n");
	}
	switch (caso2){
	case 1:
		printf ("Salario entre $3000 y $5000 \n");
		break;
	default:
		printf ("Salario fuera de rango de $3000 y $5000 \n");
	/*Q\A: Recomiendo dar una descripción más detallada de las variables
	En el caso del ejercicio la ejecución es correcta y arroja la impresión correcta, pero no existe la versión con if/else de este.
	Probado con:
		Inserte Nombre: EMILIO
		Inserte Edad: 24
		Inserte Sueldo: 4700
		No es mayor de 35 años
		Salario entre $3000 y $5000
		
		
	Revisado por: Emilio Campos Daguer*/
	}
}
