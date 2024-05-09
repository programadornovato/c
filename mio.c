//BURBUJA NORMAL = 20 CICLOS
//BURBUJA MEJORADO = 20 CICLOS
#include <stdio.h>
#include <stdbool.h>
int main(){
	int i,j,aux=0,n[5],ciclos=0;
	bool ordenado=false;
	for(i=0;i<5;i++){
		printf("Ingresa el valor %d:",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5 && ordenado==false;i++){
		ordenado=true;
		for(j=0;j<4;j++){
			if(n[j]>n[j+1]){
				aux=n[j];
				n[j]=n[j+1];
				n[j+1]=aux;
				ordenado=false;
			}
			ciclos++;
			
		}
	}
	printf("\nESTOS SON TUS NUMEROS ORDENADOS ACENDENTE EN %d CICLOS \n",ciclos);
	for(i=0;i<5;i++){
		printf("%d\n",n[i]);
	}

	printf("\nESTOS SON TUS NUMEROS ORDENADOS DECENDENTE\n");
	for(i=4;i>=0;i--){
		printf("%d\n",n[i]);
	}
		
	system("pause");
	return 0;
}

