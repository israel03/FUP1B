#include<stdio.h>
int N1, N2, opp, i;
main()
{
	printf("Programa que multiplica con sumas sucesivas\n");
	printf("Introduce el primer numero: ");
	scanf("%d",&N1);
	printf("Introduce el segundo numero: ");
	scanf("%d",&N2);
	opp=0;
	for(i=1;i<=N2;i++)
		{
			opp=opp+N1;
		}
	printf("El resultado es: %d\n",opp);
	
	system("pause");
}
