#include <stdio.h>

char cadena[20];
int i;
int car;
int cer;

int main()
{
	printf("Programa que cambia un caracter de una palabra\n\n");
	printf("Escriba la palabra:\n\n");
	scanf("%s",cadena);
	printf("Escriba la letra que desea cambiar de la palabra:\n\n");
	scanf("%s",&car);
	printf("Escriba por cual letra desea cambiarla:\n\n");
	scanf("%s",&cer);
	for(i=0;cadena[i]!=' ';i++)
	{
		if(cadena[i]==car)
		{
			cadena[i]=cer;
		}
	}
	printf("La palabra queda asi:\n%s",cadena);
	
}

