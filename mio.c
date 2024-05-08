#include <stdio.h>
int main(){
	char texto1[]="A";
	char texto2[]="A";
	int res;
	res=strcmp(texto1,texto2);
	//printf("res=%d\n",res);
	if(res==0){
		printf("Ambos dos textos son iguales\n");
	}else{
		if(res>0){
			printf("El texto1 es mayor\n");
		}
		if(res<0){
			printf("El texto1 es menor\n");
		}
	}
	system("pause");
	return 0;

}

