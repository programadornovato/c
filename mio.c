#include <stdio.h>
int main(){
	int i,j,matrizA[3][3],matrizT[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d]:",i+1,j+1);
			scanf("%d",&matrizA[i][j]);
		}		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizT[i][j]=matrizA[j][i];
		}		
	}
	
	printf("\n\nMATRIZ A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d]",matrizA[i][j]);
		}		
		printf("\n");
	}
	printf("\n\nMATRIZ T\n");
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d]",matrizT[i][j]);
		}		
		printf("\n");
	}

	system("pause");
	return 0;

}

