#include<stdio.h>

void main(){
	int *p;
	p = (int*) calloc(10, sizeof(int));
	if(p == NULL){
		printf("ERRO!!Memoria insuficiente! \n");
	}
	else{
		int i;
		for(i=0;i<10;i++){
			printf("informe um valor: \n");
			scanf("%d", &p[i]);
		}
	}
	free(p);
}
