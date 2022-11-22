#include <stdio.h>

/* EJERCICIO 34
35 E.P. que lea 25 números (N) y que imprima los que sean iguales a cero. 
Autor: Programadores Insomnes
Version: 1.0
Fecha: 13/02/2022*/

int main(){
    int cont; // contador de ciclos
    float num;
    cont = 1;
    // PROCESO
    while (cont <= 25){
        // ENTRADA
        printf("Ingrese un numero (ciclo #%d de 25)\n", cont); // Habrá 25 iteraciones, cada vez indicando cuál es
        scanf("%f", &num);
        // SALIDA
        if (num == 0){
            printf("Este numero es igual a cero\n"); // Si es igual a cero, se imprimirá este texto
        }
        cont++;
    }
}