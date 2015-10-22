#include <stdio.h> //Libreria E/S
// Programa de lavadora
//Arnulfo Israel Ortiz Díaz


int kilos;
int tipo;

int main()
{
	printf("Programa que deduce el tiempo, tipo y forma de lavado de ropa\n");
	printf("Por favor introduzca el número de kg de ropa\n");
	scanf("%d", &kilos);
	
		if(kilos>21)
	{
		printf("no se  puede lavar");
		return 0;
		}
		else if (kilos<=10)
 		printf("nivel bajo de agua");

			
		else if (kilos<=15)
		{
 		printf("nivel medio de agua");
		
		}	
			
		else if (kilos<=20)
		{
 		printf("nivel alto de agua");
		
		}
		
	
	printf("\nEscriba el número correspondiente, dependiendo el ciclo de lavado\nCiclo delicado= 1\nCiclo de lavado normal= 2\nCiclo de lavado sucia= 3\n");
	scanf("%d", &tipo);
	switch (tipo){
		case 1:
			printf("Tardara 5 minutos");
		break;
		case 2:
			printf("Tardara 10 minutos");
		break;
		case 3:
			printf("Tardara 20 minutos");
		break;
		
		default:printf("No existe opción");
	}
			
}
					

				
		
		
	


		
	
	  
	
	
	

