/*Un restaurante ofrece hamburguesas sencillas, dobles y triples, las cuales tienen 
un costo de $60.00, $80.00 y $100.00 respectivamente. La empresa acepta tarjetas de 
cr�dito con un cargo de 3 % sobre la compra. Suponiendo que los clientes adquieren 
s�lo un tipo de hamburguesa, E.D.F. para determinar cu�nto debe pagar una persona por 
N hamburguesas.*/
 
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int hamburgesa, cantidad, siono;
	float totalcompra;
	printf("%cQu%c tipo de hamburgesas va a ordenar? %cSencillas (1), Dobles (2) o Triples(3)?\n",168,130,168);
	scanf("%i", &hamburgesa);
	printf("%cCu%cntas hamburgesas va a ordenar?\n",168,160);
	scanf("%i", &cantidad);
	switch (hamburgesa){
		
	case 1:
		totalcompra = (cantidad * 60.00);
		break;
	case 2:
		totalcompra = (cantidad * 80.00);
		break;
	case 3:
		totalcompra = (cantidad * 100.00);
		break;
	default:
		printf("\nError, intente de nuevo\n");
		break;
		
	}
	printf("%cPagar%c con tarjeta? (1 = Si, 2 = No) \n",168,160);
	scanf("%i", &siono);
	switch (siono){
		
	case 1:
		totalcompra = (totalcompra * 1.03);
		break;
	default :
		totalcompra = totalcompra;
		break;
		
	}
	
	printf("El total a pagar ser%c de $%.2f",160, totalcompra);
	
	/* Q\A: El programa se ejecuta correctamente en el caso de pago de tarjeta
	Prueba 1: 
	�Qu� tipo de hamburgesas va a ordenar? �Sencillas (1), Dobles (2) o Triples(3)?
	1
	�Cu�ntas hamburgesas va a ordenar?
	5
	�Pagar� con tarjeta? (1 = Si, 2 = No)
	1
	El total a pagar ser� de $309.00 (El cual es correcto)
	Operaci�n en si: 60*5= 300*1.03= 309 
	El porgrama se ejecuta correctamente en el caso de no pagar con tarjeta
	Prueba 2:
	�Qu� tipo de hamburgesas va a ordenar? �Sencillas (1), Dobles (2) o Triples(3)?
	3
	�Cu�ntas hamburgesas va a ordenar?
	7
	�Pagar� con tarjeta? (1 = Si, 2 = No)
	2
	El total a pagar ser� de $700.00 (El cual es correcto)
	Operaci�n en si: 100*7= 700 
	El cual arroja un resultado correcto
	Revisado por Campos Daguer Emilio*/
	return 0;
}

