#include <stdio.h>
int main(){
	int i,j,matriza[100][100],matrizb[100][100],filas,columnas;
	printf("Humano ingres alas filas y presiona enter y despues las columnas y preciona enter:");
	scanf("%d %d",&filas,&columnas);
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("[%d][%d]",i+1,j+1);
			scanf("%d",&matriza[i][j]);
		}		
	}
	printf("\n\n");	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			matrizb[i][j]=matriza[i][j];
		}		
	}
	printf("\n\n");	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("[%d]",matrizb[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;

}

