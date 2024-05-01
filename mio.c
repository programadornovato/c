#include <stdio.h>
int main(){
	float practicas,participacion,examen,calFinal;
	printf("Humano ingresa los siguientes datos:\n");
	printf("practicas:");
	scanf("%f",&practicas);
	printf("participacion:");
	scanf("%f",&participacion);
	printf("examen:");
	scanf("%f",&examen);
	
	practicas=practicas*.40;
	participacion=participacion*.20;
	examen=examen*.40;
	
	calFinal=practicas+participacion+examen;
	
	printf("Humano esta es tu calificacion:%.2f\n",calFinal);
	
	
	system("pause");
	return 0;

}

