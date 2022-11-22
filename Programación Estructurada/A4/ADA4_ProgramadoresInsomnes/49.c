#include <stdio.h>
#include <conio.h>
/*
Nombre: McDonald's
Descripción: Programa para determinar cuánto debe pagar cada uno de 
los N clientes que llegan al establecimiento. También, al final del día, 
se requiere imprimir el monto total de las ventas y el total de las 
comisiones por tarjeta de crédito.
Autor: Programadores Insomnes
Version: 1.0
Fecha: 14/02/2022
*/

int main(void) {
	/*Declaracion de variables*/
	int cant_ham, tipo, metodo, a, cont_cant_ham, seguir;
	/*cant_ham: cantidad de hamburguesas por cliente, tipo: tipo de hamburguesa(sencilla,doble,triple),
	metodo: metodo de pago de cada cliente, a: variable para validar las entradas, cont_cant_ham: contador de numero de hamburguesa
	seguir: variable que valida si se siguen realizando pedidos.*/
	float pago, comision, suma_comision=0.0, monto_total;
	/*pago: costo del pedido de cada cliente, comision: comision por uso de tarjeta de credito,
	suma_comision: sumador de la comision por uso de tarjeta de credito, monto_total: monto total de las ventas del dia.*/
	
	/*Proceso*/
	do{
		/*Inicializacion de variables*/
		pago = 0.0;
		cont_cant_ham = 1;
			
		do{
		/*Entrada*/
		printf("\n Introduzca la cantidad de hamburguesas que desee comprar: ");
		scanf("%d",&cant_ham);//Se lee la cantidad de hamburguesas 
			if(cant_ham>0)//Se valida que el dato de entrada se un numero positivo
			{
				a = 1;
			}
			else
			{
				/*Salida*/
				printf("\n Introduzca una cantidad de hamburguesas válidas.");//Se imprime en caso que el dato de entrada no sea un positivo
				a = 0;
			}
		} while(a == 0);
		
		do{
			/*Entrada*/
			printf("\n Introduzca el tipo de la hamburguesa %d (1 = sencilla, 2 = doble, 3 = triple): ", cont_cant_ham);
			scanf("%d", &tipo);//Se lee el tipo de hamburguesa
			if(tipo==1 || tipo==2 || tipo==3)//Se valida que el dato de entrada sea 1, 2, o 3
			{
				if(tipo == 1)//se compara si el dato de entrada equivale a 1
				{
					pago += 60;
				}
				else if(tipo == 2)//se compara si el dato de entrada equivale a 2
				{
					pago += 80;
				}
				else//dado que no es 1 ni 2, se da por hecho que es 3
				{
					pago += 100;
				}
				cont_cant_ham++;
			}
			else
			{
				/*Salida*/
				printf("\n Ingrese un valor válido.");//Se imprime en caso de que el dato de entrada sea distinto a 1, 2 o 3.
			}
		} while(cont_cant_ham <= cant_ham);
		
		do{
			/*Entrada*/
			printf("\n Ingrese su método de pago (0 = efectivo, 1 = Tarjeta de credito): ");
			scanf("%d", &metodo);//se lee el metodo de pago
			if(metodo==0 || metodo == 1)//se valida que el dato de entrada sea 0 o 1.
			{
				a = 1;
			}
			else
			{
				/*Salida*/
				printf("\n Introduzca una método de pago válido.");//se imprime en caso de el dato de entrada no sea 0 o 1.
				a = 0;
			}
		} while(a == 0);
		
		if(metodo == 1)//se compara si el dato equivale a 1.
		{
			comision = pago * 0.03;//se calcula la comision del pago por uso de tarjeta de credito 
			pago += comision;
		}
		else
		{
			pago = pago;
		}
		
		suma_comision += comision;//se calcula el total de las comisiones por tarjeta de credito
		monto_total += pago;//se calcula el monto total de ventas
		
		/*Salida*/
		printf("\n Usted debe pagar: $%.3f \n", pago);//se imprime lo que el cliente debe pagar por su pedido
		getch();
		
		do{
			/*Entrada*/
			printf("\n Si se va a seguir comprando hamburguesas ingrese (1) o si ya concluyo el dia ingrese (0): ");
			scanf("%d", &seguir);//Se lee la variable que deternima si el programa sigue o no
			if(seguir==0 || seguir == 1)//se valida que el dato de entrada sea 0 o 1.
			{
				a = 1;
			}
			else
			{
				/*Salida*/
				printf("\n Introduzca (1) si se va a seguir comprando hamburguesas o (0) si ya concluyo el dia.");//se imprime en caso de que el dato de entrada sea diferente de 0 o 1.
				a = 0;
			}
		} while(a == 0);
		
	}while(seguir == 1);
	
	/*Salida*/
	printf("\n El monto total de ventas del día es: $%f", monto_total);//Se imprime el monto total de ventas del dia
	printf("\n El total de las comisiones por tarjeta de crédito del día es: $%f", suma_comision);//se imprime el total de las comisiones por tarjeta de credito del dia.
	getch();
	return 0;
}

