#include<stdio.h>
#include<stdlib.h>

float multiplica(float num){
    return num * 5;    
}


void main(){


    float matrix[3][3];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("insira: ");
            scanf("%f", &matrix[i][j]);  
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            
            printf("%.2f ", multiplica(matrix[i][j]));
        }
        printf("\n");
    }
    
}
