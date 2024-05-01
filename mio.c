#include <stdio.h>
#include <math.h>
int main(){
	float x,y,res;
	printf("Humano ingresa el valor de x:");
	scanf("%f",&x);
	printf("Humano ingresa el valor de y:");
	scanf("%f",&y);
	res= (sqrt(x)) / (pow(y,2)-1);
	printf("Humano aqui esta tu chingadera:%.2f\n",res);
	system("pause");
	return 0;

}

