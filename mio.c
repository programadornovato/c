#include <stdio.h>
int retornaMulti(int,int);
void muestraMulti(int,int);
int main() {
	int d1,d2;
	printf("Dato 1:");
	scanf("%d",&d1);
	printf("Dato 2:");
	scanf("%d",&d2);
	int res=retornaMulti(d1,d2);
	printf("La multiplicacion es %d\n",res);
	muestraMulti(d1,d2);
    system("pause");
    return 0;
}

int retornaMulti(int n1,int n2){
	/*
	int res;
	res=n1*n2;
	return res;
	*/
	return n1*n2;
}
void muestraMulti(int n1,int n2){
	/*
	int res;
	res=n1*n2;
	printf("La multiplicacion es %d\n",res);
	*/
	printf("La multiplicacion es %d\n",n1*n2);
}
