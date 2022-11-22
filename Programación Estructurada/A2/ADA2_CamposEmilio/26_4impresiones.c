/* Nombre: Porgrama que realice multiples impresiones
Descripci�n: E.P. que lea un n�mero real y que lo imprima varias veces en
l�neas diferentes, con distintas precisiones. Ejemplo: 4, 4.0, 4.01,
4.o13, 4.0127.
Autor: Emilio Campos Daguer, Versi�n: 1.0 y fecha: 29/01/2022
*/

#include <conio.h>
#include <stdio.h>
#include <math.h>
int main() {
	/* Se declara la variable como float ya que va a incluir n�meros decimales la impresi�n*/
	float N;
	/* Se pide el n�mero */
	/*n=n�mero*/
	printf("\n Escribe el n�mero a imprimir ");
	/* Se lee el n�mero */
	scanf("%f",&N);
	
	/* Se escriben los resultados */
	printf("\n\n El n�mero es: %.0f", N);
	printf("\n\n El n�mero es: %.1f", N);
	printf("\n\n El n�mero es: %.2f", N);
	printf("\n\n El n�mero es: %.3f", N);
	printf("\n\n El n�mero es: %.4f", N);
	
	getch();
	return 0;
	
}
