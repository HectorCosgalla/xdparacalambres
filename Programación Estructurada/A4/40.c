#include <stdio.h>

int main(void) {
	int tienda,mes, cont_tien_may;
	float monto, costo, utilidad, u_total;
	tienda=1;
	cont_tien_may=0;
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
	printf("Fueron %d tiendas que tuvieron una utilidad total mayor a $2,000,000.", cont_tien_may);
	return 0;
}

