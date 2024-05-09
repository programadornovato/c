#include <stdio.h>
int suma();
int main(){
	int resultado;
	resultado=suma();
	printf("Suma=%d\n",resultado);
	system("pause");
	return 0;
}
int suma(){
	int res,n1,n2;
	printf("Humano dame el valor 1:");
	scanf("%d",&n1);
	printf("Humano dame el valor 2:");
	scanf("%d",&n2);
	res=n1+n2;
	return res;
}
