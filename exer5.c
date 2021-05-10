#include<stdio.h>
#include<stdlib.h>

void main(){
    int i, j;
    float vetor[3];
    float matrix[3][3], result[3][3];

    for(i=0;i<3;i++){
        printf("insira valores vector : \n");
        scanf("%f", &vetor[i]);
    }    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("insira VALores matris: \n");
            scanf("%f", &matrix[i][j]);  
        }
    }    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){   
            result[i][j] = vetor[i] * matrix[i][j];  
            
        }
        
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){        
            printf("%.2f ", result[i][j]);
        }
        printf("\n");    
    }
    
    
}