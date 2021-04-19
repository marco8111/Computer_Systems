#include <stdio.h>
//Programa que recebe 5 numeros e retorna o maior

void main(){
    int numeros[5];
    int i, max;
    
    for(i=0;i<5;i++){
        printf("Insira numero %d: ", i);
        scanf("%d", &numeros[i]);
        
    }
    max=numeros[0];
    for(i=0;i<5;i++){
        if(max < numeros[i]){
            max = numeros[i];
        }
    }
    
    printf("O maior numero eh %d", max);
    
    
}