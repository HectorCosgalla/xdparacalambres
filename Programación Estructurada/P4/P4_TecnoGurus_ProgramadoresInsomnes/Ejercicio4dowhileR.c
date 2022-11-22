#include <stdio.h>

	
	int main(int argc, char *argv[]) { 
		
		int turno,contador,contador2;
		contador=0;
		contador2=0;
		
		char jugador[30]; 
		
		float hits,outs,bsb,porcentajeB; 
		
	
		do/*Empieza la estructura repetitiva "do while" para repetir 9 veces (cantidad de jugadores en beisbol) 
			el proceso de pedir nombre de jugador, y que obtuvo en sus 4 turnos. Se utiliza un contador y al terminar toda la acción 
 requerida a repetirse, el contador se incrementa en 1 para evitar un bucle infinito*/  
			{
		printf("Ingrese el nombre del jugador\n"); 
		
		scanf("%s",&jugador); 
		
		//primer turno 
		do
			{
		printf("En su turno, El jugador obtuvo un hit, out o base por bola\n"); 
		
		printf("Escriba (1) para hit, (2) para out o (3) para base por bola\n"); 
		
		scanf("%d",&turno); 
		contador2++;
		}
		while(contador2!=4);
			
		if (turno == 1){ 
			
			hits = (hits + 1); 
			
		} 
		
		else if (turno == 2){ 
			
			outs = (outs + 1); 
			
		} 
		
		else if (turno == 3){ 
			
			bsb = (bsb + 1); 
			
		} 
		
		contador++;
		//Fórmula para calcular el porcentaje de bateo 
		
		porcentajeB = (hits/4); 
		
		//estadísticas 
		
		printf("Estadisticas del jugador "	"%s\n",jugador); 
		
		printf("Porcentaje de bateo: " "%f\n",porcentajeB); 
		
		printf("Hits durante el juego: " "%f\n",hits); 
		
		printf("Outs durante el juego: " "%f\n",outs); 
		
		printf("Bases por base durante el juego: " "%f\n",bsb); 
		}
		while (contador!=9);/*Condición para el correcto funcionamiento del do while, aquí, mientras el contador sea 9 se repetirá el proceso*/
		return 0; 
		
	
}
/*Q/A: El programa no funciona correctamente.
1. El do-while de las lineas de la 22 a la 33 esta mal empleado, ya que solo evalua, si es hit, out o base por bola, para 
el ultimo dato ingresado, y tiene que evaluar los 4 bateos, para ello las lineas de la 35 a la 51 beberian estar dentro del do-while.
2. El ejercicio pedia imprimir la cantidad de hits, outs y bases por bola que tuvo el equipo,
y tambien se pidio el porcentaje de bateo del equipo. El programa lo realiza individualmente, para mejorarlo
se debe hacer un analisis del problema antes de pasarlo a codigo.
3. El porcentaje de bateo de no se esta calculando correctamente, ya que dicho porcentaje se calcula 
dividiendo el número de veces que batea un hit, entre las oportunidades de bateo que no son "base por bola", en el programa 
lo calcula dividiendo "hits/4", sin tomar en cuenta los bases por bola que tuvo el jugador.
Por lo tanto, el programa no funciona correctamente y no cumple con lo pedido por el problema. Revisado por: Aaron Graniel y Adiel Herrera.*/
