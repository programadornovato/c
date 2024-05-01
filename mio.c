#include <stdio.h>
int main(){
	char sexo[10];
	int edad;
	float estatura;
	
	printf("Humano dame tu sexo:");
	scanf("%s",sexo);
	printf("Humano dame tu edad:");
	scanf("%d",&edad);
	printf("Humano dame tu estatura:");
	scanf("%f",&estatura);
	
	printf("HUMANO AQUI ESTAN TUS PINCHES DATOS\n");
	printf("Sexo:%s\n",sexo);
	printf("Edad:%d\n",edad);
	printf("Estatura:%f\n",estatura);
	
	system("pause");
	return 0;

}

