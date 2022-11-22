#include <stdio.h>
#include <locale.h>

/*4. Boxito Plomero es un mayorista de plomería, electricidad, artículos y muebles para baño, 
que cuenta con tres establecimientos en la Península de Yucatán. 
Asimismo, cuenta con información de sus ventas y costos mensuales de cada una de sus tiendas de los últimos cinco años. 
E.P. que lea las ventas y costos mensuales, de cada una de las tiendas, de los cinco años. Determine e imprima lo siguiente:

a) Cuál es la tienda que obtuvo más utilidades totales en los 5 años?

b) En quá año, Boxito, obtuvo la mayor utilidad total de todos los establecimientos?

Se sabe que Utilidad mensual = Ventas mensuales - Costos mensuales.
Realizado por Programadores Insomnes (Adiel Elioenai Herrera Herrera)
*/  

int main (){
	
	setlocale(LC_ALL," ");
	//Variables
	int vmensual,cmensual,tiendas, mes, uanual, utotal, anno;
	int a1, a2, a3, a4, a5, t1, t2, t3;

	//Proceso
	for (tiendas=1;tiendas<=3;tiendas++){
		
		
		for (anno=1;anno<=5;anno++){
			
			
			for(mes=1;mes<=12;mes++){
				printf ("Ingrese la venta del establecimiento %d del año %d mes %d\n", tiendas, anno, mes);
				scanf ("%d",&vmensual);
				printf ("Ingrese los costos del establecimiento %d del año %d mes %d\n", tiendas, anno, mes);
				scanf ("%d", &cmensual);
				
				//Salida
				uanual=uanual+(vmensual-cmensual);
			}
			
			//Proceso 
			if (anno==1){
				a1=uanual+a1;
			}
			else if (anno==2){
				a2=uanual+a2;
			}
			else if (anno==3){
				a3=uanual+a3;
			}
			else if (anno==4){
				a4=uanual+a4;
			}
			else {
				a5=uanual+a5;
			}
			
			//Salida
			 utotal= utotal+uanual;
			uanual=0;	 
		}
		
		//Proceso
		if (tiendas==1){
			t1=t1+ utotal;
		}
		else if (tiendas==2){
			t2=t2+ utotal;
		}
		else {
			t3=t3+ utotal;
		}
		
		utotal=0;
		
	}
	
	//Salida
	if(t1>t2){
		if(t1>t3){
			printf("La tienda 1 tuvo la mayor utilidad con %d \n",t1);
		}
		else{
			printf("La tienda 3 tuvo la mayor utilidad con %d \n",t3);
		}
	}
	else{
		if(t2>t3){
			printf("La tienda 2 tuvo la mayor utilidad con %d \n",t2);
		}
		else{
			printf("La tienda 3 tuvo la mayor utilidad %d \n",t3);
		}
	}
	
	//Salida
	if(a1>a2 && a1>a3 && a1>a4 && a1>a5 )
	{
		printf("El primer año tuvo la mayor utilidad con %d",a1);
	}
	else if(a2>a1 && a2>a3 && a2>a4 && a2>a5 )
	{
		printf("El segundo año tuvo la mayor utilidad con %d",a2);
	}
	else if(a3>a2 && a3>a1 && a3>a4 && a3>a5 )
	{
		printf("El tercer año tuvo la mayor utilidad con %d",a3);
	}
	else if(a4>a2 && a4>a3 && a4>a1 && a4>a5 )
	{
		printf("El caurto año tuvo la mayor utilidad con %d",a4);
	}
	else
	{
		printf("El quinto año tuvo la mayor utilidad con %d",a5);
	}	
	
	return 0;
}
	
