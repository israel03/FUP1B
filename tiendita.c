#include<stdio.h> //libreria E/S
int N3;
int N1;
int N2;

int precio;

int main()
{//Inicio
	
	printf("seleccione una opción:\n1 = Ventas del dia\n2 = menú de venta\n");
	scanf("%d", &N3);
	switch(N3){
		case 1:
			 printf("\nGANANCIA DE:500");
		break;
		
		
		

		case 2:
	
	
		printf("La tiendita de Doña Yolis\n");
		printf("Pepsi $10= 1\nSabritas $12= 2\nCarlos V $7= 3\nMaruchan $6= 4\nJarrito $9= 5\nGalletas Emperador $9= 6\nBarritas Marinela $8= 7\nMazapan $2= 8\nCigarros sueltos c/u $4= 9\nFrutsi $6= 10\n");
		printf("Escriba el Número correspondiente al producto: \n");
		scanf("%d", &N1);
		printf("¿Cuántos deseas?:\n");
		scanf("%d", &N2);
		switch(N1){
			case 1: N1=10;
			precio=N1*N2;
			printf("Pepsi:\n");
			printf("Usted debe pagar: $%d", precio);
				break;
			case 2:N1=12;
			precio=N1*N2;
			printf("Sabritas:\nUsted debe pagar: $%d", precio);
				break;
				
			case 3:N1=7;
			precio=N1*N2;
			printf("Carlos V:\nUsted debe pagar: $%d", precio);
				break;
				
			case 4:N1=6;
			precio=N1*N2;
			printf("Maruchan:\nUsted debe pagar: $%d", precio);
				break;
				
			case 5:N1=9;
			precio=N1*N2;
			printf("Jarrito:\nUsted debe pagar: $%d", precio);
				break;
			
			case 6:N1=9;
			precio=N1*N2;
			printf("Galletas Emperador:\nUsted debe pagar: $%d", precio);
				break;
			
			case 7:N1=8;
			precio=N1*N2;
			printf("Barritas Marinela:\nUsted debe pagar: $%d", precio);
				break;
			
			case 8:N1=2;
			precio=N1*N2;
			printf("Mazapan:\nUsted debe pagar: $%d", precio);
				break;
			
			case 9:N1=4;
			precio=N1*N2;
			printf("Cigarro(s):\nUsted debe pagar: $%d", precio);
				break;
				
			case 10:N1=6;
			precio=N1*N2;
			printf("Frutsi:\nUsted debe pagar: $%d", precio);
				break;
			
		 	default: printf("No existe este articulo");	
		}
		break;

	} 
}//final
