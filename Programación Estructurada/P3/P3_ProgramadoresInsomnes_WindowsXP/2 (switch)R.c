#include <stdio.h>

/*Nombre: Programa para encontrar el descuento de una compra con switch
Autor: Programadores insomnes
Versión:1.0
Descripción: En un supermercado, se realizan descuentos por la compras a partir de unas bolitas de colores: verde 20%, amarilla 25%, negra 30%; la blanca no aplica ningÃºn descuento. 
E.P. que lea el importe de la compra y el color de la bolita, determine e imprima cuanto debe pagar un cliente. */ 

int main(){
    char bolita;
    float compra;
	/* Declaramos las variables:
	bolita (int)= corresponde a la bola seleccionada con el descuento a aplicar
	Compra (float)= Se escribe el monto total de la compra
	*/

    /*ENTRADA
	Aqupi le pedimos al usuario que introduzca el monto de su compra para posteriormente pedirle la bolita que sacó en la rifa para aplicarle un descuento*/
	
    printf("Introduzca el total de la compra.\n");
    scanf("%f", &compra);

    printf("Que bolita de color se va a usar para el descuento? (v = verde, a = amarilla, n = negra, b = blanca)\n");
    scanf(" %c", &bolita);

    /* PROCESO
	Aquí el programa realizará las operaciones necesarias para poder obtener el precio con descuento o no*/
    switch (bolita)
    {
    case 'v':
        compra = compra*0.8;
        break;
    case 'a':
        compra = compra*0.75;
        break;
    case 'n':
        compra = compra*0.7;
        break;
    case 'b':
        printf("No aplica descuento.\n");
    
    default: 
        printf("Hay que ingresar un color permitido.\n");
        break;
    }
    /* SALIDA
	Aquí se imprimirá el total de la compra con o sin descuento*/
    printf("El total de la compra es %.2f", compra);
}
//Q/A: Funciona correctamente, dato de entrada 1000 y fue comprobado devolver el resultado correcto en los casos respectivos, ademas de devolver correctamente el caso default, falta verificacion para datos negativos Revisado por: Jose Damian Gomez Hernandez
