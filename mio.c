#include <stdio.h>
#include <math.h>
int main(){
	int valor;
	regresar:
	printf("Humano escribe un numero entre 1 y 5\n");
	scanf("%d",&valor);
	switch(valor){
		case 1:
			printf("Precionaste el numero uno\n");
			break;
		case 2:
			printf("Precionaste el numero dos\n");
			break;
		case 3:
			printf("Precionaste el numero tres\n");
			break;
		case 4:
			printf("Precionaste el numero cuatro\n");
			break;
		case 5:
			printf("Precionaste el numero cinco\n");
			break;
		default:
			printf("Humano estupido te pedi un numero entre 1 y 5\n");
			goto regresar;
			break;
	}
	
	
	
	system("pause");
	return 0;

}

