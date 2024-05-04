#include <stdio.h>
#include <math.h>
int main(){
	int edad;
	printf("Humano dame la edad del postulante:");
	scanf("%d",&edad);
	if(edad >= 18 && edad <= 40 ){
		printf("La persona es apta para trabajar en nuestra empresa\n");
	}else{
		printf("La persona no es apta para trabajar en nuestra empresa\n");
	}
	
	system("pause");
	return 0;

}

