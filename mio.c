#include <stdio.h>
#include <math.h>
int main(){
	int numero;
	printf("Humano escribe un numero entero\n");
	scanf("%d",&numero);
	if(numero%2==0){
		printf("El numero es par\n");
	}
	else{
		printf("El numero es impar\n");
	}
	system("pause");
	return 0;

}

