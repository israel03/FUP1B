#include<stdio.h>
int total;
int a;
int b;
int main()
{//inicio
printf("Programa que imprime numeros en forma de piramide:\n ");
printf("Dame un numero:\n");
scanf("%d",&total);
for(a=1; a<=total; a++)
{
	for(b=1; b<=a; b++)
	{
		printf("%d"" ",a);
    }
    printf("\n");
}
}//fin
