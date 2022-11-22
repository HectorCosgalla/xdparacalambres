/*40.- Una cadena de 5 tiendas determina para cada una, al final del mes los montos de sus ventas y costos. E.P. que determine e
imprima cuántas tiendas obtuvieron una utilidad mayor a los $2,000,000.- al final del año.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");	
//Declaración de variables	
    int tiendas, mes, contador_tiendas=0;
    float ventas, costos, utilidades;

//Inicio del ciclo for de las 5 tiendas	
   for(tiendas=1;tiendas<=5;tiendas++){
   	
		for(mes=1;mes<=2;mes++){ //Inicio de for anual
    		printf("Ingrese los montos de sus ventas y costos de la tienda #%d en el mes \n", tiendas);
    		
    		do{ //Incio de do-while para validar los datos de entrada		
    			printf("Monto de venta del mes %d: ", mes);
    			scanf("%f", &ventas);
		   }while(ventas<=0);
		   
		   do{ //Incio de do-while para validar los datos de entrada
    		printf("Monto de costos del mes %d: ", mes);
    		scanf("%f", &costos);
    	   }while(costos<=0);
    	   
    		ventas+=ventas; //Suma de las ventas mensuales
    		costos+=costos; //Suma de los costos mensuales
		}
		
		utilidades=ventas-costos; //Operación para encontrar la utilidad anual
		
		 printf("\n");
		 
		 if(utilidades>2000000){ //If para determinar el número de tiendas que tuvieron utilidades mayores a 2,000,000
		 	contador_tiendas++;
		 }
		 
		 ventas=0; //Inicialización en 0 para los datos de las siguientes tiendas
		 costos=0; //Inicialización en 0 para los datos de las siguientes tiendas
		 utilidades=0;	//Inicialización en 0 para los datos de las siguientes tiendas
   }
   
//Salida de datos		 
	 printf("El número de tiendas que tuvieron utilidad mayor a 2,000,000 al final del año fueron %d", contador_tiendas);
	/*Q/A: El programador cometió un error de dedo al ingresar el número de meses que deben de ser ingresados en vez de poner 12 meses puso 2 y por lo tanto no se 
   van a realizar las operaciones necesarias para obtener las cantidades de un año.
   Revisado por: Emilio CamposDaguer*/
	return 0;
}
