/*39. E.P. que lea las utilidades mensuales de una cadena de 5 tiendas
y que determine e imprima cuantas tiendas tuvieron utilidades mayor a
los $ 2,000,000.-.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");

//Declaraci�n de variables		
   float utilidades;
   int tiendas=0, contador_tiendas=0;
 
   while(tiendas<5){
   	tiendas++;
   	printf("Ingrese la utilidad de la tienda #%d: ", tiendas);
   	scanf("%f", &utilidades);
   	
   	if(utilidades>2000){
   		contador_tiendas=contador_tiendas+1;
		}
	
	}
	
	printf("\n");

//Salida de datos		
	printf("El n�mero de tiendas con utilidades mayores a 2000 son: %d", contador_tiendas);
	
	return 0;
	/*La ejecuci�n del programa es correcto solo que la pal�bra "numero" no se imprime correctamente en la impresi�n que nos da
	el n�meoro de tiendas con utilidades mayores a 2k. Tampoco incluye los datos descriptivos del programa como nombre, autor, fecha, version
	Revisado por: Emilio Campos*/
}
