/*triangulo_area*/
/*que lea la base (B) y la altura (H) de un triángulo rectángulo,
determine e imprima su área. A= B x H/2*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variables*/
	float base, altura, area=0; /*las variables del triangulo*/
	/*entrada*/
	printf("ingrese la base del triangulo rectangulo\n");
	scanf("%f",&base); /*se lee el dato de la base*/
	printf("ingrese la altura del triangulo rectangulo\n");
	scanf("%f",&altura); /*se lee el dato de la altura*/
	/*proceso*/
	area=(base*altura)/2; /*se efectua la operacion para sacar el area*/
	/*salida*/
	printf("el area del triangulo rectangulo es %.2f",area);
	return 0;
	/*Q/A: La ejecución del programa es correcto, arroja el resultado correcto con todo y decimales
	Probado con b=2 h=3 a=3
	Probado con b=45.5 y h= 67.9 a=1544.72
	.Revisado por Emilio Campos*/
}

