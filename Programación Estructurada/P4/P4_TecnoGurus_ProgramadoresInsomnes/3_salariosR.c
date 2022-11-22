#include <stdio.h>
#include <conio.h>

#define cantidad_empresas 10
int main(){
	
	double suma_salario = 0, salario, promedio;
	int cont_empresa = 1, cont_trabajadores, suma_trabajadores = 0, trabajadores;
	do{
		cont_trabajadores = 1;
		printf("ingrese la cantidad de trabajadores de la empresa %d: ", cont_empresa);
		scanf("%d", &trabajadores);
		
		while(cont_trabajadores<=trabajadores){
			printf("ingrese el salario del trabajador %d: ", cont_trabajadores);
			scanf("%lf", &salario);
			suma_salario = suma_salario + salario;
			cont_trabajadores++;
		}
		
		suma_trabajadores = suma_trabajadores + trabajadores;
		cont_empresa++;
	}
	while(cont_empresa<=cantidad_empresas);
	
	promedio = suma_salario / suma_trabajadores;
	
	printf("El total de trabajadores encuestados es de: %d\n", suma_trabajadores);
	printf("El promedio de los salario es de: %f", promedio);
	
	getch();
	return 0;
}
	/*Q/A:El programa funciona correctamente, pide el numero de trabajadores y el salario de cada uno hasta completar
	las 10 empresas. De igual forma imprime el numero de trabajadores encuestados y el promedio del salario.
	Se probo introduciendo en cada empresa un trabajador con salario 10 y el promedio fue 10, por lo que el 
	programa cumple con su función.
	Revisado por: Reynaldo Couoh*/
