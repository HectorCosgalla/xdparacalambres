#include <stdio.h>
#include <conio.h>
/*
Nombre: Beisbol
Descripcion: Programa que lee las 4 veces en la que batea cada jugador, de un equipo de 9 personas,
y determina e imprime la cantidad de hits, outs y bases por bola del equipo, al igual
que su porcentaje de bateo.
Autor: Programadores Insomnes
Version: 1.1
Fecha: 15/02/2022
*/

int main(void) {
	/*Declaracion de variables e inicializacion de variables*/
	int bateo, a, cont_hit_jug, cont_out_jug, cont_bola_jug, opor_bateo, cont_bateos; 
	/*bateo: el resultado del bateo, a: variable para la validacion del dato de entrada, cont_hit_jug: contador de los hits de un jugador,
	cont_out_jug: contador de los outs de un jugador, cont_bola_jug: contador de los bases por bola de un jugador,
	opor_bateo: oportunidad de bateo de un jugador, cont_bateos: contador para el numero de bateos de un jugador.*/
	int sum_hit=0, sum_out=0, sum_bola=0, cont_jug=1;
	/*sum_hit: sumador de los hits del equipo, sum_out: sumador de los outs del equipo, 
	sum_bola: sumador de los bases por bola del equipo, cont_jug: contador del numero de jugadores.*/
	float porc_bateo, sum_porc=0.0, porc_equipo;
	/*porc_bateo: porcentaje de bateo de cada jugador, sum_porc: sumador del porcentaje de bateo de cada jugador,
	porc_equipo: porcentaje de bateo del equipo.*/
	
	/*Proceso*/
	do{
		cont_hit_jug = 0;
		cont_out_jug= 0;
		cont_bola_jug = 0;
		cont_bateos=1;
		do{
			do{
				/*Entrada*/
				printf("\n Introduzca el bateo %d del jugador %d (0=hit, 1=out o 2=base por bola): ", cont_bateos, cont_jug);
				scanf("%d", &bateo);// Se lee el bateo del jugador, si fue hit, out o base por bola.
				if(bateo>=0 && bateo<=2)//Validando que el dato ingresado este dentro los parametros establecidos
				{
					a = 0;
				}
				else
				{
					printf("\n Introduzaca un valor valido.");// Se imprime en caso de que el dato ingresado sean diferentes a 0, 1 y 2.
					a =1;
				}
			} while(a==1);
			
			/*Determina la cantidad de hits, outs y bases por bola de un jugador*/
			if( bateo == 0)
			{
				cont_hit_jug++;
			}
			else if(bateo==1)
			{
				cont_out_jug++;
			}
			else
			{
				cont_bola_jug++;
			}
			cont_bateos++;
			
		} while(cont_bateos <= 4);
		
		/*Determina la cantidad de hits, outs y bases por bola del equipo*/
		sum_hit += cont_hit_jug;
		sum_out += cont_out_jug;
		sum_bola += cont_bola_jug;
		
		opor_bateo = cont_hit_jug + cont_out_jug;//Se determina la oportunidad de bateo de un jugador
		
		if(opor_bateo == 0)//Validamos que la opor_bateo no sea 0.
		{
			porc_bateo = 0;//Si la oportunidad de cero, entonces no se puede realizar la division, por lo que, se le asignamos el valor 0 al porcentaje de bateo.
		}
		else 
		{
			porc_bateo = (cont_hit_jug*100)/opor_bateo;//Se determina el porcentaje de bateo si hay por lo menos un hit o un out.
		}
		
		sum_porc += porc_bateo;//sumatorio del porcentaje de bateo de cada jugador.
		
		cont_jug++;
	} while(cont_jug <= 9);
	
	porc_equipo = sum_porc/9;//Se determina el porcentaje de bateo promedio del equipo.
	
	/*Salida*/
	printf("\n El equipo tuvo %d hit(s), %d out(s) y %d base por bola.", sum_hit, sum_out, sum_bola);//Se imprimen la cantidad de hits, outs y bases por bola del equipo.
	printf("\n El porcentaje de bateo del equipo es del %.2f.", porc_equipo);//Se imprime el porcentaje de bateo promedio del equipo.
	
	getch();//Se pausa el programa.
	return 0;
}

