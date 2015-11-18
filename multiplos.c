#include<stdio.h>

int vacio[10];
int i;
int num;

int main()
{
	printf("Programa que dice los primeros 10 multiplos de un numero:\n");
	printf("Introduzca un numero:\n");
	scanf("%d", &num);
	
	for(i=0;i<10;i++)
	{
		vacio[i]=num*(i+1);
		}
	printf("Los multiplos de %d son:\n", num);
	
	for(i=0;i<10;i++)
	{
		printf("%d\n",vacio[i]);
		}
		
	system("pause");	
	
}
