#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*
Nombre del Programa:
Descripci�n:Programa que determina e imprime la posici�n del 
robot despu�s de N movimientos.
Autor: Programadores insomnes (Aaron Graniel) 
Versi�n: 1.0
fecha: 22/02/2022
*/

int main(int argc, char *argv[]) {

	setlocale(LC_ALL," ");//Permite imprimir acentos
	
	/*Declaraci�n de variables*/
	int x=0, y=0, mov_total, com_num, i;
	
	/*Entrada*/
	printf("\n Introduzca el n�mero de movimientos totales: ");
	scanf("%d", &mov_total);//Se lee la cantidad de movientos que har� el robot
	
	/*Proceso*/
	/*Inicia el ciclo for para determinar los movimientos del robot*/
	for( i=1; i <= mov_total; i++ ){
		
		for(;;){//Ciclo for para validar que el dato n�merico
		
			/*Entrada*/
			printf("\n Introduzca el comando n�merico: ");
			scanf("%d", &com_num);//Se lee el comando n�merico que har� al robot cambiar de posici�n
			
			if(com_num == 6 || com_num == 4 || com_num == 8 || com_num == 2){//Se compara que el valor sea 6, 8, 4 o 2
				break;//Cuando el valor es 6, 8, 4 o 2, sale del ciclo for(28)
			}
			else
			   {
				printf("\n Introduzca un valor v�lido. \n");//Se imprime cuando el valor ingresado sea diferente a 6,8,4 y 2.
			}
		}
		/*Determina el movimiento que el robot va a efectuar*/
		if(com_num == 6){
			x++;
		}
		else{
	
			if(com_num == 4){
				x--;
			}
			else{
			
				if(com_num == 8){
					y++;
				}
				else{
					y--;
				}
			}
		}
	}
	
	/*Salida*/
	printf("\n El robot paso de la posici�n (0,0) a la posici�n (%d,%d).", x,y);//Se imprime la posici�n del robot despu�s de los movimientos totales
	
	getch();//Se pausa el programa
	
	return 0;
}

