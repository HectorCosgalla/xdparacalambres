/*
Nombre: Carro
Descripcion: Programa que lee cada suposición de la medida del carro del concurso y arroja la diferencia 
con el resultado, el número de participantes y el participante más cercano a esta cantidad.
Autor: Programadores Insomnes
Version: 1.1
Fecha: 15/02/2022
*/
#include <stdio.h>

int main(){
    int num_participante, participantes;
    int x = 1;
    float propuesta, correcto, diferencia;
    float propuesta1 = 0;
	/* Declaramos las variables 
	num_participante= numero del participante
	participante= contador del numero de participantes
	correcto= valor de la distancia del carro
	diferencia= diferencia con la distancia del carro
	propuesta= Cantidad que va a decir el participante
	propuesta1= Servirá paraguardar el valor de la propuestaanterior */
    correcto = 3.85;

    do
    {
		/*ENTRADA
		Se le pide al participante ingresar la cantidad que cree mide el carro*/
        printf("\n\n Participante %i escriba su propuesta, \n Pero si ya nadie quiere participar escriba 0 ", x);
        scanf("%f", &propuesta);

        /*PROCESO
		Determinar distancia de cada jugador*/
        if(propuesta == 0)
        printf(" ");

        else if(propuesta < correcto){
        diferencia = correcto - propuesta;
        printf("\n\n La distancia fue de %.2f metros ",diferencia);
        }
        else if (propuesta > correcto){
        diferencia = propuesta - correcto;
        printf("\n\n La distancia fue de %.2f metros, te pasate",diferencia);}
        
        //Valor mas cercano y quien lo obtuvo
        if((propuesta > propuesta1)&&(propuesta < correcto)){
            propuesta1 = propuesta;
            num_participante = x;
        }
        
        x++;
    } while (propuesta != 0);
    participantes = x - 1;
	/*SALIDA
	Aquí se imprimen los resultados */
    printf("\n El numero de participantes fueron %d", participantes);
    printf("\n El participante mas cercano fue %d, con una distancia de %f",num_participante, propuesta1);
    return 0;
}
