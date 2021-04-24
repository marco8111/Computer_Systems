#include<stdio.h>
#include<math.h>


//Definicao estrutura ponto, para receber float y e x 
typedef struct ponto {
    float x;
    float y;
}Ponto;

//definicao estrutura retangulo para armazenar valores do tipo estrutura ponto
struct retangulo{
    Ponto P1, P2, P3, P4;
    
    
};

/*definicao funcao para calcular a distancia entre os 2 pontos,
consequentemente a diagonal do retangulo*/ 
float distancia(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2-x1,2) + pow(y2-y1,2)); 
}



void main(){
    float base, altura, area, perimetro;
    struct ponto; 
    struct retangulo retangulo;

    //Pedido dos pontos do rentangulo, coordenada x e coordenada y
    printf("Insira a coordenada X do ponto superior esquerdo do retangulo: \n");
    scanf("%f", &retangulo.P1.x);
    printf("Insira a coordenada Y do ponto superior esquerdo do retangulo: \n");
    scanf("%f", &retangulo.P1.y);

    printf("Insira a coordenada X do ponto inferior direito do retangulo: \n");
    scanf("%f", &retangulo.P2.x);
    printf("Insira a coordenada Y do ponto inferior direito do retangulo: \n");
    scanf("%f", &retangulo.P2.y);

    //Calculo da base
    base = retangulo.P2.x - retangulo.P1.x;
    //calculo altura
    altura = retangulo.P1.y - retangulo.P2.y;
    
    //Calculo area e perimetro
    area = base * altura;
    perimetro = 2*base + 2*altura;
    float diagonal = distancia(retangulo.P2.x, retangulo.P1.x,retangulo.P2.y, retangulo.P1.y);  
    
    //Output
    printf("A area do retangulo eh: %.2f\n", area);
    printf("O comprimento diagonal eh: %.2f\n", diagonal);
    printf("O perimetro do retangulo eh: %.2f\n", perimetro);
}