
#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*Título: Programa que divide en semestres los meses de nacimiento de cada alumno
Descripción: 1. Se desea realizar una encuesta a 45 estudiantes, E.P. que lea el mes nacimiento de cada alumno (usando números del 1 al 12) 
y determine cuantos nacieron en el primer semestre del año y cuantos en el segundo semestre?. 
Ademas, debe validar que el numero introducido, corresponda a un mes; por ejemplo, no se acepta 13 como mes.
Si el mes es incorrecto debe solicitarlo nuevamente hasta aplicar 45 encuestas validas.
Autor: Programadores Insomnes (Emilio Campos Daguer ; Daniel Méndez Sierra)
Versión: 1.0 
Fecha: 22/02/2022*/

int main(){
	int cont_alum, mes, cont_sm1, cont_sm2;
	cont_alum = 1;
	cont_sm1 = 0;
	cont_sm2 = 0;
	// PROCESO con el uso de una estructurafor que funcione a partir de un contador del número de alumnos.
	for (cont_alum=1; cont_alum <= 45; cont_alum++){
		printf("Estudiante #%d, ingresar mes de nacimiento:\n", cont_alum);
		scanf("%d", &mes); // ENTRADA DE VALORES (en que mes nace N estudiante)
		if (mes > 12 || mes < 1){
			while (mes > 12 || mes < 1){ // Si el valor ingresado no se encuentra dentro del intervalo permitido, se repetira hasta lo contrario
				printf("Estudiante #%d, ingresar un valor permitido (1-12):\n", cont_alum);
				scanf("%d", &mes);
			}
		}
		else{
			if (mes <= 6){
				++cont_sm1;
			}
			else{
				++cont_sm2;
			}
		}
	}
	// SALIDA (se imprime cuantos estudiantes nacieron en cada mitad del año)
	printf("%d estudiantes nacieron en el primer semestre del año; %d en el segundo.", cont_sm1, cont_sm2);
	return 0;
}
	
