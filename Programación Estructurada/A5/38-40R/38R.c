/*38. E.P. que lea el nombre, el sueldo y el número de hijos de los 20
empleados de la tlapalería “El Sapo Verde”, y que determine e imprima
el nombre de los empleados con salario mayor a $ 1,000.- y que
tengan entre 3 y 7 hijos.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");	
	
//Declaración de variables		
	int empleados, numero_hijos;
	float sueldo;
	char nombre[25];

//Inicio de ciclo for
	for(empleados=1;empleados<=20;empleados++){
		
	   printf("Bienvenido a la tlapalería el Sapo Verde, usted es el empleado #%d en registrar sus datos\n", empleados);
		printf("\n");
		printf("Ingrese su nombre, sueldo y número de hijos que usted tenga\n");
	   printf("Nombre: ");
	   scanf("%s", &nombre[empleados]);
	   
	   do{   //Inicio de do-while para validar la entrada de los datos
	   printf("Sueldo: ");
	   scanf("%f", &sueldo);
	   }while(sueldo<0);
	   
	   do{   //Inicio de do-while para validar la entrada de los datos
	   printf("Número de Hijos: ");
	   scanf("%d", &numero_hijos);			
	   }while(numero_hijos>7);
	   
		printf("\n");  //Comando para salto de línea
		
//Salida de datos			
		if(sueldo>1000 && numero_hijos<=7 && numero_hijos>=3){
			printf(" %s si cumple con los requisitos\n", nombre);
		}
		
	}
	/* Q/A: 
	Desde el inicio de la ejecución presenta ciertos errores en la impresión de las letras con carácteres especiales, de parte de lo que se pide en el ejrcicio
	es correcto. Solo corregiría los errores de redacción anteriormente mencionados.
	Bienvenido a la tlapaler¡a el Sapo Verde, usted es el empleado #1 en registrar sus datos
	
	Ingrese su nombre, sueldo y n£mero de hijos que usted tenga
	Nombre: emilio
	Sueldo: 4000
	N£mero de Hijos: 4
	
	ÿemilio si cumple con los requisitos
	Revisado por: Emilio Campos Daguer*/
	
	return 0;
}
