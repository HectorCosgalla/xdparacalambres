#include <stdio.h>
#define BREAKMATH printf("Console says: KABOOOM!!!\n")
/*agregar con fracciones
suma (n1*d2+d1*n2)/(d1*d2)
resta (n1*d2-d1*n2)/(d1*d2)
division (n1*d2)/(d1*n2)
multiplicacion (n1*n2)/(d1*d2)

simplificar y validacion 
Simplificacion:
Denominadores y numeradores del resultado divisibles entre
2,3,5,7,9,11... al mismo tiempo ambos

Validacion:
denominador no pueda ser 0

*/

struct racional {
private:
	int numerador;
	int denominador;
public:
	void imprimir();
	void asignar(int n, int d);
	racional sumarRacionales(racional b);
	racional restarRacionales(racional b);
	racional dividirRacionales(racional b);
	racional multiplicarRacionales(racional b);
};

racional racional::sumarRacionales(racional b){
	racional r2;
	r2.numerador = (numerador * b.denominador) + (denominador * b.numerador);
	r2.denominador = denominador * b.denominador;
	
	return r2;
}

racional racional::restarRacionales(racional b){
	racional r2;
	r2.numerador = (numerador * b.denominador) - (denominador * b.numerador);
	r2.denominador = denominador * b.denominador;
	
	
	return r2;
}

racional racional::dividirRacionales(racional b){
	racional r2;
	r2.numerador = (numerador * b.denominador);
	r2.denominador = (denominador * b.numerador);
	
	return r2;
}

racional racional::multiplicarRacionales(racional b){
	racional r2;
	r2.numerador = (numerador * b.numerador);
	r2.denominador = (denominador * b.denominador);
	
	return r2;
}

void racional::imprimir() {
	if(denominador!=0){
		printf(" %d/",numerador);
		printf("%d \n",denominador);
	}
	else if ((denominador == 0) && (denominador ==0 && numerador)){     //Validar el denominador sea 0
		BREAKMATH;}
}

void racional::asignar(int n, int d) {
	numerador= n;
	denominador=d;
}


int main() {
	racional r, x,y,z,a,r2,resultSuma,resultResta,resultDivision,resultMultiplicacion;
	r.asignar(1,2);
	r2.asignar(1,2);
	r.imprimir();
	r2.imprimir();
	r.sumarRacionales(x);
	r.restarRacionales(y);
	r.dividirRacionales(z);
	r.multiplicarRacionales(a);
	
	printf("\n El resultado de la suma es: \n");
	printf("%d \n",x);
	printf("El resultado de la resta es: \n");
	printf("%d \n",y);
	printf("El resultado de la division es: \n");
	printf("%d \n",z);
	printf("El resultado de la multiplicacion es: \n");
	printf("%d \n",a);
	
} ///:~
