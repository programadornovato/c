#include <stdio.h>
#include <math.h>
int main(){
	float x,y,res,yAlcuadradoMenos1;
	ingresaNuevo:
	printf("Humano ingresa el valor de x:");
	scanf("%f",&x);
	printf("Humano ingresa el valor de y:");
	scanf("%f",&y);
	yAlcuadradoMenos1=(pow(y,2)-1);
	if(yAlcuadradoMenos1==0){
		printf("Humano estupido y al cuadrado menos 1 no puede ser 0 intentalo de nuevo\n");
		goto ingresaNuevo;
	}
	else{
		res= (sqrt(x)) / yAlcuadradoMenos1;
		printf("Humano aqui esta tu chingadera:%.2f\n",res);
	}
	system("pause");
	return 0;

}

