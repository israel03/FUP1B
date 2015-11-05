#include<stdio.h>
#include<conio.h>

int e,r,t,u,d,c,m;

int main()
{
	
	printf("Programa que indica, unidades, decenas, centenas y unidades de millar de un número\n");
	printf("Escriba el Número\n");
	scanf("%d", &e);
	
	
	u= e % 10;
	printf("La cantidad de unidades es: %d\n", u);
	
	r= e - u;
	r = r % 100;
	d= r/ 10;
	printf("La cantidad de decenas es: %d\n", d);
	
	r= e - d*10- u;
	t= r %1000;
	c=(t/10)/10;
	printf("La cantidad de centenas es:%d\n",c);
	
	r= e-d*10 - c*10 - u;
	m= r /1000;
	printf("La cantidad de unidades de millar es:%d\n",m);
	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	

