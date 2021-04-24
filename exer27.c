/*_Marco Silva aka Basketball Player_*/
/*_Nº: 4874_*/

#include <stdio.h>


void main(){
   /*perde 25% massa em 30s--imprima o tempo necessario para que uma massa(g) 
   para o material radioativo se torne menorq 0,10g  */
   
    //Declaracao de variaveis
    float mass, actualmass;                                              
    int cont = 0, time;
    int answer;

    //Print da interface para usuario
    printf("*******************************************************\n");  
    printf("Programa que calcula o tempo necessario para massa de \n"); 
    printf("um material radioativo se torne menor que 0.10g\n");
    printf("****************************************************************************\n");
    printf("Quer efetuar o calculo?\nSIM ==> 1 ou qualquer outro digito para terminar: \n");
    printf("****************************************************************************\n");
    
    //obtencao da resposta
    scanf("%d", &answer);

    /*De acordo com o valor do answer, este laco while rodara com objetivo de gerar o tempo 
    que a massa em gramas deste material chegue a menor que 0.10g  */
    while(answer == 1){
        printf("Insira uma massa em gramas: \n");
        scanf("%f", &mass);
        actualmass = mass;
        
        /*Laco while para decrementar a massa inserida e incrementar o contador de iteracoes 
        para gerar o tempo */
        while(mass >= 0.10){
            
            cont++;
            mass *= 0.75;
            
        }
        
        /*cada iteracao significa 30seg, entao o tempo = cont * 30*/
        time = cont*30 ;

        /*mostrar o output ao usuario*/
        printf("*******************************************************\n");
        printf(" O material de massa %.2f demora o tempo de %d seg !!  \n\n", actualmass, time);
        printf("*******************************************************\n");

        /*Este print para perguntar ao usuario o valor, conforme, continuar o loop ou terminar
        o programa*/
        printf("****************************************************************************\n");
        printf("Quer efetuar o calculo?\nSIM ==> 1 ou qualquer outro digito para terminar: \n");
        scanf("%d", &answer);
        printf("****************************************************************************\n");
        
        /*Contador igual 0 senao incrementará o valor das varias iterações*/
        cont = 0;
    }
    /*Caso escolhar um valor diferente de (1), sai do loop, logo este printf eh acionado*/
    printf("***************\n");
    printf("* TERMINADO!! *\n");   
    printf("***************\n");   
   
   
    
}
    
