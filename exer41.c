#include<stdio.h>
#include<stdlib.h>

void main(){
	int size, *p;
	do{
	printf("insira o tamanho do vector: \n");
	scanf("%d", &size);
	}while(size < 0);	
	p = (int*) malloc(size * sizeof(int));
	
	if(p == NULL){
		printf("ERRO!Memoria insuficiente!\n");
	}
	else{
		int i;
		do{
			for(i=0;i<size;i++){
				printf("Insira um valor: \n");
				scanf("%d", &p[i]);
		}		
		}while(p[i] < 2);	
		
		
		printf("valores do vector\n");
		for(i=0;i<size;i++){	
			printf(" %d", p[i]);
		}
			printf("\n");
			free(p);
		}
	
}
