#include<stdio.h>
#include<stdlib.h>
/* EJERCICIO 70
Descripción: E.P que reserve memoria para un arreglo de 10 elementos de tipo
float, rellenarlo con datos que digite el usuario, luego utilizar realloc
para ampliar dicho arreglo a 20 elementos e imprimir el arreglo
resultante.
Version: 1.0
Fecha: 01/04/2022
Autor: HERVE ORDAZ OSORIO
*/
int main(){
	//DEFINIR VARIABLES:
	float *p_arreglo,*p_arreglo2; //apuntadores
	int i; //indice
	p_arreglo = malloc(10*sizeof(float)); //
	
	//PROCESO:
	printf("\t\tINGRESO DE 10 NUMEROS:\n");
	//Se ingresan los primeros 10 numeros en el arreglo:
	for(i=0;i<10;i++){
		printf("Ingrese el elemento #%i del arreglo: ",i+1);
			scanf("%f",&p_arreglo[i]);
	}

printf("\n\t\tEXTENSION A 20 NUMEROS:\n");
    //Se utiliza realloc para extender el arreglo a 20 elementos y se ingresan los 10 numeros restantes:
	p_arreglo2 = realloc(p_arreglo,20*sizeof(float));
	printf("\n");
	
		for(i=10;i<20;i++){
		printf("Ingrese el elemento #%i del arreglo: ",i+1);
		scanf("%f",&p_arreglo2[i]);
	}
	printf("\n\n\n");
	//Impresion del arreglo:
	for(i=0;i<20;i++){
		printf("%.2f\n",p_arreglo2[i]);
	}
	
	return 0;
	
}
/*Q/A: Los datos se piden correctamente, la transición al usar el "malloc" se remarca bien al momento de ejecutar el programa y la impresión se realiza de forma vertical con los 
	datos que ingresamos. Revisado por: Daniel Mendez y Adiel Herrera*/
