Algoritmo _02_examen_admision
	Definir cal,num,n Como real;
	//cal=calificación, num=número de alumnos evaluados, n=contador 
	Definir alumno Como Caracter;
	//alumno=nombre del alumno
	Escribir "Escribe el número de alumnos que fueron evaluados";
	//Se pide el número de alumnos
	Leer num;
	n=0;
	//Se inicia REPETIR
	Repetir
		Escribir "Escribe el nombre del alumno";
		//Se pide el nombre del alumno
	 	Leer alumno;
		
		Escribir "Escribe la calificación de ",alumno,":";
		//Se pide la calificación del alumno
		Leer cal;
		//Se aplican multiples SI
		Si cal > 90 Entonces
			Escribir "Calificación EXCELENTE";
		SiNo
			Si cal>75 Entonces
				Escribir "Calificación SATISFACTORIA";
			SiNo
				Si cal>65 Entonces
					Escribir "Calificación SUFICIENTE" ;
		        SiNo
					Si cal>60 Entonces
						Escribir "RECURSAMIENTO B";
					SiNo
						Si cal>50 Entonces
							Escribir "RECURSAMIENTO A";
						SiNo
							Si cal>30 Entonces
								Escribir "REPETICIÓN";
							SiNo
								Si cal>=0 Entonces
									Escribir "REPETICIÓN";
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
