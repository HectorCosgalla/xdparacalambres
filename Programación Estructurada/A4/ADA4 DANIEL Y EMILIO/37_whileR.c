#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
//Declaración de variables	
	float numero; 
	int contador_num, contador_num_positivos=0;

//Operaciones del programa	y entradas
	while(contador_num<100){
		contador_num++;
		
		printf("Ingrese el numero #%d: ", contador_num);
		scanf("%d", &numero);
		
		if(numero>0){
			contador_num_positivos=contador_num_positivos+1;
		}

	}
	
	printf("\n");

//Salida de datos	
	printf("En total hay %d numeros positivos ", contador_num_positivos);
	
	return 0;
	/*El programa no se ejecuta correctamente, no deja ingresar los datos que son requeridos para realizar las operaciones que nos imprimiran el total de números positivos
	"En total hay 0 numeros positivos" es lo único que aparece. Sumado a esto la variable contador_num no esta declarada como entero y su scanf respectivo lo quiere leer como entero
	Tampoco incluye los datos descriptivos del programa como nombre, autor, fecha, version.
	Revisado por: Emilio Campos*/
}
	
