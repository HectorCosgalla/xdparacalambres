#include <stdio.h>
#include <conio.h>
/*Nombre: Hamburguess
Autor: Programadores Insomnes
Versi�n: 1.0
Fecha: 04/02/2022
Descripci�n: Programa que determina cuanto debe pagar una persona por N hamburguesas*/

int main () {
	/*Definimos las variables
	hamburguesa (char)= para saber que tipo de hamburguesa se va a pedir
	nhamburguesa (int)= Para saber del tipo de hamburguesas del mismo tipo que ser�n llevadas en la orden
	met_pago (int)= Para saber si el pago va a ser en efectivo o se le va a aplicar un cargo extra por pago con tarjeta
	pago= Para saber el total de la compra*/
    char hamburguesa;
    int nhamburguesa, met_pago;
    float pago;
	/*	Aqu� pedimos el tipo de hamburguesa a orfdenar */
    printf("\n Tipo de hamburguesa(s=sencilla, d=doble, t=triple): ");
    scanf("%c", &hamburguesa); 
	/* Aqu� pedimos el n�mero de hamburguesas*/
    printf("\n Introduzcs la cantidad de hamburguesas: ");
    scanf("%d", &nhamburguesa); 
	/* Aqui pedimos el metodo de pago, efectivo o tarjeta*/
	printf("\n Introduzca el metodo de pago (1=tarjeta de credito, 2= efectivo): ");
	scanf("%d", &met_pago);
	/* Inician las sentencias switch para determinar el costo de la hamburguesas dependiendo la cantidad que se vaya a llevar */
    switch (hamburguesa)
    {
	case 's':
        pago = 60*nhamburguesa;
		break;
            
    case 'd':
        pago = 80*nhamburguesa;
		break;
    case 't':
        pago = 100*nhamburguesa;
	default:
		printf("\n No existe este tipo de hamburguesa");
	}
	/* Inicia de nuevo una sentencia switch para poder determinar el m�todo de pago*/
	switch(met_pago)
	{
	case 1: 
		pago = pago * 1.03;
		break;
	case 2:
		pago=pago;
		break;
	default:
		printf("\n Metodo de pago Invalido");
	}
	/*SALIDA
	Aqu� se imprimir� el total de la compra*/
    printf("\n El costo de la hamburguesa es de %.2f:", pago);
	
	getch();//Se pausa el programa
	

    return 0;

}
