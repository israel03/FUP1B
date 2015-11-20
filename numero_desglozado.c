#include<stdio.h>

int N1;
int aux;
int i;

int main()
{

	printf("Programa que imprime de nuevo el mismo numero\n");
	printf("Introduzca \n");
	scanf("%d", &N1);
	aux=1;
	while(aux<=N1)
{
	i=1;
	while(i<=aux)

	{
		printf("%d",aux);
		i++;
	}
	printf("\n");
	aux++;
	}
	system("pause");	
}
