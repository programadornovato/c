#include <stdio.h>
int main(){
	int a,b,aux;
	printf("Humano ingresa estos valores:\n");
	printf("Valor de a:");
	scanf("%d",&a);
	printf("Valor de b:");
	scanf("%d",&b);
	//aux=10
	aux=a;
	//a=5
	a=b;
	//b=10
	b=aux;
	printf("Valor de a:%d\n",a);
	printf("Valor de b:%d\n",b);
	system("pause");
	return 0;

}

