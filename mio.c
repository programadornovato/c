#include <stdio.h>
int main(){
	char texto[40],reves[40];
	int res;
	regresar:
	printf("Humano ingresa un palindromo:");
	scanf("%s",texto);
	strcpy(reves,texto);
	strrev(reves);
	res=strcmp(reves,texto);
	if(res==0){
		printf("Felicidades humano ahora dame la patita\n");
	}else{
		printf("Humano estupido (%s  %s) \n",reves,texto);
		goto regresar;
	}
	
	system("pause");
	return 0;
}

