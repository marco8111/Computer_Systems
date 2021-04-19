#include <stdio.h>
//Programa que recebe um numero positivo e da ao user o seu dobro
void main(){
    int num, cont=1;
    
        while(cont<=10){
        
        printf("insira um numero: \n");
        scanf("%d", &num);
        if(num >0){
        
            printf("o dobro de %d é %d.\n", num,num*num);
            cont++;
        }
        else{
            printf("NAO PODE INSERIR NUM NEGATIVO|| POR FAVOR INSERIR NUMERO CORRETO\n");
            
        } 
    
}
}
   