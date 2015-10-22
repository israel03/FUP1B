#include <stdio.h> //libreria E/S
/*programa que permite sumar, restar, multiplicar y dividir dos números*/
int N1;
int N2;
int resultado;

int main()
{// Inicio
	
	printf("Introduzca el priimer número: ");
	scanf("%d", &N1);
	printf("Introduzca el segundo número: ");
	scanf("%d", &N2);
	resultado=N1+N2;
	printf("\n El resultado de la suma es: %d" , resultado);
	resultado=N1-N2;
	printf("\n El resultado de la resta es: %d" , resultado);
	resultado=N1*N2;
	printf("\n El resultado de la multiplicación es: %d" , resultado);
	resultado=N1/N2;
	printf("\n El resultado de la división es: %d" , resultado);
	
}
