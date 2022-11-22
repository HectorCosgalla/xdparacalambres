/*39. E.P. que lea las utilidades mensuales de una cadena de 5 tiendas
y que determine e imprima cuantas tiendas tuvieron utilidades mayor a
los $ 2,000,000.-.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");	

//Declaración de variables		
   float utilidades, venta, costo;
   int tiendas, contador_tiendas=0;
 
//Inicio de ciclo for

	for(tiendas=1;tiendas<=5;tiendas++){
		
		do{  //Inicio de do-while para validar la entrada de los datos
		   printf("Ingrese la venta de la tienda #%d: ", tiendas);
   	   scanf("%f", &venta);
      }while(venta<=0);
      
      do{   //Inicio de do-while para validar la entrada de los datos
	    	printf("Ingrese los costos de la tienda #%d: ", tiendas);
   	   scanf("%f", &costo);   	
      }while(costo<=0);
      
   	utilidades=venta-costo;  //Operación para encontrar la utilidad de la tienda
   	
   	if(utilidades>2000000){  //If para encontrar el número de tiendas con utilidades mayores a 2,000,000
   		contador_tiendas++;
		}
		
		printf("\n"); //Comando para salto de línea
		
	}
	
//Salida de datos		
	printf("El número de tiendas con utilidades mayores a 2000000 son: %d", contador_tiendas);
	/*Q/A: La ejecución e impresión de los resultados es correcta, de nuevo errores en la impresión de caracteres especiales al ser ejecutado en mi dispositivo
	"El n£mero de tiendas con utilidades mayores a 2000000 son: 0"
	Revisado por: Emilio Campos Daguer*/
	return 0;
}
