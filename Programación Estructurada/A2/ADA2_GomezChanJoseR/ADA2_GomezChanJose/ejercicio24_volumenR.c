/*volumen.c*/
/*que determine e imprima el volumen de la tierra. Considerar
que es un esferoide V= 4/3 = PI * a (cuadrada) * b. Dónde: a = radio ecuatorial =
6378.137 kms, b = radio polar = 6356.752 kms.*/
/*jose manuel gomez chan*/
#include <stdio.h>
#include <math.h> /*directivas del preprocesador*/
/*se definen las constantes necesarias para la formula*/
#define PI 3.141592
#define A 6378.137
#define B 6356.752

int main(void) {
	/*declaracion de variable*/
	int b=2;
	float volumen=0; /*el dato del volumen*/
	/*proceso*/
	volumen=4/3*(PI*pow(A,b)*B);
	/*salida*/
	printf(" el volumen de la tierra es %f kms",volumen);
	/*Q/A: La ejecucion del programa NO es correcto
	Resultado programa= 812405293056.000000 kms
	Resultado correcto = 1083207266253.2029 kms
	.Revisado por Emilio Campos*/
	return 0;
}

