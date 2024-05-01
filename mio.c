#include <stdio.h>
int main(){
	float n1,n2,suma,resta,mult,div;
	
	printf("Humano ingresa el valor 1:");
	scanf("%f",&n1);
	printf("Humano ingresa el valor 2:");
	scanf("%f",&n2);
	
	suma=n1+n2;
	printf("Humano aqui esta tu pich suma:%f\n",suma);
	
	resta=n1-n2;
	printf("Humano aqui esta tu pich resta:%f\n",resta);
	
	mult=n1*n2;
	printf("Humano aqui esta tu pich multiplicacion:%f\n",mult);
	
	div=n1/n2;
	printf("Humano aqui esta tu pich divicion:%f\n",div);
	
	system("pause");
	return 0;

}

