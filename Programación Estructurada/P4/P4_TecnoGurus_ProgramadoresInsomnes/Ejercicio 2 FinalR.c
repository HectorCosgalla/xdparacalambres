#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	2. En un concurso se solicitará a un número no determinado de personas, que intenten adivinar la longitud exacta en metros de un vehículo. 
	Cada participante tiene una sola oportunidad para participar.  
	E.P. que permita leer las longitudes propuestas por cada persona y que determine la diferencia con la longitud correcta que es 3.85 mts. 
	Es decir, debe solicitar las propuestas de todos los que quieran participar y, cuando ya no haya más participantes, 
	imprimir tanto el número del participante más cercano a la longitud correcta, como la longitud propuesta por dicho participante. }
	
	Además, se imprimirá el número total de participantes. 
	Considerar que no pueden haber dos propuestas de participantes iguales y que nadie adivinará la medida exacta de la longitud del auto. 
	Utilizar while-do, como principal estructura repetitiva.
	*/
	
	// El programa funciona bajos las siguientes condiciones: Se tiene en cuenta
	// que ninguno de los usuarios va a ingresar la misma respuesta, asi como que 
	// la propuesta mas cercana es la que se ingresó primero y que nadie acertó
	// en la longitud real del coche.
	
	
	int eleccion = 0;
	int contadorParticipantes=1;
	int participanteMasCercano=0;
	float propuestaParticipanteActual;
	float propuestaMasCercana=0;
	float diferenciaMasCercana=0;
	float longitudCorrecta=3.85;
	
	while (eleccion !=3){
		/* Este es el menu*/
		printf("Este programa permite intentar adivinar la longitud exacta en metros de un vehiculo\n");
		printf("///Elija una de estas opciones///\n");
		printf("1. Ingresar una propuesta de medida\n");
		printf("2. Terminar concurso\n");
		printf("3. Salir\n");
		
		/* Aqui se lee la opcion del usuario*/
		scanf("%d", &eleccion);
		
		if (eleccion == 1) {
			printf("Hola participante %d, ingrese su propuesta\n",contadorParticipantes);			
			scanf("%f", &propuestaParticipanteActual);
			
			float diferencia= abs (longitudCorrecta-propuestaParticipanteActual);
			
			if(contadorParticipantes==1){
				propuestaMasCercana=propuestaParticipanteActual;
				participanteMasCercano=contadorParticipantes;
				diferenciaMasCercana=diferencia;
			}else{
				if(diferencia<diferenciaMasCercana){
					propuestaMasCercana=propuestaParticipanteActual;
					participanteMasCercano=contadorParticipantes;
					diferenciaMasCercana=diferencia;
				}
			}
			contadorParticipantes++;
		}
		if (eleccion == 2) {
			printf("Fin del concurso\n");
			printf("Longitud exacta en metros del coche es: 3.85 mts\n");
			printf("El participante mas cercano fue el participante: %d\n",participanteMasCercano);
			printf("Su propuesta fue: %f\n",propuestaMasCercana);
			contadorParticipantes=1;
			system("pause");
		}
	}
	
	return 0;
}
/*Q/A: Simplemente el programa no corre arroja "Ejercicio 2 Final.c:1:20: faltal error: iostream: No such file or directory
Hablé con el compañero que lo hizo y piensa no subió la versión correcta
Revisado por Emilio Campos Daguer"*/
