#include <stdio.h>
int main(){
	int opcion;
	float saldo=1000,ingreso,sacar;
	printf("Hola humano, estas en el banco jerte\n");
	regreso:
	printf("Ingresa una opcion\n");
	printf("Opcion 1. Ingreso de dinero\n");
	printf("Opcion 2. Sacar de dinero\n");
	printf("Opcion 3. Salir\n");
	
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:
			printf("Humano cuanto dinero vas a ingresar:");
			scanf("%f",&ingreso);
			saldo=saldo+ingreso;
			printf("Humano tu cuenta es de %.2f\n",saldo);
			goto regreso;
		case 2:
			printf("Humano cuanto dinero vas a sacar:");
			scanf("%f",&sacar);
			if(sacar>saldo){
				printf("Humano pillin no puedes sacar mas dinero de que ya tienes\n");
				goto regreso;
			}else{
				saldo=saldo-sacar;
				printf("Humano tu cuenta es de %.2f\n",saldo);
				goto regreso;
			}
		case 3:
			printf("Adios humano\n");
			break;
		default:
			goto regreso;
	}
	
	system("pause");
	return 0;

}

