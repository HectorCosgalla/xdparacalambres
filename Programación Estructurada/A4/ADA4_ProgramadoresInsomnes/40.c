#include <stdio.h>
/*Programa que imprima la cantidad de utilidades mayores a 2000
Descripción:Una cadena de 5 tiendas determina para cada una, al final del
mes los montos de sus ventas y costos. E.P. que determine e
imprima cuántas tiendas obtuvieron una utilidad mayor a los
$ 2,000,000.- al final del año.
Versión: 1.0
Autor: Programadores Insomnes*/
int main(void) {
	int tienda,mes, cont_tien_may;
	float monto, costo, utilidad, u_total;
	/*
	INICIO
	tienda=contador del numero de tienda
	cont_tien_may: Contador del número de tiendas que su utilidad fue mayor a 2000
	monto: monto total de las ventas
	costo: Costos totales de las vetas
	u_total: Saber si la utlidad es mayor a 2000///*/
	tienda=1;
	cont_tien_may=0;
	/*PROCESO
	Se utilizan estructuras while para ir pidiendo montos y costos mes con mesSe utilizan estruturas if para identificar si la utilidad es mayor a 2M
	y se emplean los respectivos contadores e identificadores para llegar al resultado*/
	while(tienda<=5){
		u_total=0;
		mes=1;
		while(mes<=12){
			printf("Escribe los montos totales de ventas de la tienda %d en el mes %d \n",tienda, mes);
			scanf("%f", &monto);
			printf("Escribe los costos totales de la tienda %d en el mes %d \n",tienda, mes);
			scanf("%f", &costo);
			
			utilidad=monto - costo;
			
			u_total+=utilidad;
			
			mes++;
		}
		if(u_total > 2000000)
		{
			cont_tien_may++;
		}
		tienda++;
	}
	/*SALIDA
	Aparece el número de tiendas que su utilidad fue mayor a 2000*/
	printf("Fueron %d tiendas que tuvieron una utilidad total mayor a $2,000,000.", cont_tien_may);
	return 0;
}

