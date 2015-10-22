#include <stdio.h> //libreria E/S
/* programa que dice si aprobaste o reprobaste la materia*/

int calif;

int main()
{//Inicio
	printf("Escriba su calificación obtenida\n");
	scanf("%d", &calif);
	if(calif>=7)
	{
		printf("Haz aprobado");
		}
	else
	{
		printf("Haz reprobado");
		}
	
	
}//Fin
