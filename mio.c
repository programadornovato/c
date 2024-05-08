#include <stdio.h>
int main(){
	char tn1[2],tn2[2],t[4];
	int n1,n2,suma=0;
	printf("Humano ingresa un numero de 4 digitos:");
	scanf("%s",&t);
	
	tn1[0]=t[0];
	tn1[1]=t[1];
	tn1[2]='\n';
	n1=atoi(tn1);
	
	tn2[0]=t[2];
	tn2[1]=t[3];
	tn2[2]='\n';
	n2=atoi(tn2);
	
	suma=n1+n2;
	printf("La suma es de %d + %d = %d\n",n1,n2,suma);
	
	system("pause");
	return 0;
}

