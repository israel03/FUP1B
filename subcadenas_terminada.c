#include<stdio.h>
char cadena[50];
char subcadena[50];
int j=0;
int i=0;

int main()

{	
	printf("Programa que busca una subcadena de una palabra:\n");
	printf("\nIngreza la palabra:\n");
	scanf("%s",cadena);
	printf("Ingreza la subcadena que deseas buscar:\n");
	scanf("%s",subcadena);

		while(cadena[i]!='\0'){
		while(cadena[i]==subcadena[j]){
			
			i++;
			j++;
			if(subcadena[j]=='\0'){
			
			printf("\nESTA CADENA SI EXISTE");
			return 0;
			}
		}
		
		i++;
		j=0;
		if('\0'==cadena[i]){
		printf("\nESTA CADENA NO EXISTE");
		break;
		}
	

}

}

