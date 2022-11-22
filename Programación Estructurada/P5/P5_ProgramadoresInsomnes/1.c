#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*
Nombre del Programa:
Descripción:Programa que determina e imprime la posición del 
robot después de N movimientos.
Autor: Programadores insomnes (Aaron Graniel) 
Versión: 1.0
fecha: 22/02/2022
*/

int main(int argc, char *argv[]) {

	setlocale(LC_ALL," ");//Permite imprimir acentos
	
	/*Declaración de variables*/
	int x=0, y=0, mov_total, com_num, i;
	
	/*Entrada*/
	printf("\n Introduzca el número de movimientos totales: ");
	scanf("%d", &mov_total);//Se lee la cantidad de movientos que hará el robot
	
	/*Proceso*/
	/*Inicia el ciclo for para determinar los movimientos del robot*/
	for( i=1; i <= mov_total; i++ ){
		
		for(;;){//Ciclo for para validar que el dato númerico
		
			/*Entrada*/
			printf("\n Introduzca el comando númerico: ");
			scanf("%d", &com_num);//Se lee el comando númerico que hará al robot cambiar de posición
			
			if(com_num == 6 || com_num == 4 || com_num == 8 || com_num == 2){//Se compara que el valor sea 6, 8, 4 o 2
				break;//Cuando el valor es 6, 8, 4 o 2, sale del ciclo for(28)
			}
			else
			   {
				printf("\n Introduzca un valor válido. \n");//Se imprime cuando el valor ingresado sea diferente a 6,8,4 y 2.
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
	printf("\n El robot paso de la posición (0,0) a la posición (%d,%d).", x,y);//Se imprime la posición del robot después de los movimientos totales
	
	getch();//Se pausa el programa
	
	return 0;
}

