#include <stdio.h>

/*Programa para calcular distancia percorrida e dizer quantos litros de combustivel gasta*/


float calc_distancia(float tempo, float velocidade ){                                              /*Definicao funcao para calculo da distancia*/
    float _tempo = tempo;
    float _velocidade = velocidade;

    
return _tempo * _velocidade;

                                                                   /*Retornar resultado da expressao*/
}



float litros_used(float distancia){                                                                /*Definicao da funcao para calcular litros gastos*/
    float _distancia = distancia;

    return distancia / 12;                                                                         /*Retornar resultado da expressao*/

}


void main(){

    float tempoD, Vmedia, distancia, litros;                                                       /*definir as variaveis e seu tipo*/
 
   printf("Insira o tempo percorrido em horas: ");                                                /*Pedir o tempo de viagem em horas */

    scanf("%f", &tempoD);
    
    printf("Insira a velocidade media:");                                                          /*Pedir a velocidade media */
    scanf("%f", &Vmedia);

    distancia = calc_distancia(tempoD, Vmedia);                                                    /*Atribuir a variavel distancia o calculo atraves da chamada da funcao calc_distancia com seus respetivos parametros*/

    litros = litros_used(distancia);

    printf("O carro percorreu a distancia de %1.3f KM e gastou %1.3f Litros.", distancia, litros); /*Printar os resultados formatados*/

}

    