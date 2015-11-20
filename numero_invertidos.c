#include <stdio.h>

int numero[10];
int orden;
int i=0;

int main()
{
	printf("Programa que imprime los numero ingresados en orden contrario\n");
	
	for(i=0;i<10;i++){
		printf("Introduzca un numero:\n");
		scanf("%d",&numero[i]);	
	}
	for(i=9;i>-1;i--)
	{
		
		printf("El orden es el siguiente:%d\n",numero[i]);
		
		}

	system("pause");
	 

	
	
	
}
	
	
	

