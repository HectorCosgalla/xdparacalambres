/*40.- Una cadena de 5 tiendas determina para cada una, al final del mes los montos de sus ventas y costos. E.P. que determine e
imprima cuántas tiendas obtuvieron una utilidad mayor a los $2,000,000.- al final del año.*/
#include<stdio.h>
#include<locale.h>

int main(){	
	setlocale(LC_ALL,"");
	
//Declaración de variables	
    int tiendas=1, mes, contador_tiendas=0;
    float ventas, costos, utilidades, ventatienda, costotienda;

//Operaciones del programa	y entradas    
    while(tiendas<=5){
    	
    	utilidades=0;
    	mes=1;
    	ventatienda=0;
    	costotienda=0;
		
		printf("Ingrese los montos de sus ventas y costos de la tienda #%d en el mes \n", tiendas);
		
		while(mes<13){
    		
    		printf("Monto de venta del mes %d: \t", mes);
    		scanf("%f", &ventas);	
    		printf("Monto de costos del mes %d: \t", mes);
    		scanf("%f", &costos);
    		ventatienda+=ventas;
    		costotienda+=costos;
    	
    		mes++;
		}
		printf("\n"); 
		utilidades=ventatienda-costotienda;
		 
		 
		if(utilidades>2000000){
			contador_tiendas++;
		}
		 
		 
		 tiendas++;
	 }

//Salida de datos		 
	 printf("El número de tiendas que tuvieron utilidad mayor a 2,000,000 al final del año fueron %d", contador_tiendas);
    return 0;
	/*
	El programa imprime correctamente el resultado acorde a lo que se ingresó el número de tiendas con utilidades mayores a 2M, 
	solo que como el anterior ejercicio no imprime correctamente la palabra "numero" en la parte de imprimir el numero de tiendas
	con esta cantidad de utilidades.Tampoco incluye los datos descriptivos del programa como nombre, autor, fecha, version
	
	Revisado por: Emilio Campos Daguer*/
}
