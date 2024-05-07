#include <stdio.h>
#include <math.h>
int main(){

	int n,factorial=1;
	do{
		printf("Humano ingresa un numero mayor a 1:");
		scanf("%d",&n);
	}while(n<1);
	int i;
	for(i=1;i<=n;i++){
		factorial=factorial*i;
		printf("%d*",i);
	}
	printf("\nFactorial=%d\n",factorial);
	system("pause");
	return 0;

}

