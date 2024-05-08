#include <stdio.h>
int main(){
	int matriz[3][3]={{8, 1, 3}, {1, 7, 4}, {3, 4, 9}};
	int i,j,esSimetrica=1;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
			if(matriz[i][j]!=matriz[j][i]){
				esSimetrica=0;
				break;
			}
		}
		if(esSimetrica==0){
			break;
		}
	}
	if(esSimetrica==0){
		printf("La matriz no es simetrica\n");
	}
	else{
		printf("La matriz si es simetrica\n");
	}
	system("pause");
	return 0;

}

