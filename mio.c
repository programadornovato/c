#include <stdio.h>
int main(){
	int i,j,matriz[100][100],filas,columnas;
	printf("Humano cuantas filas quieres:");
	scanf("%d",&filas);
	printf("Humano cuantas columnas quieres:");
	scanf("%d",&columnas);
	for(i=0;i<filas;i++){
		for(j=0;j<filas;j++){
			printf("Valor de [%d][%d]:",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}		
	}
	printf("\n\n");
	for(i=0;i<filas;i++){
		for(j=0;j<filas;j++){
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	return 0;

}

