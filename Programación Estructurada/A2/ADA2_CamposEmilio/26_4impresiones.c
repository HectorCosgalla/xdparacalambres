/* Nombre: Porgrama que realice multiples impresiones
Descripción: E.P. que lea un número real y que lo imprima varias veces en
líneas diferentes, con distintas precisiones. Ejemplo: 4, 4.0, 4.01,
4.o13, 4.0127.
Autor: Emilio Campos Daguer, Versión: 1.0 y fecha: 29/01/2022
*/

#include <conio.h>
#include <stdio.h>
#include <math.h>
int main() {
	/* Se declara la variable como float ya que va a incluir números decimales la impresión*/
	float N;
	/* Se pide el número */
	/*n=número*/
	printf("\n Escribe el número a imprimir ");
	/* Se lee el número */
	scanf("%f",&N);
	
	/* Se escriben los resultados */
	printf("\n\n El número es: %.0f", N);
	printf("\n\n El número es: %.1f", N);
	printf("\n\n El número es: %.2f", N);
	printf("\n\n El número es: %.3f", N);
	printf("\n\n El número es: %.4f", N);
	
	getch();
	return 0;
	
}
