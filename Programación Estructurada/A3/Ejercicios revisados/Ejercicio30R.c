//30 El domingo de Pascua es el primer domingo después de la primera luna llena posterior al equinoccio de primavera
//@Author Jose Damian Gomez Hernandez
#include <stdio.h>

int main(int argc, char *argv[]) {
	int year,A,B,C,D,E,N,casos;
	printf ("Inserte year: ");
	scanf ("%d", &year);
	//Se solicita ingresar el año
	A=year%19;
	B=year&4;
	C=year%7;
	D = (19 * A + 24) % 30;
	E = (2 * B + 4 * C + 6 * D + 5) % 7;
	N = (22 + D + E);
	//Se realizan las operaciones correspondientes y se procede a evaluar en el if
	if (N<=31){
		casos=1;
	}
	else{
		casos=2;
		N=N-31;
	}
	//Despues de limitar N a mayor o menor se procede a evaluar el switch
	switch (casos){
	case 1:
		printf ("El mes es de Marzo el dia %d", N);
		break;
	case 2:
		printf ("El mes es de Abril el dia %d", N);
		break;
	default:
		printf ("Dato no valido");
	}
	return 0;
	/*Q\A: Recomiendo dar una descripción más detallada de las variables
	En el caso del ejercicio la ejecución es correcta, pero no existe la versión con switch de este.
	Probado con:
		Inserte year: 2022
		El mes es de Abril el dia 21
	Revisado por: Emilio Campos Daguer*/
}
