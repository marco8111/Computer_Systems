#include <stdio.h>
#include<stdio_ext.h>

/*programa para um mini-banco, que pede um numero de conta e o numero 0 para terminar, ao inserir o numero da conta
este pede seu nome e seu saldo, se seu saldo for negativo incrementa este saldo na variavel contSneg, e o balanco e o
saldo anterior mais o inserido atualmente.e mostrar todas as informacoes no final. */

void main()
{
    int nmrconta, cont = 0, contSneg;
    char nome[50];
    float saldo, balanco = 0.0;
    
    do {
    
    
    printf("-----------------------------------------------------\n");
    printf("insira numero de conta ou 0 para terminar programa: \n");
    printf("Insira numero de conta: \n");
    scanf("%d", &nmrconta);
    getchar();
    if (nmrconta == 0){
        break;
        
    }
    printf("Insira seu nome: \n");
    fgets(nome, 50, stdin);    
    
    printf("insira seu saldo: \n");
    scanf("%f", &saldo);
    
    if (saldo<0){
        contSneg++;
    }
    
    balanco = balanco + saldo;
    cont ++;
    }while(nmrconta != 0 || cont == 10);
   
printf("O numero de cliente(s) eh %d.\n", cont);
printf("o balanco eh %3.0f.\n", balanco);
    if (balanco >= 0){
        printf("O saldo é positivo");   
    }
    else{
        printf("O saldo é negativo!!");
        printf("O numero de contas negativas é %d.\n", contSneg);
    }
   
   
}