#include <stdio.h> //Librreria E/S

int num = 2;
int num2 = 1;
int opp;

int main ()
{
	printf("Programa que suma los números anteriores al indicado ");
	printf("Escriba el número deseado:\n");
	scanf("%d", &opp);
	while(num<=opp)
	{
		num2=num + num2;
		num= num+1;
	
		}
	printf("%d", num2); 
	
	
	
	
	
	
}
