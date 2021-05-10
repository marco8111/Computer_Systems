#include<stdio.h>
#include<stdlib.h>

void main(){
	int size, *p;
	
	printf("insira o tamanho do vector: \n");
	scanf("%d", &size);
	p = (int*) malloc(size * sizeof(int));
	
	if(p == NULL){
		printf("ERRO!Memoria insuficiente!\n");
	}
	else{
		int i;
		for(i=0;i<size;i++){
			printf("Insira um valor: \n");
			scanf("%d", &p[i]);	
		}
		int i;
		printf("valores do vector\n");
		for(i=0;i<size;i++){	
		printf(" %d", p[i]);
		}
		printf("\n");
		free(p);
		}
	
}
