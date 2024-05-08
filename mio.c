#include <stdio.h>
int main(){
    char t1[20],t2[20];
    int res;
    regresa:
    printf("Humano ingresa una palabra:");
    scanf("%s",&t1);
    printf("Humano ingresa una palabra similar a la anterior (No sencible a mayusculas y minusculas) :");
    scanf("%s",&t2);
    strupr(t1);
    strupr(t2);
    res=strcmp(t1,t2);
    if(res==0){
    	printf("El texto 1 %s es igual al texto 2 %s\n ",t1,t2);
	}else{
		printf("El texto 1 %s NO es igual al texto 2 %s\n ",t1,t2);
		goto regresa;
	}
	system("pause");
	return 0;
}

