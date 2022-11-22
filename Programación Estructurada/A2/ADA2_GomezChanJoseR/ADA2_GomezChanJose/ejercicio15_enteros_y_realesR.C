/*enteros_y_reales.c*/
/*que lea e imprima cinco números enteros y tres reales*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variable*/
	int num1, num2, num3, num4, num5; /*numeros enteros*/
	float num6, num7, num8; /*numeros reales*/
	/*entrada*/
	printf("ingresa 5 numeros enteros\n");
	scanf("%i %i %i %i %i",&num1,&num2,&num3,&num4,&num5); /*se leen los numeros enteros*/
	printf("ingresa 3 numeros reales\n");
	scanf("%f %f %f",&num6,&num7,&num8); /*se leen los numeros reales*/
	/*salida*/
	printf(" los numeros enteros son %i %i %i %i %i \n", num1, num2, num3, num4, num5); /*se imprimen los numeros enteros*/
	printf(" los numeros reales son %.2f %.2f %.2f ", num6, num7, num8); /*se imprimen los numeros reales*/
	return 0;
	/*Q/A: El programa detecta correctamente la entrada de los datos como corresponde dependiendo del tipo de número, por parte de la salida de datos también es correcta ya que los divide por enteros y reales como pide el ejericicio
	Revisado por Emilio Campos*/
}

