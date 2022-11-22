#include <stdio.h>

/* EJERCICIO 34
E.P. que lea 100 números (N) y que los imprima. 
Autor: Programadores Insomnes
Version: 1.0
Fecha: 13/02/2022*/

int main(){
    int cont; // Contador de iteraciones
    float num;
    cont = 1;
    // PROCESO
    while (cont <= 100){ // Habrá 100 iteraciones
        // ENTRADA
        printf("Ingrese un numero (ciclo #%d de 100)\n", cont);
        scanf("%f", &num);
        printf("NUMERO: %.3f\n", num); // SALIDA; imprimirá cada número con tres decimales
        cont++;
    }
}