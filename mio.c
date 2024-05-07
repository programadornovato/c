#include <stdio.h>
#include <math.h>
int main(){
	
	int numero,suma=0;
	do{
		printf("Humano ingresa un numero, si es 0 o esta en un rango de 100 a 200 se cerrara el programa: ");
		scanf("%d",&numero);
		suma=suma+numero;
		printf("Tu pinche suma es:%d\n",suma);
	}while( (numero < 100 || numero > 200 ) && (numero!=0) );
	
	system("pause");
	return 0;

}

