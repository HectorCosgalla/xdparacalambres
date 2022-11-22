//50. E.P. que lea un vector de 50 elementos y los imprima.
//Autor: Adrian Pérez
//Versión 1.0
//Fecha 18/3/2020
#include <stdio.h>

int main() 
{
	int vector[50],i=0;
	while (i<50){
		vector[i]=i;
		printf(" %d",vector[i]);
		i++;
	}
}
/*Q/A: El programa imprime un arreglo de 50 elements del 0-49 recomendaría agregar la opción de que el usuario pudiera ingresar los valores de estos elementos
pero en sí el programa esta bien, tuve problemas al ejecutar el programa al no especificarse cual era el compilador y tuve que modificar el archivo agregando "int" al main
por lo que igual recomendaria poner esto en los comentarios de arriba
Revisado por: Emilio Campos Daguer*/
