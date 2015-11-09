#include<stdio.h>
int final,i;
int main()
{
	printf("Programa que imprime numeros anteriores al que escribiste:\n");
	printf("Escribe un numero:\n");
	scanf("%d",&final);
	for(i=1;i<=final;i++)
	{
		printf("%d\n",i);
	}
	
	system("pause");
}
