#include<stdio.h>

void main(){
	int *p;
	p = (int*) malloc(10 * sizeof(int));
	if(p == NULL){
		printf("ERRO!!Memoria insuficiente!\n");

	}
	else{
		int i;
		for(i=0;i<10;i++){
			printf("Informe um valor: \n");
			scanf("%d", &p[i]);
		}
	}
	p = realloc(p, 20 * sizeof(int));

	if(p == NULL){
		printf("ERRO!!Memoria insuficiente");
	}
	else{
		int i;
		for(i=0;i<20;i++){
			printf("Valor na posicao %d: \n", i, p[i]);
		}
	}
	
	//liberar a memoria pois senao fica na memoria ocupando espaco desnecessariamente
	free(p);
}
