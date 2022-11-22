#include <stdio.h>

/* EJERCICIO 34
36. E.P. que lea 50 números y que cuente e imprima cuantos son negativos. 
Autor: Programadores Insomnes
Version: 1.0
Fecha: 13/02/2022*/

int main(){
    int cont_cic, cont_neg; // cont_cic es el contador de cuántos ciclos van; cont_neg es el contador de números negativos
    float num;
    cont_cic = 1;
    cont_neg = 0;
    // PROCESO
    while (cont_cic <= 50){
        // ENTRADA
        printf("Ingrese un numero (ciclo #%d de 50)\n", cont_cic);
        scanf("%f", &num);
        if (num < 0){
            cont_neg++; // si el número ingresado es negativo, se sumará 1 al contador de números negativos
        }
        cont_cic++;
    }
    // SALIDA
    if (cont_neg == 1){
        printf("Se registro un numero negativo."); // Si solo se ingresó uno negativo, imprimirá esto
    }
    else{
        printf("Se registraron %d numeros negativos.", cont_neg); // Si es 0 o cualquier otro entero (menos 1), se imprimirá este texto.
    }
}