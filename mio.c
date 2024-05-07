#include <stdio.h>
int main(){
	int suma=0,i,arreglo[]={10,9,8,7,6};
	for(i=0;i<5;i++){
		suma=suma+arreglo[i];
		printf("%d+",arreglo[i]);
	}
	printf("\nLa suma es %d\n",suma);
	system("pause");
	return 0;

}

