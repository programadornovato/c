#include <stdio.h>
int suma(int,int);
void mostrarRes(int);
int main(){
	int resultado,num1,num2;
	printf("Humano dame el valor 1:");
	scanf("%d",&num1);
	printf("Humano dame el valor 2:");
	scanf("%d",&num2);
	resultado=suma(num1,num2);
	//printf("Suma=%d\n",resultado);
	mostrarRes(resultado);
	system("pause");
	return 0;
}
int suma(int n1,int n2){
	int res;
	res=n1+n2;
	return res;
}
void mostrarRes(int res){
	printf("El resultado=%d\n",res);
}
