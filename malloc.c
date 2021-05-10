#include<stdio.h>

void main(){
	int *p;
	p = (int*) malloc(10 * sizeof(int));
	if (p ==NULL){
		printf("ERRO!!Memoria Insuficiente!\n");
	}
	else{
		int i;
		for(i=0;i<10;i++){
			printf("Informe um numero: \n");
			scanf("%d", %p[i]);
		}
	}
	free(p);
}
