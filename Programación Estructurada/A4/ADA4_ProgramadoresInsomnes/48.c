#include <stdio.h>
#include <conio.h>
/*
Nombre: Srita. Simpatía.
Descripcion: Programa que lee los 500 votos de los alumnos y determina e 
imprime el nombre de la ganadora del concurso Srita. Simpatía.
Autor: Programadores Insomnes
Version: 1.0
Fecha: 14/02/2022
*/

int main(void) {
	/*Declaración de variables*/
	int voto, a, votos_H=0.0, votos_A=0.0, cont_votos=1;
	/*voto: variable que determina si el voto fue para Hortencia, Anacreta o fue nulo, a:  variable para validar las entradas
	votos_H: contador de votos a favor de Hortencia, votos_A: contador de votos a favor de Anacreta, cont_votos: contador de numero de votos*/
	
	/*Proceso*/
	do{
		do{
			/*Entrada*/
			printf("\n Introduzca su voto, un (0) si es para Hortencia, un (1) si es para Anacreta o un (2) para que su voto sea nulo: ");
			scanf("%d", &voto);//Se lee el voto del alumno
			if(voto==0||voto==1||voto==2)//Se valida que el dato de entrada sea 0, 1 o 2.
			{
				a=1;
			}
			else
			{
				/*Salida*/
				printf("\n Introduzca un valor valido.");//Se imprime en caso del que dato de entrada sea diferente de 0, 1 o 2.
				a=0;
			}
		}while(a==0);
		
		if(voto==0)//Se compara si el dato de entrada equivale a 0
		{
			votos_H++;//Aumenta los votos a favor de Hortencia
		}
		else if(voto == 1)//Se compara si el dato de entrada equivale a 1
		{
			votos_A++;//Aumenta los votos a favor de Anacreta
		}
		
		cont_votos++;
	} while(cont_votos<=500);
	
	/*Determinar quien fue el ganador o si hubo un empate*/
	if(votos_H>votos_A)//Se compara que los votos de Hortencia sean mayores que de los de Anacreta
	{
		/*Salida*/
		printf("\n La ganadora del concurso Srita. Simpatía es: Hortencia con %d votos.", votos_H);//Se imprime cuando los votos de Hortencia sean mayores a los de Anacreta
	}
	else if(votos_A>votos_H)//Se compara que los votos de Anacreta sean mayores que de los de Hortencia
	{
		/*Salida*/
		printf("\n La ganadora del concurso Srita. Simpatía es: Anacreta con %d votos.", votos_A);//Se imprime cuando los votos de Anacreta sean mayores a los de Hortencia
	}
	else//Dado caso que no se cumplan ninguno, se da por hecho que los votos de Hortencia y los de Anacreta son iguales.
	{
		/*Salida*/
		printf("\n El resultado del concurso Srita. Simpatía es: Empate entre Hortencia y Anacreta, ambas con %d votos.", votos_A);//Se imprime cuando el resultado fue un empate
	}
	getch();//Se pausa el programa
	return 0;
}

