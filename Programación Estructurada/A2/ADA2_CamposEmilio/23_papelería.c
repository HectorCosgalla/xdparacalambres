/* Nombre del Programa: Programa para obtener el total de una papeler�a Descripci�n: Una papeler�a vende libros a $100, cuadernos a $15.50 y plumas a
$2.35. E.P. que determine e imprima el monto total de una venta, seg�n el n�mero de art�culos vendidos.
la suma., Autor: Emilio Campos Daguer, Versi�n: 1.0 y fecha: 29/01/2022
*/
#include <conio.h>
#include <stdio.h>
#include <math.h>
int main() {
	/*Se declarran las variables de los productos
	l=libro, c=cuaderno,p= pluma*/
	float l,c,p, total;
	/*Se piden el n�mero de art�culos*/
	printf("\n Escribe el n�mero de plumas a comprar: ");
	scanf("%f",&p);
	printf("\n Escribe el n�mero de cuadermos a comprar: ");
	scanf("%f",&c);
	printf("\n Escribe el n�mero de libros a comprar: ");
	scanf("%f",&l);
	/*Se realizan las operaciones correspondientes*/
	total= (l*100.00)+(c*15.50)+(p*2.35);
	
	/*Se imprime el total de la compra*/
	printf("\n\n El total en pesos de la compra es: %.2f", total);

	getch();
	return 0;
			
}
