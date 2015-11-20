#include<stdio.h>


int i,promedio;
int cal[10];
int suma= 0;

int main()
{

printf("Programa que calcula el promerdio de 10 calificaciones\n");


    
	for (i=0;i<10;i++)
    {
	printf("Inserta calificacion\n");
    scanf("%d",&cal[i]);
    suma+=cal[i];
    }
    
    printf("\nSUMA DE TUS CALIFICACIONES:\n%d",suma);
    promedio=suma/10;
    printf("\nPROMEDIO:%d\n",promedio);


  
	system("\npause");    
}

    
