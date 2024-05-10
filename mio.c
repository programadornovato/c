#include <stdio.h>
void cambiaValor(int*,int*);
int main(){
	int val1,val2;
	printf("Valor 1:");
	scanf("%d",&val1);
	printf("Valor 2:");
	scanf("%d",&val2);
	
	printf("Valor 1:%d\n",val1);
	printf("Valor 2:%d\n",val2);
	
	cambiaValor(&val1,&val2);
	printf("\n");
	printf("Valor 1:%d\n",val1);
	printf("Valor 2:%d\n",val2);
	
    system("pause");
    return 0;
}
void cambiaValor(int* n1,int* n2){
	*n1=5;
	*n2=6;
	
}

