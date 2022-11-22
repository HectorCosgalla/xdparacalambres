/*mayor.c*/
/* que lea tres números diferentes y que determine e imprima el
mayor*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variable*/
	int num1, num2, num3, mayor=0; /*numeros enteros y la variable mayor*/
	/*entrada*/
	printf("ingresa 3 numeros\n");
	scanf("%i %i %i",&num1,&num2,&num3); /*se leen los numeros*/
	/*proceso*/
	/*se abren 3 if que cada uno determina 3 posibles casos*/
	if (num1>num2 && num1>num3){
		mayor=num1; /*se asigna el valor mayor al numero mayor*/
		/*salida*/
		printf("el numero mayor es el primero %i",mayor);
	};
	if (num2>num1 && num2>num3){
		mayor=num2; /*se asigna el valor mayor al numero mayor*/
		/*salida*/
		printf("el numero mayor es el segundo %i",mayor);
	};
	if (num3>num1 && num3>num2){
		mayor=num3; /*se asigna el valor mayor al numero mayor*/
		/*salida*/
		printf("el numero mayor es el tercero %i",mayor);
	};
	/*Q/A: La ejecución del programa es correcto
	Probado coon:
	7
	1
	2
	Resultado= "el número mayor el el primero 7"
	.Revisado por Emilio Campos*/
	return 0;
}

