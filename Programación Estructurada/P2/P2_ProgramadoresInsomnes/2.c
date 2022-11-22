/*
Nombre:Programa que determine el total de una compra con descuentos o no
Autor: Programadores Insomnes
Versión: 1.0 
Descripción: En un supermercado, se realizan descuentos por la compras a partir de unas bolitas de colores:
 verde 20%, amarilla 25%, negra 30%; la blanca no aplica ningÃºn descuento. E.P. que lea el importe de la compra y el color de la bolita,
 determine e imprima cuanto debe pagar un cliente. */

 #include <stdio.h>

 int main(){
	 /* Se definen las variables
	 compra (float)= Este se utiliza para saber el monto de la compra
	 bola_desc (char)= Con esta se sabrá el porcentaje el cual se le descontará a la compra */
     float compra;
     char bola_desc;
	 /*Aquí se le pide al usuario digitar el total de la compra */
     printf("Introduzca el total de la compra.\n");
     scanf("%f", &compra);
	/* Aquí se le pide al usuario digitar cual será el tipo de descuento que se aplicará a la compra*/
     printf("Que bolita de color se va a usar para el descuento? v = verde, a = amarilla, n = negra, b = blanca\n");
     scanf(" %c", &bola_desc);
	/* Aquí se utiliza la sentencia para realizar las operaciones necesarias para saber el total de la compra*/
     if (bola_desc == 'v')
     {
        compra = compra*0.8;
     }
     else if (bola_desc == 'a')
     {
        compra = compra*0.75;
     }
     else if (bola_desc == 'n')
     {
        compra = compra*0.7;
     }
     else if (bola_desc == 'b')
     {
        printf("No aplica descuento.\n");
     }
     else
        printf("Hay que ingresar un color permitido.\n");
	/* Aquí se imprime el total de la compra con el descuento en caso sea aplicado*/
     printf("El total de la compra es: %.2f", compra);
	
 }
