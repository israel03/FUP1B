
#include<stdio.h>//libreria e/s
	/* Programa para conersión de unidades de almacenamiento */
	//Arnulfo israel ortiz díaz
	float operacion1; 
	float operacion2;  
	float operacion3; 
	float operacion4; 
	float operacion5;
	float N1;

int main()
{// inicio
    
	
    printf("\n Escriba el número de MB que desea convertir ");
	scanf("%f",&N1);
	operacion1=N1*8388608;
	operacion2=N1*1048576;
	operacion3=N1*1024;
	operacion4=N1/1024;
	operacion5=N1/1024/1024;

	printf("\n La cantidad de bits es: %f", operacion1);
	printf("\n La cantidad de bytes es: %f", operacion2);
	printf("\n La cantidad de kb es:%f", operacion3);
	printf("\n La cantidad de gb es: %f", operacion4);
	printf("\n La cantidad de tb es: %f", operacion5);
	
	
	


}// fin
 

	

