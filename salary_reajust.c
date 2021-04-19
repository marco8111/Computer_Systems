#include <stdio.h>


/*Programa para receber 1 salario e um valor em percentagem de reajuste e retornar o salario atualizado*/

void main(){

    
float salario, reajuste, salariofinal;                                                                                                   /*Definir tipo das variaveis*/

    printf("Insira o seu salário: ");                                                                                                        /*Pedir salario*/
    scanf("%f", &salario);                                                                                                                   /*Ler salario*/
    printf("Insira reajuste em percentual: ");                                                                                               /*Pedir percentual*/
    scanf("%f", &reajuste);                                                                                                                  /*Ler reajuste*/
    salariofinal = salario + (salario * reajuste);                                                                                           /*Calcular salario final*/
    printf("O seu salario de %f foi reajustado com a percentagem de %1.2f que corresponde ao salario final de %f", salario, reajuste, salariofinal);
 /*Printar resultados formatados*/   
    



}

    