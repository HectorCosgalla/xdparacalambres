Algoritmo _03_Boxito
	Definir anio,suc, est1, est2, est3, venta,venta1,util, costo,costo1, i,j,k Como Real;;
	costo=0; costo1=0; venta=0; venta1=0; util=0;
	Para k=0 Hasta 2 Con Paso 0 Hacer
		Escribir "Escribe el número de sucursal";
		Leer suc;
		k=suc+1;
		Para j=0 Hasta 4 Con Paso 0 Hacer
			Escribir "Escribe el año de venta";
			Leer anio;
			Escribir "escribe los datos del año ", anio;
			j=anio+1;
			Para i<-0 Hasta 11 Con Paso 0 Hacer
				Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
				Leer venta;
				Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
				Leer costo;
				venta1=venta+venta1;
				costo1=costo+costo1;
				util=venta1-costo1;
				Escribir "La suma del los montos de venta es total a: ", venta1;
				Escribir "La suma de los costes es total a: ", costo1;
				Escribir "La suma de la utilidad es total a: ", util;
				i=i+1;
			Fin Para
			Escribir "La utilidad del año ", anio " es ", util; 
		Fin Para
	Fin Para
	
	
FinAlgoritmo
