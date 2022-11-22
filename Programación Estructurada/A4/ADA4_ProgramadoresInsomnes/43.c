#include <stdio.h>

int N, Cnegativos, Cpositivos;
Cpositivos = 0;
Cnegativos = 0;

float numero;

// 43. E.P. que lea 250 números y que determine e imprima cuantos son positivos y cuantos son negativos.

int main (){

    printf("Números %i", &N);
    scanf("%i", &N);

    do{

        scanf("Escriba un número%i", &numero);
        printf("%d", &numero)

        if (numero>0){
            Cpositivos = Cpositivos+1;
        }
        else {
            Cnegativos = Cnegativos+1;
        }

    }while (Cnegativos+Cpositivos<=N)

    printf("El total de números negativos es: %i", &Cnegativos);
    printf("El total de números positivos es: %i", &Cpositivos)

    return 0;

}



