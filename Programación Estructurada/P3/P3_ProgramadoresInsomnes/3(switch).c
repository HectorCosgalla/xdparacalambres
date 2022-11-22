/*Nombre: Bateos
Autor: Programadores Insomnes
Versión: 1.0
Fecha: 04/02/2022
Descripción: Programa que lea las 4 oportunidades de bateo de un jugador e imprima
cuantas veces fue hit, out o base por bola, al igual que su porcentaje de bateo.*/
#include <stdio.h>
#include <conio.h>

int main(void) {
	/*Se declaran las variables
	Los enteros son:
	prim_bateo= primer bateo, seg_bateo= segundo bateo, ter_bateo= tercer bateo, cuat_bateo= cuarto bateo, opor_bateo= oportunidades de bateo
	Los reales: porc_bateo= porcentaje del bateo
	*/
	int prim_bateo, seg_bateo, ter_bateo, cuat_bateo, opor_bateo;
	float porc_bateo;
	/* Se inicializan y declaran las variables como enteros
	cant_hit= cantidad de "hit", cant_out= cantidad de "outs", cant_bola= cantidad de "bolas"*/
	int cant_hit=0, cant_out=0, cant_bola=0;
	
	/*Se le pide al usuario el tipo de resultado en el batero 1,2,3 y 4*/
	printf ("\n Introduzca el resultado del primer bateo (si fue hit ponga 1, si fue out ponga 2 o si fue bola ponga 3): ");
	scanf("%d", &prim_bateo);
	printf ("\n Introduzca el resultado del segundo bateo (si fue hit ponga 1, si fue out ponga 2 o si fue bola ponga 3): ");
	scanf("%d", &seg_bateo);
	printf ("\n Introduzca el resultado del tercer bateo (si fue hit ponga 1, si fue out ponga 2 o si fue bola ponga 3): ");
	scanf("%d", &ter_bateo);
	printf ("\n Introduzca el resultado del cuarto bateo (si fue hit ponga 1, si fue out ponga 2 o si fue bola ponga 3): ");
	scanf("%d", &cuat_bateo);
	
	/*Inician las sentencias de switch para determinar los resultados de los bateos*/
	switch(prim_bateo)
	{
		case 1: cant_hit = cant_hit + 1;
				break;
		case 2: cant_out = cant_out + 1;
				break;
		case 3: cant_bola = cant_bola + 1;
				break;
		default: printf("\n Resultado del primer bateo invalido");
	}
	switch(seg_bateo)
	{
		case 1: cant_hit = cant_hit + 1;
				break;
		case 2: cant_out = cant_out + 1;
				break;
		case 3: cant_bola = cant_bola + 1;
				break;
		default: printf("\n Resultado del primer bateo invalido");
	}
	switch(ter_bateo)
	{
		case 1: cant_hit = cant_hit + 1;
				break;
		case 2: cant_out = cant_out + 1;
				break;
		case 3: cant_bola = cant_bola + 1;
				break;
		default: printf("\n Resultado del primer bateo invalido");
	}
	switch(cuat_bateo)
	{
		case 1: cant_hit = cant_hit + 1;
				break;
		case 2: cant_out = cant_out + 1;
				break;
		case 3: cant_bola = cant_bola + 1;
				break;
		default: printf("\n Resultado del primer bateo invalido");
	}
	
	opor_bateo= cant_hit + cant_out;
	
	switch(opor_bateo)
	{
	case 1:
	case 2:
	case 3:
	case 4: porc_bateo = (cant_hit*100)/opor_bateo;//Determinar el porcentaje de bateo
			break;
	default: porc_bateo = 0;//Porcentaje de bateo cuando no hay oportunidad de bateo
	}
	
	/*Se imprimen los resultados de los tipos de resultados en los bateos y el porcentaje de bateo del jugador*/
	printf("\n El jugador bateo %d hit(s) %d out(s) y %d base por bola.", cant_hit, cant_out, cant_bola);
	printf("\n El porcentaje de bateo del jugador fue de %.2f", porc_bateo);
	
	getch();/*Se pausa el programa*/
	return 0;
}

