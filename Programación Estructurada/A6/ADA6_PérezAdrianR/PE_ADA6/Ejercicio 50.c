//50. E.P. que lea un vector de 50 elementos y los imprima.
//Autor: Adrian Pérez
//Versión 1.0
//Fecha 18/3/2020
#include <stdio.h>

main() 
{
	int vector[50],i=0;
	while (i<50){
		vector[i]=i;
		printf(" %d",vector[i]);
		i++;
	}
}
