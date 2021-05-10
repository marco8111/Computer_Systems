#include<stdio.h>
#include<stdlib.h>

void main(){
	int *p, size;
	
	printf("insira tamanho do vetor: ");
	scanf("%d", &size);
	
	p = (int*) malloc(size * sizeof(int));
	if (p ==NULL){
		printf("ERRO!!MEmoria insuficiente");
	}
	else{
		int i;
		for(i=0;i<size;i++){
			printf("Insira valor %d do vetor.\n", i);
			scanf("%d", &p[i]);
		}
		printf("\nValores do vetor :\n");
		
		for(i=0;i<size;i++){
		printf("%d ", p[i]);
		}
		printf("\n");
	}


free(p);	
}
