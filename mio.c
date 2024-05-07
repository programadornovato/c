#include <stdio.h>
int main(){
	
	int i,vector1[5],vector2[5],vector3[10];
	for(i=0;i<5;i++){
		printf("Vector 1 pos %d:",i+1);
		scanf("%d",&vector1[i]);
	}
	for(i=0;i<5;i++){
		printf("Vector 2 pos %d:",i+1);
		scanf("%d",&vector2[i]);
	}
	for(i=0;i<10;i++){
		if(i<5){
			vector3[i]=vector1[i];
		}
		else{
			vector3[i]=vector2[i-5];
		}
	}
	for(i=0;i<10;i++){
		printf("\nvector3 pos %d=%d\n",i+1,vector3[i]);
	}
	
	
	system("pause");
	return 0;

}

