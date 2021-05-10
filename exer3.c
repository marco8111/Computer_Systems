#include<stdio.h>
#include<stdlib.h>

void main(){
    int i, vetor[5];

    for(i=0;i<5;i++){
        printf("insira: \n");
        scanf("%d", &vetor[i]);

    }

    for(i=4;i>0;i--){
        printf("%d ", vetor[i]);
    }
}