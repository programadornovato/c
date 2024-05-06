#include <stdio.h>
int main(){
	int numero;
	do{
		printf("Humano escribe un numero entre 1 y 10:");
		scanf("%d",&numero);
		if(numero<=0 || numero>10){
			printf("Humano estupido te pedi un numero entre 1 y 10\n");
		}
	}while(numero<=0 || numero>10);
	printf("\n\n");
	int i;
	for(i=0;i<10;i++){
		printf("El valor de %d x %d es %d\n",i+1,numero,(i+1)*numero);
	}
	
	system("pause");
	return 0;

}

