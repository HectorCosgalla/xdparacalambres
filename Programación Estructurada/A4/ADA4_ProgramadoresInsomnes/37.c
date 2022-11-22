#include <stdio.h>
/* 37. E.P. que lea 100 números y que cuente e imprima cuantos son
positivos.
Autor: Programadores Insomnes
Version: 1.0
Fecha: 13/02/2022*/
int main(){
    // Declaración de variables
    float num; // Se ingresan los números en esta variable
    int cont_cic, cont_pos; // cont_cic es el contador de ciclos (sirve para saber cuántos números van); cont_pos contador de números positivos
    cont_cic = 1;
    cont_pos = 0;
    // PROCESO
    while (cont_cic <= 100){
        // ENTRADA
        printf("Ingrese un numero (ciclo #%d de 100\n", cont_cic);
        scanf("%f", num);
        if (num > 0){
            cont_pos++; // Si el número ingresado es mayor a cero, se sumará 1 al contador de num. positivos
        }
    }
    // SALIDA
    printf("Se leyeron %d numeros positivos.", cont_pos);
}