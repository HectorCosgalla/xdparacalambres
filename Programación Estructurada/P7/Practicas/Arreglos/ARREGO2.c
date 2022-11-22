#include <stdio.h>

int main() {
	int array[10]= {3,56,1,35,67,87,0,1092,212,2131};
	int mayor=0;
	for (int i=0;i<10; i++){
		if(array[i]>array[mayor]){
			mayor=i;
		}
	}
	printf("\nEl elemento de mayor valor en el arreglo es: %d",array[mayor]);
	printf("\n\nY está en la posición: %d",mayor);
	return 0;
}

