#include <stdio.h>
#include <conio.h>
/*Nombre: Programa para calcular el precio de la orden de hamburguesas
Autor: Programadores Insomnes
Versión: 1.0
Fecha: 01/02/2022
Descripción: Programa que deterina cuanto debe pagar una persona por N hamburguesas y saber el costo final de la compra si se paga con tarjeta*/

int main () {

/* Definimos las variables
	hamburguesa (char)= para saber que tipo de hamburguesa se va a pedir
	nhamburguesa (int)= Para saber del tipo de hamburguesas del mismo tipo que serán llevadas en la orden
	met_pago (int)= Para saber si el pago va a ser en efectivo o se le va a aplicar un cargo extra por pago con tarjeta
	pago= Para saber el total de la compra*/
    char hamburguesa;
    int nhamburguesa, met_pago;
    float pago;
	/*	Aquí pedimos el tipo de hamburguesa a orfdenar */
    printf("\n Tipo de hamburguesa(s=sencilla, d=doble, t=triple): ");
    scanf("%c", &hamburguesa); 
	/* Aquí pedimos el número de hamburguesas*/
    printf("\n Introduzca la cantidad de hamburguesas: ");
    scanf("%d", &nhamburguesa); 
	
	printf("\n Introduzca el metodo de pago (1=tarjeta de credito, 2= efectivo): ");
	scanf("%d", &met_pago);
	/* Inician las sentencias if y else para determinar el costo de la hamburguesas dependiendo la cantidad que se vaya a llevar */
    if (hamburguesa == 's')
    {
        pago = 60*nhamburguesa;
    }        
    else if (hamburguesa == 'd')
    {
        pago = 80*nhamburguesa;
    }       
    else    
    {
        pago = 100*nhamburguesa;
    }   
	/* Inicia de nuevo una sentencia if para poder determinar el método de pago*/
	if(met_pago == 1)
	{
    pago = pago * 1.03;
	}
	/*Se imprime el total de la compra */
    printf("El costo de la hamburguesa es de %.2f:", pago);
	
	getch(); /*Se pausa el programa*/
    return 0;

}
