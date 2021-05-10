#include<stdio.h>

void main(){
	int i, j, m, n;
	int **matriz;
	printf("Informe o numero de linhas: \n");
	scanf("%d", &m);
	printf("Informe o numero de colunas: \n");
	scanf("%d", &n);
	//primeiro malloc aloca as linhas
	matriz = (int*) malloc(m * sizeof(int*));
	for(i=0;i<m;i++){
		//segudo malloc aloca as colunas
		matriz[i] = (int*) malloc(n * sizeof(int));
		
		//acessando a matriz
		for(j=0;j<n;j++){
			printf("informe um valor: \n");
			scanf("%d", matriz[i][j]);
		}
	}
	for(i=0;i<m;i++){
		free(matriz[i]);
	}
	free(matriz);
}
