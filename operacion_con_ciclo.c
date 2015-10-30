#include <stdio.h> //Libreria E/S




int main()

	
{
	char opp;
	opp='s';
	int N1, N2, resultado;
	
	
	
	
	do{
	
	printf("Programa que realiza operaciones basicas de dos números\n");
	printf("Introduzca el primer número: ");
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
	printf("\n¿Desea realizar otra operacion?");
	printf("\nEscriba s = si o n = no\n");
	scanf("%s", &opp);
	}
    
while(opp=='s');
getchar();
system("PAUSE");	
}
