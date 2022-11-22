/*Nombre: Ejericio 45
	Descripcion: E.P. que lea la clave de empleado, la antigüedad y sueldo de cada uno
de los 100 empleados y que calcule e imprima, la cantidad que le
corresponde a cada uno. Además, determinar e imprimir el monto total
de dicha antigüedad para la empresa.
Autor: Programadores Insomnes
	Version: 1.0
	Fecha: 19/02/2022*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int clave, antiguedad, empleados;
	float sueldo, montototal, incentivo;
	empleados=1;
	incentivo=0;
	
	/*entrada de datos y proceso, en este caso se leen la clave, años y sueldo
	para calcular el monto del incentivo e imprimirlo*/
	do{
		printf("Empleado %d ingrese su clave: ", empleados);
		scanf("%d", &clave);
		printf("Ingrese cuantos años lleva en la empresa: ");
		scanf("%d", &antiguedad);
		printf("Ingrese su sueldo: ");
		scanf("%f", &sueldo);
		
		
		if (antiguedad>=1 && antiguedad<=3){
			incentivo=sueldo*0.01;
			printf("Empleado con clave %d, tu incentivo es de %f\n", clave, incentivo);
		}
		else{
			if (antiguedad>=4 && antiguedad<=6){
				incentivo=sueldo*0.03;
				printf("Empleado con clave %d, tu incentivo es de %f\n", clave, incentivo);
			}
			else{
				if (antiguedad>=7 && antiguedad<=9){
					incentivo=sueldo*0.05;
					printf("Empleado con clave %d, tu incentivo es de %f\n", clave, incentivo);
				}
				else{
					if (antiguedad>=10 && antiguedad<=15){
						incentivo=sueldo*0.07;
						printf("Empleado con clave %d, tu incentivo es de %f\n", clave, incentivo);
					}
				}
			}
		}
		montototal=montototal+incentivo;
		++empleados;
	} while(empleados<=100);
	
	/*finalmente se imprime cuanto le costara a la empresa todos los incentivos*/
	printf("El monto total por incentivos de antigüedad a pagar por la empresa es de: %f ", montototal);
	return 0;
}

