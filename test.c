#include <stdio.h>  //libreria E/S
int num;
int num2;
int num3;


int main()
{//inicio
	printf("Programa que ordena 3 Números de mayor a menor\n");
	printf("Introduzca primer numero\n");
	scanf("%d", &num);
 	printf("Introduzca el segundo número numero\n");
 	scanf("%d", &num2);
 	printf("Introduzca el tercer número\n");
 	scanf("%d", &num3);
 	printf("El orden es el siguiente:\n");
	if(num>num2 && num>num3)
	{
	
		printf("%d\n",num);
		if (num2<num && num2>num3)
		{
		printf("%d\n",num2);
		printf("%d\n", num3);
			}
		else
		{
		 if (num3<num && num3>num2)
		 {
			printf("%d\n", num3);
			printf("%d\n", num2);	
				
				}
			}
 	}
	else
	{
		if(num2>num && num2>num3)
		{
		printf("%d\n",num2);
		if (num<num2 && num>num3)
		{
		printf("%d\n",num);
		printf("%d\n",num3);
			}
		else
		{
		 if (num3<num2 && num3>num)
		 {
			printf("%d\n", num3);
			printf("%d\n", num);	
				
				}
			}
			
			
			}
			
			
		else
	{
		if(num3>num && num3>num2)
		{
		printf("%d\n",num3);
		if (num<num3 && num>num2)
		{
			printf("%d\n",num);
			printf("%d\n",num2);
			}
		else
		{
		 if (num2<num3 && num2>num)
		 {
			printf("%d\n",num2);
			printf("%d\n",num);	
				
				}
			}
			
			
			}
		}	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		}
		
		
	
	
	
	
	
}//fin
	
	
	
	
	



