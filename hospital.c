/*Programa para ver se um doador de sangue esta apto ou nao para doar*/

void main(){
    ;
    char doador[6];
    int idade, bemalimentado, resfriado;
    float peso;
    printf("Insira seu nome:  \n");
    fgets(doador, 6, stdin);
    printf("Insira sua idade: \n");
    scanf("%d", &idade);
    printf("Insira seu peso: \n");
    scanf("%f", &peso);
    printf("está bem alimentado sim(1) e nao(0): \n");
    scanf("%d", &bemalimentado);
    printf("Está refriado sim(1) e nao(0): \n");
    scanf("%d", &resfriado);
    
    
    if((idade >= 18 && idade < 69) && peso >=50 && bemalimentado == 1 && resfriado == 0){
        printf("\nO cadastrado %s está apto para doar sangue!!!", doador);
        
    } 
    else{
        printf("O cadastrado %s não está APTO para doar sangue!!! ", doador);
    }
    
