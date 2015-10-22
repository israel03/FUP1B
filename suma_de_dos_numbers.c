#include <stdio.h> //libreria de E/S
/* programa que realiza la suma de dos números*/
int N1;
int N2;
int resultado;

int main()
{//INICIO
	printf("Introduzca primer número: \n");
	scanf("%d", &N1);
	printf("Introduzca el segundo número: \n");
	scanf("%d", &N2);
	resultado= N1+N2;
	printf("Su resultado es:%d " , resultado);
	
	
	
}//FIN
