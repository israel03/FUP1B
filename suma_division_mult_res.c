#include <stdio.h> //libreria E/S
/*programa que permite sumar, restar, multiplicar y dividir dos n�meros*/
int N1;
int N2;
int resultado;

int main()
{// Inicio
	
	printf("Introduzca el priimer n�mero: ");
	scanf("%d", &N1);
	printf("Introduzca el segundo n�mero: ");
	scanf("%d", &N2);
	resultado=N1+N2;
	printf("\n El resultado de la suma es: %d" , resultado);
	resultado=N1-N2;
	printf("\n El resultado de la resta es: %d" , resultado);
	resultado=N1*N2;
	printf("\n El resultado de la multiplicaci�n es: %d" , resultado);
	resultado=N1/N2;
	printf("\n El resultado de la divisi�n es: %d" , resultado);
	
}
