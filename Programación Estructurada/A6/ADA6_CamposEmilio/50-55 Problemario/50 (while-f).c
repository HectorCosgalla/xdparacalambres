#include <stdio.h>
#include <conio.h>
/*Nombre: Programa que imprime un vector de 50 números
Descripción: 50. E.P. que lea un vector de 50 elementos y los imprima.
Versión:1.0
Fecha: 18/03/2022
Autor: Emilio Campos
Compilador: Zinjai */
//Prototipo función
void pedir_valor(int i,int arreglo[i]);

int main(void) {
	/*INICIO
	Declaramos las variables
	i= contador. arraglo= arraglo*/
	int i= 0, arreglo[50];
	/*PROCESO
	Iniciamos una estructura while para pedir los 50 números */
	pedir_valor(i,arreglo);
	i=0;//Reiniciamos contador
	//SALIDA
	//Ponemos otro while para imprimir cada número
	while (i<50){
		printf("%d ",arreglo[i]);
		i++;
	}
	getch();
	return 0;
}

//Función 
void pedir_valor(int i,int arreglo[i]){
	while (i<50){
		printf("Dame un valor %d \n",i+1);
		scanf("%d",&arreglo[i]);
		i++;
	}
}
