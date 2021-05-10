#include<stdio.h>

void main(){
	char word1[10], word2[10], word3[10];
	
	printf("insira palavra: \n");
	scanf("%s", word1);
	getchar();
	printf("insira palavra: \n");
	scanf("%s", word2);
	getchar();
	printf("insira palavra: \n");
	scanf("%s", word3);
	
	printf("\n");
	printf("%s\n", word3);
	printf("%s\n", word2);
	printf("%s\n", word1);
}
