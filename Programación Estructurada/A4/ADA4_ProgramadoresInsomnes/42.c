#include <stdio.h>

/* 42. E.P. que lea las calificaciones del primer parcial de los N estudiantes de Programación Estructurada 
y que cuente e imprima, cuántos alumnos obtuvieron calificación mayor a 80.*/

int main () {
    
    int estudiante, nestudiantes, estudiantesa;
    estudiante = 1;

    float calif;

    //Entrada
    printf("Numero %i de estudiantes ", nestudiantes);
    scanf("%i",&nestudiantes);

    //Proceso
    do{
        printf("Calificación, alumno", estudiante);
        scanf("%d", &calif);
        estudiante = estudiante+estudiante

        if (calif>=80)
        {
            estudiantesa = estudiantesa+estudiantesa;
        };
        

    }while(estudiante<=nestudiantes)

    //Salida

    printf("El número %i de estudiantes que aprobaron con 80 o más es de: ", &estudiantesa);
	
	return 0;
}


