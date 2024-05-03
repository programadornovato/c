#include <stdio.h>
#include <math.h>
int main(){
	int n1,n2;
	printf("Ingresa el valor del numero 1\n");
	scanf("%d",&n1);
	printf("Ingresa el valor del numero 2\n");
	scanf("%d",&n2);
	
	if(n1==n2){
		printf("Los 2 numeros son iguales\n");
	}
	else if(n1>n2){
		printf("El numero 1 es mayor al numero 2\n");
	}
	else{
		printf("El numero 2 es mayor al numero 1\n");
	}
	
	system("pause");
	return 0;

}

