/*cumple.c*/
/*que pregunte al usuario cuántos años tiene y conteste al
mismo usuario lo siguiente: “Ahora se que tienes (x) años, gracias”.*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variable*/
	int edad; /*es la variable de la edad de tipo entera*/
	/*entrada*/
	printf("¿cuantos años tienes?\n");
	scanf("%i",&edad); /*se lee la edad ingresada por el usuario*/
	/*salida*/
	printf("Ahora se que tienes %i años de edad, gracias!", edad);
	/*Q/A: La ejecución del programa es correcto
	Probado con 12, 50, 90 y 1279 
	.Revisado por Emilio Campos*/
	return 0;
}

