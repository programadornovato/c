#include <stdio.h>
int main(){
	char programador[]="programador";
	printf("%s\n",programador);
    
	char novato[]={'n','o','v','a','t','o'};
	printf("%s\n",novato);

	char nombre[5];
	printf("Humano ingresa tu nombre y apellido:");
	//scanf("%s",&nombre);
	fgets(nombre,sizeof(nombre),stdin);
	printf("%s\n",nombre);

	system("pause");
	return 0;

}

