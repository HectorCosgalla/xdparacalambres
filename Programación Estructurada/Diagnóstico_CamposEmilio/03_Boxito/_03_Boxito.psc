Algoritmo _03_Boxito
	Definir i,costo, costo1,venta,venta1 Como Real;
	Definir ua1s1,ua2s1,ua3s1,ua4s1,ua5s1 como real;
	Definir ua1s2,ua2s2,ua3s2,ua4s2,ua5s2 como real;
	Definir ua1s3,ua2s3,ua3s3,ua4s3,ua5s3 como real;
	Definir mua1,mua2,mua3,mua4,mua5 como real;
	Definir uts1, uts2, uts3 como real;
	costo=0; costo1=0; venta=0; venta1=0; 
	ua1s1=0; ua2s1=0; ua3s1=0; ua4s1=0; ua5s1=0;
	ua1s2=0; ua2s2=0; ua3s2=0; ua4s2=0; ua5s2=0;
	ua1s3=0; ua2s3=0; ua3s3=0; ua4s3=0; ua5s3=0;
	mua1=0; mua2=0; mua3=0; mua4=0; mua5=0;
	uts1=0; uts2=0; uts3=0;
	//SUCURSAL 1
	Escribir  "Escribe los datos venta de la sucursal 1";
		Escribir "Escribe los datos de venta del año  1";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua1s1=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 1 de la sucursal 1" " es ", ua1s1; 
		Escribir "Escribe los datos de venta del año 2";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua2s1=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 2 de la sucursal 1" " es ", ua2s1;
		Escribir "Escribe los datos de venta del año 3";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua3s1=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 3 de la sucursal 1" " es ", ua3s1;
		Escribir "Escribe los datos de venta del año 4";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua4s1=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 4 de la sucursal 1 es: $", ua4s1;
		Escribir "Escribe los datos de venta del año 5";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua5s1=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 5 de la sucursal 1 es: $", ua5s1;
	//SUCURSAL 2	
	Escribir "Escribe los datos de venta de la sucursal 2";
		Escribir "Escribe los datos de venta del año  1";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua1s2=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 1 de la sucursal 2 es: $", ua1s2; 
		Escribir "Escribe los datos de venta del año 2";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua2s2=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 2 de la sucursal 2 es: $", ua2s2;
		Escribir "Escribe los datos de venta del año 3";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua3s2=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 3 de la sucursal 2 es: $", ua3s2;
		Escribir "Escribe los datos de venta del año 4";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua4s2=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 4 de la sucursal 2 es: $", ua4s2;
		Escribir "Escribe los datos de venta del año 5";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua5s2=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 5 de la sucursal 2 es: $", ua5s2;
		//SUCURSAL3
	Escribir "Escribelos datos de venta de la Sucursal 3";
		Escribir "Escribe los datos de venta del año  1";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua1s3=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 1 de la sucursal 3 es: $", ua1s3; 
		Escribir "Escribe los datos de venta del año 2";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua2s3=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 2 de la sucursal 3 es :", ua2s3;
		Escribir "Escribe los datos de venta del año 3";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua3s3=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 3 de la sucursal 3 es: $", ua3s3;
		Escribir "Escribe los datos de venta del año 4";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua4s3=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 4 de la sucursal 3 es: $", ua4s1;
		Escribir "Escribe los datos de venta del año 5";
		Para i<-0 Hasta 11 Con Paso 1 Hacer
			Escribir "Escribe el monto total de ventas de establecimiento en el mes ",i+1,;
			Leer venta;
			Escribir "Escribe el monto total de los costes del establecimiento en el mes ", i+1;
			Leer costo;
			venta1=venta+venta1;
			costo1=costo+costo1;
			ua5s3=venta1-costo1;
		Fin Para
		Escribir "La utilidad del año 5 de la sucursal 1" " es ", ua5s3;
		//utilidades totales de cada tienda en los 5 años
		uts1=ua1s1+ua2s1+ua3s1+ua4s1+ua5s1;
		uts2=ua1s2+ua2s2+ua3s2+ua4s2+ua5s2;
		uts3=ua1s3+ua2s3+ua3s3+ua4s3+ua5s;
		Si uts1>uts2 & uts1>uts3 Entonces
			Escribir "La sucursal 1 tiene la mayor utilidad en los 5 años";
		SiNo
			Si uts2>uts1 & uts2>uts3 Entonces
				Escribir "La sucursal 2 tiene la mayor utilidad en los 5 años";
			SiNo
				Si uts3>uts1 & uts3>uts2
					Escribir "La sucursal 3 tiene la mayor utilidad en los 5 años";
				FinSi
			FinSi
		FinSi
		//Mayor utilidad anual
		mua1= ua1s1+ua1s2+ua1s3;
		mua2= ua2s1+ua2s2+ua2s3;
		mua3= ua3s1+ua3s2+ua3s3;
		mua4= ua4s1+ua4s2+ua4s3;
		mua5= ua5s1+ua5s2+ua5s3;
		Si mua1>mua2 & mua1>mua3 & mua1>mua4 & mua1>mua5 Entonces
			Escribir "El año con mayor utilidad fue el año 1";
		SiNo
			Si mua2>mua1 & mua2>mua3 & mua2>mua4 & mua2>mua5 Entonces
				Escribir "El año con mayor utilidad fue el año 2";
			SiNo
				Si mua3>mua1 & mua3>mua2 & mua3>mua4 & mua3>mua5 Entonces
					Escribir "El año con mayor utilidad fue el año 3";
				SiNo
					Si mua4>mua1 & mua4>mua2 & mua4>mua3 & mua4>mua5 Entonces
						Escribir "El año con mayor utilidad fue el año 4";
					SiNo
						Si mua5>mua1 & mua5>mua2 & mua5>mua3 & mua5>mua4 Entonces
							Escribir "El año con mayor utilidad fue el año 5";
						Fin Si
					Fin Si
				Fin Si
			FinSi
		FinSi
FinAlgoritmo