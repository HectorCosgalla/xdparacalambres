#include <stdio.h>
/*
Nombre:Programa que suma pares y multiplica impares
Descripción: 2. E.P. que lea un vector de 20 elementos que sean enteros y determine
 e imprima la suma de los elementos pares y el producto de los elementos impares.
Autor: Emilio Campos Daguer
Versión:1.0
Fecha: 19/03/2022
Compilador: Zinjai
 */
int main() {
	/*INICIO
	Se declaran las variables y definen las dimensiones de los arreglos
	array= array principal, array_p= array de ekementos pares,array_imp= array de elementos impares
	i= identificador y contador, j= identificador2, k= identificador3, s= suma, multiplicar= multiplicar */
	int array[20], array_p[20], array_imp[20],i,j=0,k=0,s=0,multiplicar=1;
	/*PROCESO
	Se utiliza un ciclo for para pedir los valores del arreglo*/
	for(i=0;i<20;i++) {
		printf("Dame el valor %d del vector : ",i+1);
		scanf(" %d",&array[i]);
		/*Se identifican los pares e impares*/
		if (array[i] % 2 == 0){
			array_p[j] = array[i];j++;}
		else{
			array_imp[k] = array[i];k++;}
	}
	
	/*PROCESO Y SALIDA
	Se suman los pares y se multiplican los impares y se imprimen los resultados correspondientes
	*/
	printf("\nLos pares son:\n");
	for(i=0;i<j;i++){
		printf("%d ",array_p[i]);
		s+=array_p[i];
	}
	printf("\nLa suma de los valores pares es:%d \n",s);
	
	printf("\nLos impares son:\n");
	for(i=0;i<k;i++){
		printf("%d ",array_imp[i]);
		multiplicar=multiplicar*array[i];
	}
	printf("\nLos multiplicación de los valores impares es: %d \n",multiplicar);
	
	
	
	return 0;
}

