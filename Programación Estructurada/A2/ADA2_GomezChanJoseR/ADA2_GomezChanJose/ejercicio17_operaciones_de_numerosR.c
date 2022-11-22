/*operaciones_de_numeros*/
/*que lea tres números reales y que determine e imprima la
suma, resta, multiplicación y división de los mismos*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variables*/
	float num1, num2, num3, suma=0, resta=0, div=0, mult=0;
	/*entrada*/
	printf("ingrese 3 numeros reales\n");
	scanf("%f %f %f",&num1,&num2,&num3); /*se leen los numeros*/
	/*proceso*/
	suma=num1+num2+num3; /*se hace la suma de los numeros reales*/
	resta=num1-num2-num3; /*se hace la resta de los numeros reales*/
	mult=num1*num2*num3; /*se hace la multiplicacion de los numeros reales*/
	div=num1/num2/num3; /*se hace la division de los numeros reales*/
	/*salida*/
	/*se imprimen los resultados*/
	printf("la suma de los 3 numeros es %.2f \n", suma);
	printf("la resta de los 3 numeros es %.2f \n", resta);
	printf("la multiplicación de los 3 numeros es %.2f \n", mult);
	printf("la division de los 3 numeros es %.2f", div);
	/*Q/A: La ejecución del programa es correcto, arroja el resultado correcto con todo y decimales
	n1=3
	n2=4.5
	n3=6.7
	Suma= 14.20 correcto
	Resta -8.20 correcto
	Multi= 90.45 correcto
	Div=  0.10 semejante   
	
	.Revisado por Emilio Campos*/
}
	return 0;
}

