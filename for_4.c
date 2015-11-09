#include<stdio.h>//Libreria de E/S
int N1;
int i;
int res;
int main()
{//Inicio
	printf("Programa que descompone una cantidad en sus digitos\n\n:");   
	printf("Introduce un numero de 4 o 5 o de 7 digitos:\n");   
	scanf("%d",&N1);
	while(N1!=0)
	for(i=1; i<=N1; i++)
	{res=N1%10;
	printf("Digito: %d\n",res);
	N1=N1/10;
	}
}//Fin
