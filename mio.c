#include <stdio.h>
int main(){
	int i,n,arreglo[100];
	do{
		printf("Humano ingresa la cantidad de elementos (maximo 100):");
		scanf("%d",&n);
	}while(n>100);
	for(i=0;i<n;i++){
		printf("\nHumano ingresa el valor %d\n",(i+1));
		scanf("%d",&arreglo[i]);
	}
	for(i=0;i<n;i++){
		printf("Indice=%d valor %d\n",(i+1),arreglo[i]);
	}
	
	system("pause");
	return 0;

}

