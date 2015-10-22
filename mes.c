#include <stdio.h> //libreria E/S

int meses;



int main()

{//inicio
	
	printf("Escriba el número de mes que quiera conocer\n");
	scanf("%d", &meses);
	
 switch(meses){
 
 	 case 1:{	
 	 		printf("Es el mes de Enero");
 	 		break;
 	 	} 
 	case 2:{
 			printf("Es el mes de Febrero");
 			break;
 		}
 	case 3:
 		{
 			printf("Es el mes de marzo");
 			break;
 		}
	case 4:
 		{
 			printf("Es el mes de Abril");
 			break;
 		}
 	case 5:
 		{
 			printf("Es el mes de Mayo");
 			break;
 		}
 	case 6:{
 			printf("Es el mes de Junio");
 			break;
 		}
 	case 7:{
 			printf("Es el mes de Julio");
 			break;
 		}
 	case 8:
 		{
 			printf("Es el mes de Agosto");
 			break;
 		}
 	case 9:
 		{
 			printf("Es el mes de Septiembre");
 			break;
 		}
 	case 10:
 		{
 			printf("Es el mes de Octubre");
 			break;
 		}
 	case 11:
 		{
 			printf("Es el mes de Noviembre");
 			break;
 		}
 	case 12:
 		{
 			printf("Es el mes de Diciembre");
 			break;
 		}
 	default: 
 	{
 		printf("No es un mes");
 		break;
 	}
 	
 	
 	}
	
	
	
}//fin 
