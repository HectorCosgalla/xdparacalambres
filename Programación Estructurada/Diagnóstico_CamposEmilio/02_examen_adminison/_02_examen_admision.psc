Algoritmo _02_examen_admision
	Definir cal,num,n Como real;
	//cal=calificaci�n, num=n�mero de alumnos evaluados, n=contador 
	Definir alumno Como Caracter;
	//alumno=nombre del alumno
	Escribir "Escribe el n�mero de alumnos que fueron evaluados";
	//Se pide el n�mero de alumnos
	Leer num;
	n=0;
	//Se inicia REPETIR
	Repetir
		Escribir "Escribe el nombre del alumno";
		//Se pide el nombre del alumno
	 	Leer alumno;
		
		Escribir "Escribe la calificaci�n de ",alumno,":";
		//Se pide la calificaci�n del alumno
		Leer cal;
		//Se aplican multiples SI
		Si cal > 90 Entonces
			Escribir "Calificaci�n EXCELENTE";
		SiNo
			Si cal>75 Entonces
				Escribir "Calificaci�n SATISFACTORIA";
			SiNo
				Si cal>65 Entonces
					Escribir "Calificaci�n SUFICIENTE" ;
		        SiNo
					Si cal>60 Entonces
						Escribir "RECURSAMIENTO B";
					SiNo
						Si cal>50 Entonces
							Escribir "RECURSAMIENTO A";
						SiNo
							Si cal>30 Entonces
								Escribir "REPETICI�N";
							SiNo
								Si cal>=0 Entonces
									Escribir "REPETICI�N";
								FinSi
							Fin Si
						Fin Si
					Fin Si
				Fin Si
			Fin Si
		Fin Si
		n=n+1;
	Hasta Que n=num
	
FinAlgoritmo
