#include <stdio.h>
#include <math.h>
int main(){
	char letra;
	regresa:
	printf("Humano ingresa una letra vocal\n");
	scanf("%c",&letra);
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Bien humano\n");
			break;
		default:
			printf("Humano tonto te pedi una vocal\n");
			goto regresa;
			break;
	}
	
	system("pause");
	return 0;

}

