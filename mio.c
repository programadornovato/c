#include <stdio.h>
int main(){
	int i,n,mayor=0,arreglo[100];
	do{
		printf("Humano ingresa el tamaño del arreglo (maximo de 100):");
		scanf("%d",&n);
	}while(n>100);
	for(i=0;i<n;i++){
		printf("\nIngresa el valor %d:",(i+1));
		scanf("%d",&arreglo[i]);
	}
	//3 4 5 1 2
	for(i=0;i<n;i++){
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
		}
	}
	printf("\nHumano aqui esta el numero mayor:%d\n",mayor);
	
	
	system("pause");
	return 0;

}

