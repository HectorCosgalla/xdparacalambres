/*Nombre: Programa que imprima las utilidades anuales
Descripción: Una cadena de 5 tiendas determina para cada una, al final del
mes los montos de sus ventas y costos. E.P. que determine e
imprima cuántas tiendas obtuvieron una utilidad mayor a los
$ 2,000,000.- al final del año.
Autor: Programadores Insomnes
Versión: 1.0*/
#include <stdio.h>
int main() {
	int i,mes;
	float monto, costo, utilidad, u_total;
	float utilidad1=1, utilidad2=1, utilidad3=1, utilidad4=1, utilidad5=1, utilidad6=1,
	utilidad7=1, utilidad8=1, utilidad9=1,utilidad10=1, utilidad11=1, utilidad12=1;
	i=1;
	mes=1;
	printf("Bienvenido al programa de las utilidades totales anuales de las tiendas \n");
	while (i<=5){
	printf("Escribe los montos totales de ventas de la tienda %d en el mes %d \n",i, mes);
	scanf("%f", &monto);
	printf("Escribe los costos totales de la tienda %d en el mes %d \n",i, mes);
	scanf("%f", &costo);
	
	while (mes <=12){
		utilidad=monto-costo;
		printf("Las utilidades del mes %d son: $%f \n",mes, utilidad);
		if (mes==1){
			utilidad=utilidad1;}
			if (mes==2){
				utilidad=utilidad2;}
				if(mes==3){
					utilidad=utilidad3;}
					if (mes==4){
						utilidad=utilidad4;}
						if (mes==5){
							utilidad=utilidad5;}
							if (mes==6){
								utilidad=utilidad6;}
								if (mes==7){
									utilidad7=utilidad7;}
									if(mes==8){
										utilidad=utilidad8;}
										if (mes==9){
											utilidad=utilidad9;}
											if(mes==10){
												utilidad=utilidad10;}
												if (mes==11){
													utilidad=utilidad11;}
												if(mes==12){
													utilidad=utilidad12;
												}
		mes++;
		}
	u_total=utilidad1+utilidad2+utilidad3+utilidad4+utilidad5+utilidad6+utilidad7+utilidad8+utilidad9+utilidad10+utilidad11+utilidad12;
	printf("Las utilidades totales del año de la tienda %d son: %f \n",i ,u_total);
	i++;
	}
	return 0;
}

