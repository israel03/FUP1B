
#include<stdio.h>

//Libreria de E/S
/*total de cuenta con todo y propina y que tanto le toca a cada persona */

int operacion1;
int operacion2;
int operacion3;
int N1;
int main()
{
   float N1,operacion1,operacion2,operacion3;
   printf("Escribe el total de la cuenta:");
   scanf("%f",&N1);
   operacion1=N1*0.10;
   operacion2=N1+operacion1;
   operacion3=operacion2/15;
   printf("\nEl total de propina es:%f",operacion1);
   printf("\nEl total de la cuenta es:%f",operacion2);
   printf("\nEl total que le toca a cada persona:%f",operacion3);
}

