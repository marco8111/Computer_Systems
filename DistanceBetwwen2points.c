//Marco_Silva__N:4874

//Programa para calcular distancia entre 2 pontos
#include <stdio.h>
#include <math.h>


//definicao estrutura para receber as duas coordenadas
typedef struct coordenada {
    float x;
    float y;
}Coordenada;


//definicao da funcao para calcular a distancia entre 2 pontos
float distancia(float x1, float x2, float y1, float y2){
    return sqrt(pow(x2 - x1,2) + pow(y2-y1,2));
}


void main(){
    //definicao das duas estruturas ponto e ponto2
    Coordenada ponto, ponto2;
    printf("Insira a coordenada x do ponto: \n");
    scanf("%f", &ponto.x);
    printf("Insira a coordenada y do ponto: \n");
    scanf("%f", &ponto.y);
    
    //chamada para calcular a distancia de um ponto da origem 
    float result1= distancia(ponto.x, 0, ponto.y, 0);
    
    //Output
    printf("A distancia do ponto da origem eh: %.2f\n\n", result1);
    
    
    
    printf("Insira a segunda coordenada x do ponto: \n");
    scanf("%f", &ponto2.x);
    printf("Insira a segunda coordenada y do ponto: \n");
    scanf("%f", &ponto2.y);
    
    //Calculo da distancia entre o ponto ponto e o ponto ponto2
    float result2 = distancia(ponto.x, ponto2.x, ponto.y, ponto2.y);
    
    printf("A distancia entre os dois pontos eh: %.2f\n", result2);
}