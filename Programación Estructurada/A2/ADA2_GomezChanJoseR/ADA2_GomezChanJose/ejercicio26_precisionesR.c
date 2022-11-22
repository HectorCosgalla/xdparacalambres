/*precisiones*/
/* que lea un número real y que lo imprima varias veces en
líneas diferentes, con distintas precisiones. Ejemplo: 4, 4.0, 4.01,
4.o13, 4.0127*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variable*/
	float num;
	/*entrada*/
	printf("ingrese un numero real\n");
	scanf("%f",&num); /*se lee el numero real*/
	/*salida*/ 
	/*se imprimen los resultados que cambiaran gracias al punto y el numero
	despues del % y antes de la variable*/
	printf("%.1f \n", num);
	printf("%.2f \n", num);
	printf("%.3f \n", num);
	printf("%.4f \n", num);
	printf("%.5f \n", num);
	printf("%.6f \n", num);
	printf("%.7f \n", num);
	printf("%.8f \n", num);
	printf("%.9f", num);
	/*Q/A: La ejecucion del programa es correcto, presenta las diferentes precisiones hasta 9 decimales.
	
	Resultado programa= 
	4
	4.0
	4.00
	4.000
	4.0000
	4.00000
	4.000000
	4.0000000
	4.00000000
	4.000000000
	.Revisado por Emilio Campos*/
	return 0;
}

