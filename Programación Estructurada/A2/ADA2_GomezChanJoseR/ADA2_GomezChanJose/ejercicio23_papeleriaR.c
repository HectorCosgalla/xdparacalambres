/*papeleria*/
/*3 Una papelería vende libros a $100, cuadernos a $15.50 y plumas a
$2.35. E.P. que determine e imprima el monto total de una venta,
según el número de artículos vendidos*/
/*jose manuel gomez chan*/
#include <stdio.h> /*directivas del preprocesador*/

int main(void) {
	/*declaracion de variables*/
	int libreta, pluma, libro; /*los productos de la papeleria*/
	float total=0; /*el total de todo lo comprado*/
	/*entrada*/
	printf("¿cuantos libros compro?\n");
	scanf("%i",&libro); /*se lee la cantidad de libros comprados*/
	printf("¿cuantas libretas compro?\n");
	scanf("%i",&libreta); /*se lee la cantidad de libretas compradas*/
	printf("¿cuantas plumas compro?\n");
	scanf("%i",&pluma); /*se lee la cantidad de plumas compradas*/
	/*proceso*/
	total=(libreta*15.50)+(libro*100)+(pluma*2.35);
	/*salida*/
	printf("el total de compra por todo lo comprado es: %.2f",total);
	/*Q/A: La ejecución del programa es correcto, arroja el resultado correcto con todo y decimales
	Libros= 3
	Plumas=2
	Libretas=4
	Resultado= 366.70 correcto
	
	.Revisado por Emilio Campos*/
	return 0;
}

