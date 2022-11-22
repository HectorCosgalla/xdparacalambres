/*38. E.P. que lea el nombre, el sueldo y el número de hijos de los 20 empleados de la tlapalería “El Sapo Verde”, 
y que determine e imprima el nombre de los empleados con salario mayor a $ 1,000.- y que tengan entre 3 y 7 hijos.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
//Declaración de variables		
	int empleados, numero_hijos;
	float sueldo;
	char nombre[25];

//Operaciones del programa	y entradas	
	while(empleados<19){
		empleados++;
		
		printf("Bienvenido a la tlapalería el Sapo Verde, usted es el empleado #%d en registrar sus datos\n", empleados);
		printf("\n");
		printf("Ingrese su nombre, sueldo y número de hijos que usted tenga\n");
		printf("Nombre: ");
		scanf("%s", &nombre[empleados]);
		printf("Sueldo: ");
		scanf("%f", &sueldo);
		printf("Número de Hijos: ");
		scanf("%d", &numero_hijos);
		
		printf("\n");
		
//Salida de datos			
		if(sueldo>1000 && numero_hijos<=7 && numero_hijos>=3){
			printf(" %s si cumple con los requisitos\n", nombre);
		}
		
	}
	/*Al igual que el programa anterior este no corre y en este ni aparece impreso ningún caracter. 
	Tampoco incluye los datos descriptivos del programa como nombre, autor, fecha, version
	Revisado por: Emilio Campos Daguer*/
	return 0;
}
