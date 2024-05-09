#include <stdio.h>
#include <stdbool.h>
int main(){
	int lista[5]={1,2,3,4,5};
	int n,i;
	regresa:
	printf("Escribe algun elemento de esta lista:\n");
	for(i=0;i<5;i++){
		printf("%d ",lista[i]);
	}
	printf(":");
	scanf("%d",&n);
	i=0;
	int pos=0;
	bool encontrado=false;
	while(i<5 && encontrado==false ){
		if(lista[i]==n){
			pos=i;
			encontrado=true;
			break;
		}
		i++;
	}
	if(encontrado==true){
		printf("\nMuy bien humano encontramos el elemento en la posicion %d\n",pos+1);
	}else{
		printf("\nHumano estupido intentalo de nuevo\n");
		goto regresa;
	}
	system("pause");
	return 0;
}

