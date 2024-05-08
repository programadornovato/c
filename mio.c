#include <stdio.h>
int main(){
	int longitud=0;
	char texto[11];
	regresa:
	printf("Humano ingresa un texto de minimo 10 letras:");
	fgets(texto,sizeof(texto),stdin);
	texto[strcspn(texto, "\n")] = 0;
	longitud=strlen(texto);
	if(longitud>=10){
		printf("Bien hecho humano, ahora dame la patita\n");
	}else{
		printf("Humano tonto\n");
		goto regresa;
	}
	system("pause");
	return 0;

}

