#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){
    char palavra1[10], palavra2[10];

    printf("insira palavra 1:");
    scanf("%s", palavra1);
    getchar();
    printf("insira palavra 2:");
    scanf("%s", palavra2);

	if(strcmp(palavra1, palavra2) == 0){
		printf("Sao iguais!!\n");
	}
    else{
    	printf("sao diferentes\n");
    }


}
