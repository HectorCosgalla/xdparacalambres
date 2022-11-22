Algoritmo Matriz_estudiantes
	Definir matriz_datos, j, i, contador_promedio, promedio, promedio_grupal Como Real;
	Escribir "Escribe el número de alumnos que hay";
	leer n;
	Dimension matriz_datos[n,3];
	Dimension promedio[n];
	
	Para i<-1 Hasta n Con Paso 1 Hacer
		Para j <- 1 Hasta 3 Con Paso 1 Hacer
			si j <= 1 Entonces
				Escribir"Escribe el la calificación de la prueba",j, "del alumno ",i;
				matriz_datos[i,j] = azar(100);
			SiNo
				Escribir"Escribe el la calificación del proyecto del alumno ",i;
				matriz_datos[i,j] = azar(100);
			FinSi
		Fin Para
	Fin Para
	
	Para i<-1 Hasta n Con Paso 1 Hacer
		contador_promedio = 0;
		Para j <- 1 Hasta 3 Con Paso 1 Hacer
			contador_promedio = contador_promedio + matriz_datos[i,j];
		Fin Para
		contador_promedio = contador_promedio/3;
		promedio[i] = contador_promedio;
	Fin Para
	
	promedio_grupal = 0;
	Para i <- 1 Hasta n Con Paso 1 Hacer
		promedio_grupal = promedio_grupal + promedio[i];
	Fin Para
	promedio_grupal = promedio_grupal/n;
	
	Para i <- 1 Hasta n Con Paso 1 Hacer
		si promedio[i] >= 70 Entonces
			Escribir "El alumno ", i, "aprobo", promedio[i];
			si promedio[i] > promedio_grupal Entonces
				Escribir "El alumno esta por encima del promedio su promedio es de ", promedio[i];
				
			FinSi
		sino
			Escribir "El alumno repprobo", promedio[i];
		FinSi
	Fin Para
	
FinAlgoritmo
