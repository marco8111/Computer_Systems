#include <stdio.h>

/*Programa para conversao Celsius - FAHRENHEIT*/



float conversao(float TempC){                                                                      /*Definição da funcao de conversao*/
    float _tempC = TempC; 
    return (_tempC*1.8 +32);                                                                       /*retornar o resultado da expressao*/


}


void main(){
    
    
    float tempC, tempFfinal;                                                                       /*Definir variaveis*/

    printf("Insira temperatura em graus celsius: ");                                               /*Pedir temp. em celsius*/
    scanf("%f", &tempC);                                                                           /*Ler temp.*/

    tempFfinal = conversao(tempC);                                                                 /*atribuir a variavel da tempFinal resultado da conversao da funcao fora do main*/
    printf("A temperatura de %1.2f graus celsius equivale a %1.2f FAHRENHEIT", tempC, tempFfinal); /*Printar resultados formatados*/


}

    