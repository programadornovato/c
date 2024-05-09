#include <stdio.h>
int n1,n2;
void pideNumeros();
void mustraResultado();
int main() {
	pideNumeros();
	mustraResultado();
	system("pause");	
    return 0;
}

void pideNumeros(){
	printf("Humano ingresa el valor 1:");
	scanf("%d",&n1);
	printf("Humano ingresa el valor 2:");
	scanf("%d",&n2);
}
void mustraResultado(){
	int res;
	res=n1+n2;
	printf("La suma de %d + %d = %d\n",n1,n2,res);
}
