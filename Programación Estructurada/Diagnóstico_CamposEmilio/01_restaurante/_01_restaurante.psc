Algoritmo _01_restaurante
	//Se declaran primero las variables que utilizaremos
	Definir  tipo_hamburguesa, no_hamburguesa, total como Entero; 
	//tipo de hamburguesa= saber si la hamburguesa es (1) sencilla, (2) doble o (3)triple, sumado a esto si digita un número mayor sucedera lo esperado
	//no_hamburguesa=El número de hamburguesas del mismo tipo; total= Total de la compra
	Escribir "Escribe el tipo de hamburguesa a pedir, (1) sencilla, (2) doble, (3) triple";
	//Se le pide al empleado que digite el tipo de hamburguesa
	Leer tipo_hamburguesa;
	//Inicio de estructura de control condicional SI
	Si tipo_hamburguesa=3 Entonces
		tipo_hamburguesa= 100;
		//Se le asigna el valor del costo de la triple//Se le asigna el valor del costo de la triple
	SiNo
		Si tipo_hamburguesa=2 Entonces
			tipo_hamburguesa=80;
			//Se le asigna el valor del costo de la doble
		SiNo
			Si tipo_hamburguesa=1 Entonces
				tipo_hamburguesa=60;
				//Se le asigna el valor del costo de la sencilla
			SiNo
				Si tipo_hamburguesa>3 Entonces
					Escribir "No hay este tipo de hamburguesa, reinicia el programa";
					tipo_hamburguesa=0;
					//Se le asigna el valor de 0 para evitar que arroje un total
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	Escribir "Escribe el número de hamburguesas a pedir";
	//Se le pide al empleado digite el número de hamburguesas a pedir del mismo tipo
	Leer no_hamburguesa; 
	total= tipo_hamburguesa*no_hamburguesa;
	Si total=0 Entonces
		Escribir "Reiniciar programa, no había necesidad de seguir con la acción";
		//Si el empleando anda pajareando o anda de curioso lo regañamos
	SiNo
		Escribir "El total es: $", total,".","Si el pago es con tarjeta, el total es: $" total*1.03;
		//Si todo el proceso se realizó correctamente arroja este resultado
	FinSi
FinAlgoritmo
