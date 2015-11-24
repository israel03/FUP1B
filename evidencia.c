#include <stdio.h>

int numero;
int n[10];
int i;
int w;
int total;

int main()
{
	printf("Programa que calcula el numero binario de un numero decimal\n");
	printf("Introduzca un número\n");
	scanf("%d",&numero);
	
if(numero>=1){

	for(i=0;i<10;i++)
	{
		n[i]=numero%2;
		numero=numero/2;
		if(numero==0)
		break;
		}

	for(w=i;w>=0;w--){
		printf("El resultado es:\n%d\n",n[w]);
	}
		
}
else{
	if(numero<=1)
	printf("Ingrese un numero del 1 en adelante\n");
}	
	
	system("pause");
	
}
