#include <stdio.h>
#include <math.h>
int main(){
	int numeroEncontrar=5,numeroHumano;
	
	printf("Humano ingresa el numero que estoy pensando\n");
	scanf("%d",&numeroHumano);
	if(numeroHumano==numeroEncontrar){
		printf("Bien jugado humano\n");
	}
	else{
		printf("Humano tonto\n");
	}
	system("pause");
	return 0;

}

