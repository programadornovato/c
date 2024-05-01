#include <stdio.h>
int main(){
	
	float a,b,c,d,e,f,res;
	printf("Humano por favor ingresa estos datos:\n");
	printf("Valor de a:");
	scanf("%f",&a);
	printf("Valor de b:");
	scanf("%f",&b);
	printf("Valor de c:");
	scanf("%f",&c);
	printf("Valor de d:");
	scanf("%f",&d);
	printf("Valor de e:");
	scanf("%f",&e);
	printf("Valor de f:");
	scanf("%f",&f);

	res=(a+(b/c)) / (d+(e/f));
	printf("Humano este es el resltado:%.2f\n",res);
	system("pause");
	return 0;

}

