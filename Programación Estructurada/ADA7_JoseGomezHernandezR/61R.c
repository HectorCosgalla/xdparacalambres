/* 

61. E.P. que lea las tres calificaciones parciales del semestre de cada
uno de los 50 alumnos y los almacene en una matriz. Deberá imprimir
la posición de los alumnos cuyo promedio final sea mayor al promedio
de grupo.

Fecha: 26/03/2022 
Autor: Jose Damian Gomez Hernandez
*/
//Se incluyen las librerias a usar
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Se declaran las variables a usar
	int f=50,c=3,i,y;
	float promeido=0;
	int matriz[f][c];
	float suma;
	//Se llena la matriz y va sumando el total de calificaciones
	for (i=0;i<f;i++){
		for (y=0;y<c;y++){
			printf("Por favor inserte valor de la matriz en la posicion %d , %d : ",i+1,y+1);
			scanf ("%d",&matriz[i][y]);
			promeido=promeido+matriz[i][y];
		}
	}
	//Se establece el promedio dividiendo las calificaciones entre el total
	promeido=promeido/(f*c);
	//Se recorre la matriz sumando el total de cada fila y evaluando si es mayor al promedio
	for (i=0;i<f;i++){
		suma=0;
		for (y=0;y<c;y++){
			suma=suma+matriz[i][y];
		}
		suma=suma/c;
		//En caso de ser mayor al promedio se mostrara la posicion del alumno
		if (suma>promeido){
			printf("El alumno en la fila %d obtuvo calificaciones mayor al promedio \n",i+1);
		}
	}
	return 0;
}
/*La ejecución del programa como la impresión de los resultados es correcta
Revisado por: Emilio Campos Daguer*/
