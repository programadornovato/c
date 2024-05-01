#include <stdio.h>
int main(){
	float a,b,res;
	printf("Humano por favor ingrea estos datos:\n");
	printf("Valor de a:");
	scanf("%f",&a);
	printf("Valor de b:");
	scanf("%f",&b);
	//exp,*,/,+,-
	res=a/b+1;
	printf("Aqui esta tu pinche resultado %.2f\n",res);
	system("pause");
	return 0;

}

