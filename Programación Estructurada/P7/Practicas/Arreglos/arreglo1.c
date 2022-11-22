#include <stdio.h>

int main() {
	float calificaciones[5];
	float promedio=0;
	
	printf("Programa que calcula el promedio de 5 calificaciones \n");
	
	for (int i=0; i<5;i++){
			printf("Dame la calificación %d \n",i+1);
			scanf("%f",&calificaciones[i]);
			promedio+=calificaciones[i];
			printf("\n");
			
			
	}
	printf("El promedio de las calificaciones es: %.2f", promedio/5);
	printf("calificaciones %f",calificaciones);
	return 0;
}

