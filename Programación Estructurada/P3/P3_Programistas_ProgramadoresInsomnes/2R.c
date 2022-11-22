/*En un supermercado, se realizan descuentos por la compras a partir de unas bolitas de colores: 
verde 20%, amarilla 25%, negra 30%; la blanca no aplica ningún descuento. E.P. que lea el importe 
de la compra y el color de la bolita, determine e imprima cuanto debe pagar un cliente.*/

#include <conio.h>    // console input output
#include <stdio.h>    // Standard Input/Output
#include <math.h>     //operaciones matematicas


int main()  
{	
	int colorbol;//almacena el color de la bola
	float compra, total;//el total de la compra antes del descuento, el total despues del descuento
	
	//Entrada
	printf("%cFelicidades! Participe para un descuento\n",173);
	printf("Porfavor introduzca el total de su compra:\n");
	scanf("%f",&compra);
	printf("\nSeleccione el color de la bolita que obtuvo:\n1. Verde\n2. Amarilla\n3. Negra\n4. Blanca\n");
	scanf("%d",&colorbol);
	
	//Proceso
	switch(colorbol)
	{
	case 1: //la bola es verde
		total=compra-(compra*0.2);
		printf("El color de su bolita es Verde\n%cFelicidades!Tiene el 20%c de descuento\n",173,37);
	break;
	case 2: //la bola es amarilla
		total=compra-(compra*0.25);
		printf("El color de su bolita es Amarilla\n%cFelicidades!Tiene el 25%c de descuento\n",173,37);
	break;
	case 3: //la bola es negra
		total=compra-(compra*0.3);
		printf("El color de su bolita es Negra\n%cFelicidades!Tiene el 30%c de descuento\n",173,37);
	break;
	case 4: //la bola es blanca
		total=compra;
		printf("El color de su bolita es blanco\nNo tiene descuento\nSiga participando\n");
	break;
	default: 
		total=compra;
		printf("No es un color valido!\n");
	break;
	}
	
	//Salida
	printf("\nEl total de su compra es de $%.2f\nVuelva Pronto",total);
	
	getch(); /* Pausa, lee un carácter por teclado, sin eco por pantalla */
	
	return 0;   // return 0, indica que finalizó correctamente la ejecución	
}

/* Q\A: El programa ejecuta correctamente el proceso de obtener el descuento por bolita, lee correctamente el color de la bolita y el importe de la compra. As’ como obtiene correctamente el precio a pagar. Revisado por Herrera Herrera Adiel Elioenai*/
