#include <stdio.h>
#include <conio.h>
/*Nombre: Programa que imprime un vector de 50 n�meros
Descripci�n: 50. E.P. que lea un vector de 50 elementos y los imprima.
Versi�n:1.0
Fecha: 18/03/2022
Autor: Emilio Campos
Compilador: Zinjai */
//Prototipo funci�n
void pedir_valor(int i,int arreglo[i]);

int main(void) {
	/*INICIO
	Declaramos las variables
	i= contador. arraglo= arraglo*/
	int i= 0, arreglo[50];
	/*PROCESO
	Iniciamos una estructura while para pedir los 50 n�meros */
	pedir_valor(i,arreglo);
	i=0;//Reiniciamos contador
	//SALIDA
	//Ponemos otro while para imprimir cada n�mero
	while (i<50){
		printf("%d ",arreglo[i]);
		i++;
	}
	getch();
	return 0;
}

//Funci�n 
void pedir_valor(int i,int arreglo[i]){
	while (i<50){
		printf("Dame un valor %d \n",i+1);
		scanf("%d",&arreglo[i]);
		i++;
	}
}
