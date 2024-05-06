#include <stdio.h>
int main(){
	char letra;
	do{
		printf("Humano escribe la letra a:");
		scanf(" %c",&letra);		
	}while(letra!='a');
	printf("Muy bien Humano\n");
	system("pause");
	return 0;

}

