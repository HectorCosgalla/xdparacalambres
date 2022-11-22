#include <stdio.h>
/* 1. Se desea realizar una encuesta a 45 estudiantes, E.P. que lea el mes nacimiento de cada alumno (usando números del 1 al 12) 
y determine ¿cuántos nacieron en el primer semestre del año y cuántos en el segundo semestre?. 
Además, debe validar que el número introducido, corresponda a un mes; por ejemplo, no se acepta 13 como mes.
Si el mes es incorrecto debe solicitarlo nuevamente hasta aplicar 45 encuestas válidas. */

int main(){
    int cont_alum, mes, cont_sm1, cont_sm2;
    cont_alum = 1;
    cont_sm1 = 0;
    cont_sm2 = 0;
    // PROCESO
    while (cont_alum <= 45){
        printf("Estudiante #%d, ingresar mes de nacimiento:\n", cont_alum);
        scanf("%d", &mes); // ENTRADA DE VALORES (en qué mes nace N estudiante)
        if (mes > 12 || mes < 1){
            while (mes > 12 || mes < 1){ // Si el valor ingresado no se encuentra dentro del intervalo permitido, se repetirá hasta lo contrario
                printf("Estudiante #%d, ingresar un valor permitido (1-12):\n", cont_alum);
                scanf("%d", &mes);
            }
        }
        else{
            if (mes <= 6){
                ++cont_sm1;
            }
            else{
                ++cont_sm2;
            }
        }
        ++cont_alum;
    }
    // SALIDA (se imprime cuántos estudiantes nacieron en cada mitad del año)
    printf("%d estudiantes nacieron en el primer semestre del anno; %d en el segundo.", cont_sm1, cont_sm2);
}

/*
El programa funciona correctamente, solo permite numeros enteros para el mes ademas de que solo acepta numeros del 1 al 12, igualmente 
se encuentra bien comentado y se entiende todo el proceso y division del programa. a pesar de que no pasa nada si no se pone "return 0"
a final del programa, seria buena idea tenerlo en cuenta ya que se considera parte de una buena practica de programacion, igualmente se puede
agregar una libreria para poder leer puntuaciones  para poder leer la letra � en la palabra a�o.

Revisado por Jes�s Oswaldo Chan Uicab.
*/
