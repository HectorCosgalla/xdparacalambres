/*grados.c*/
/*que lea un valor C que representa una cantidad en grados
centígrados y que lo convierta a grados Fahrenheit (F). F= C * 1.8 +
32*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variable*/
	float c, f; /*los grados centigrados*/
	/*entrada*/
	printf("ingresa los grados centigrados\n");
	scanf("%f",&c); /*se leen los grados centigrados*/
	/*proceso*/
	f=c*1.8+32; /*se usa la formula de conversion*/
	/*salida*/
	printf("los grados centigrados ingresados equivalen a %.3f",f);
	return 0;
	/*Q/A: La ejecución del programa es correcto
	Probado con 27 grados
	Resultado= 80.6 el cual es correcto
	.Revisado por Emilio Campos*/
}

