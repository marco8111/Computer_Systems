//Marco Silva
//Programa para calcular peso ideal, de acordo com a altura e o sexo
#include<stdio.h>
float comparacao(char sex, float Hmeters);

void main(){
    char sex;                                          //Definicao das variaveis
    float Hmeters, Wideal;
    
    printf("insira sua altura (em metros): \n");       //pedir altura em metros do user
    scanf("%f", &Hmeters);
    __fpurge(stdin);
    printf("Insira seu sexo: \n");                     //pedir pelo sexo ao usuario
    scanf("%c", &sex);
    Wideal = comparacao(sex, Hmeters);                 //Chamar função para obter o output
}


float comparacao(char sex, float Hmeters){                  //Criacao funcao para processar as condições
    float idealweight;
    
    if (sex == 'm' || sex == 'M'){
        idealweight = 72.7 * Hmeters - 58;
        printf("O peso ideal é %.2f.", idealweight);}
    else if (sex == 'f' || sex == 'F'){                //Processamento da condicoes impostas pelo exercicio
        idealweight = 62.1 * Hmeters - 44.7;
        printf("O peso ideal é %.2f.", idealweight);}    
    else{printf("Variavel não correspondente");}
    return  idealweight;                               //Retornar valor obtido na funcao
}