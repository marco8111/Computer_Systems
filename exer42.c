#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void *inverted(char *text){
	int i, j=0;
	char *texto = malloc(strlen(texto) * sizeof(char));
	
	//invertendo texto	
	for(i=strlen(text)-1; i!=0 ; i--){
		texto[j] = text[i]
		j++;
	}
}


void main(){
	char text[20];
	char *p;
	printf("Insira digitos: \n");
	fgets(text, 20, stdin);
	



	free(texto);
}
