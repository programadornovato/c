#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
	int n,aleatorio,contador=0;
	srand(time(NULL));
	aleatorio= 1 + rand() % 100;
	do{
		printf("Humano que numero estoy pensando entre 1 y 100 (%d):",aleatorio);
		scanf("%d",&n);
		if(n<aleatorio){
			printf("Humano estupido tu numero es menor\n");
		}
		if(n>aleatorio){
			printf("Humano estupido tu numero es mayor\n");
		}
		contador++;
	}while(n!=aleatorio);
	printf("Felicidades Humano pero te equivocaste %d veces\n",contador);
	
	system("pause");
	return 0;

}

