#include <stdio.h>
int main(){
	char nombre[18],apellido[18],nombreApellido[40]={};
	printf("Humano dame tu nombre:");
	scanf("%s",&nombre);
	printf("Humano dame tu apellido:");
	scanf("%s",&apellido);
	strcat(nombreApellido,nombre);
	strcat(nombreApellido," ");
	strcat(nombreApellido,apellido);
	printf("Humano aqui esta tu pinche nombre completo %s\n",nombreApellido);
	
	system("pause");
	return 0;
}

