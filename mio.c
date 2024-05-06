#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Humano dame un numero mayor a 1:");
		scanf("%d",&n);
	}while(n<=1);
	int i,suma=0;
	for(i=0;i<n;i++){
		printf("%d+",(i+1));
		suma=suma+(i+1);
	}
	printf("\nLa suma es:%d\n",suma);
	
	system("pause");
	return 0;

}

