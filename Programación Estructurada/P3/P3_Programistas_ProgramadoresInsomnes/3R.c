/*Un beisbolista tiene cuatro oportunidades de batear en un juego. 
Por cada turno al bate, se registra si el batazo del jugador es "hit", 
"out" o "base por bola". Se quiere saber, en un juego, cuántas veces 
el jugador batea un "hit", cuántas veces es "out" y cuántas veces recibe 
"base por bola". Además, se desea calcular el porcentaje de bateo por 
juego del jugador, lo cual se calcula dividiendo el número de veces que 
batea un hit, entre las oportunidades de bateo que no son "base por bola". 
E.P. que calcule e imprima lo siguiente:

a) Cuántas veces se batea un hit, cuántas veces un out y cuántas veces base por bola,

b) Cuál es el porcentaje de bateo del juego para el jugador.*/

#include <conio.h>    // console input output
#include <stdio.h>    // Standard Input/Output
#include <math.h>     //operaciones matematicas


int main()  
{	
	int hit=0, out=0, base=0, nobase;//total tipos de bataso, la suma de todos los que no son base por bola
	int i1, i2, i3, i4;//almacena el tipo de batazo en cada intento
	float porcentaje;//porcentaje de bateo
	
	printf("Bienvenido al registro de batazos\n");
	printf("%cComo bateaste en el primer intento?\n1. Hit\n2. Out\n3. Base por bola\n",168);
	scanf("%d",&i1);
	
	switch(i1)
	{
	case 1: //es hit
		hit+=1;
		break;
	case 2: //es out
		out+=1;
		break;
	case 3: //base por bola
		base+=1;
		break;
	default: //se ingreso algo invalido
		printf("No es una opcion valida!\n");
		break;
	}
	
	printf("%cComo bateaste en el segundo intento?\n1. Hit\n2. Out\n3. Base por bola\n",168);
	scanf("%d",&i2);
	
	switch(i2)
	{
	case 1: //es hit
		hit+=1;
		break;
	case 2: //es out
		out+=1;
		break;
	case 3: //base por bola
		base+=1;
		break;
	default: //se ingreso algo invalido
		printf("No es una opcion valida!\n");
		break;
	}
	
	printf("%cComo bateaste en el tercer intento?\n1. Hit\n2. Out\n3. Base por bola\n",168);
	scanf("%d",&i3);
	
	switch(i3)
	{
	case 1: //es hit
		hit+=1;
		break;
	case 2: //es out
		out+=1;
		break;
	case 3: //base por bola
		base+=1;
		break;
	default: //se ingreso algo invalido
		printf("No es una opcion valida!\n");
	}
	
	printf("%cComo bateaste en el cuarto intento?\n1. Hit\n2. Out\n3. Base por bola\n",168);
	scanf("%d",&i4);
	
	switch(i4)
	{
	case 1: //es hit
		hit+=1;
		break;
	case 2: //es out
		out+=1;
		break;
	case 3: //base por bola
		base+=1;
		break;
	default: //se ingreso algo invalido
		printf("No es una opcion valida!\n");
	}
	

	
	nobase=hit+out;//total de batazos que no son base por bola
	porcentaje=(float)hit/(float)nobase*100;//porcentaje de bateo. Los identifico como flotantes en esta operacion para que el porcentaje pueda ser <1
	
	printf("Tu marcador queda de la siguiente manera\n");
	printf("Hit: %d\nOut: %d\nBase por bola: %d\n",hit, out, base);
	printf("Tu porcentaje de bateo es de %.2f%c",porcentaje, 37);
	
	
	getch(); /* Pausa, lee un carácter por teclado, sin eco por pantalla */
	
	return 0;   // return 0, indica que finalizó correctamente la ejecución	
	/* Q/A: El programa se ejecuta correctamente, lee adecuadamente los bateos y el porcentaje coincide con los mismos.
	se probó con los siguientes valores:
	intento 1= 3(base por bola)
	intento 2= 2(out)
	intento 3= 3(base por bola)
	intento 4= 1(hit)
	El programa arrojo lo siguiente:
	
	Tu marcador queda de la siguiente manera
	Hit: 1
	Out: 1
	Base por bola: 2
	Tu porcentaje de bateo es de 50.00%
	los resultados son correctos, por lo tanto el programa funciona bien
	Revisado por Reynaldo Couoh Martin y Aaron Graniel Arzat*/

}
