/*
Nombre: Ejericio 46
Descripcion: E.P. que lea 200 números y que calcule e imprima cuantos son
negativos, cuantos son positivos y cuantos fueron iguales a cero.
Autor: Programadores Insomnes
Version: 1.0
Fecha: 19/02/2022
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*declaracion de variables y los contadores de los numeros positivos, negativos y el cero*/
	int cantpositivo, cantnegativo, cantcero, numero, contador;
	contador=1;
	cantpositivo=0;
	cantnegativo=0;
	cantcero=0;
	
	/*proceso en el que se ingresan los 200 numeros y se determina a cual grupo
	pertenecen*/
	do{
		printf("Ingrese un numero ");
		scanf("%d", &numero);
		if (numero>0){
			++cantpositivo;
		}
		else{
			if (numero<0)
				++cantnegativo;
			else{
				++cantcero;
			}
		}
		++contador;
	} while(contador<=200);
	
	/*salida en el que se imprime cuantos fueron positivos, negativos y cero*/
	printf(" %d numeros fueron positivos", cantpositivo);
	printf(" %d numeros fueron negativos", cantnegativo);
	printf(" %d numeros fueron cero", cantcero);
	return 0;
}

