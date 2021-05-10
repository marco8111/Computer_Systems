#include<stdio.h>
#include<stdlib.h>

void main(){
	printf("o tamanho de char eh %d byte(s).\n", sizeof(char)); /*pode usar "u" para o long unsigned int*/
	printf("o tamanho de int eh %d byte(s). \n", sizeof(int));
	printf("o tamanho de float eh %d byte(s).\n", sizeof(float));
	printf("o tamanho de double eh %d byte(s).\n", sizeof(double));
}
