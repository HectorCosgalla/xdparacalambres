#include <stdio.h>
#include <stdlib.h>
/* 50. E.P. que lea un vector de 50 elementos y los imprima.*/

int main() {
	
	int array[5],i;
	i=0;
	while (i<5){
		printf("Ingresa el no. no. %d",i+1);
		scanf("%d",&array[i]);
		i++;	
	}
	while (i<5){
	printf("%d",array[5]);
	i++;
	}
	return 0;
}

