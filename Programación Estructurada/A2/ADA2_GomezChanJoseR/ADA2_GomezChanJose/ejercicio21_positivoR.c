/*positivo.c*/
/*que lea tres números enteros y si el primero es positivo,
calcular e imprimir el producto de los otros dos; de lo contrario, calcular
la suma*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variable*/
	int num1, num2, num3, producto=0, suma=0; /*numeros enteros y variables*/
	/*entrada*/
	printf("ingresa 3 numeros enteros\n");
	scanf("%i %i %i",&num1,&num2,&num3); /*se leen los numeros enteros*/
	/*proceso*/
	/*se abre un if, donde si el primer numero es verdadero el primer if ocurrira
	, pero si no lo es entonces el segundo pasara*/
	if (num1>0){
		producto=(num2*num3); /*se saca el producto de los otros numeros*/
		/*salida*/
		printf("el primer numero es positivo, por lo que el producto de los otros numeros es %i",producto);
	};
	if (num1<0){
		suma=(num2+num3); /*se saca la suma de los otros numeros*/
		/*salida*/
		printf("el primer numero no es positivo, por lo que la suma de los otros numeros es %i",suma);
		/*Q/A: La ejecución del programa es correcto.
		Probado primero positivo
		n1= 3
		n2= 4
		n3= 5
		R= 20
		La multiplicación de los dos ultimos es correcta 
		Probado primero negativo
		n1=-3
		n2=4
		n3=5
		R=5
		La suma de los dos ultimos es corecta
		.Revisado por Emilio Campos*/
	};
	return 0;
}

