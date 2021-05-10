#include<stdio.h>

int factorial(int n){
	if (n<=1){
	return 1;
	}
	else{
	return n * factorial(n-1);	
	}
}

void main(){
	int num, result;
	printf("insira numero ||(0 para terminar): ");
	scanf("%d", &num);	
	while(num != 0){
	result = factorial(num);
	printf("o fatorial eh: %d.\n", result);
	printf("insira numero ||(0 para terminar): ");
	scanf("%d", &num);	
	}
	
	printf("TERMINADO!!!\n");
}
