#include <stdio.h>
int main(){

	int la=0,le=0,li=0,lo=0,lu=0;
	char t[30];
	int i;
	
	printf("Humano escribe un texto:");
	scanf("%s",&t);
	
	for(i=0;i<30;i++){
		switch(t[i]){
			case 'a': case'A':  la++;break;
			case 'e': case'E':le++;break;
			case 'i': case'I':li++;break;
			case 'o': case'O':lo++;break;
			case 'u': case'U':lu++;break;
		}
	}
	printf("\nLetras a %d\n",la);
	printf("Letras e %d\n",le);
	printf("Letras i %d\n",li);
	printf("Letras o %d\n",lo);
	printf("Letras u %d\n",lu);
	
	system("pause");
	return 0;
}

