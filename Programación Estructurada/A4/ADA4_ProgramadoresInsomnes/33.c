#include <stdio.h>

/* EJERCICIO 33
E.P. que lea 10 números (N) y que determine e imprima los que
sean mayores a 100. 
Autor: Programadores Insomnes
Version: 1.0
Fecha: 13/02/2022*/

int main(){
    int cont; // Contador
    float num;
    cont = 1;
    // PROCESO
    while (cont <= 10){
        // ENTRADA
        printf("Ingrese un numero (ciclo #%d de 10)\n", cont); // Habrá 10 iteraciones
        scanf("%f", &num);
        if (num > 100){
            printf("Este numero, %f, es mayor a 100.\n", num); // SALIDA
        }
        cont++;
    }
}