/*Nombre del Programa: Programa para preguntar a�os Descripci�n: 0 E.P. que pregunte al usuario cu�ntos a�os tiene y conteste al
mismo usuario lo siguiente: �Ahora se que tienes (x) a�os, gracias., Autor: Emilio Campos Daguer, Versi�n: 1.0 y fecha: 29/01/2022*/
#include <conio.h>
#include <stdio.h>

int main() {
	/*Se declaran las variables como enteros
	edad= edad de la persona*/
	int edad;
	/*Se pide la edad*/
	printf("\n Escribe tu edad: ");
	scanf("%d",&edad);
	/*Se imprime la respuesta*/
	printf("\n\n Ahora se que tienes %d", edad); printf("\n\n a�os, gracias");
	
	
	getch();
	return 0;
	
}
