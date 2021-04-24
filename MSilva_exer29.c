/*Marco Silva---Exercicio 29*/

/*Programa em C que funcione com base no MENU*/

#include <stdio.h>


void main()
{
    //declaracao de variaveis
    int option, repeatread, value, soma = 0, multiplicar = 1, i;


    //do while para gerar a itera��o e a interface com o user at� que desejar terminar o programa
    do{

    //printf para gerar a "interface"

    printf("Escolha o codigo da operacao: \n");

    printf("***************************\n");

    printf("1 --> SOMA VARIOS NUMEROS: \n");

    printf("2 --> MULTIPLICA VARIOS NUMEROS: \n");

    printf("3 --> SAIR DO PROGRAMA!\n");

    printf("OPCAO: ");

    //obter a opcao do user
    scanf("%d", &option);
    
    //de acordo com a opcao do user um dos IF�s entra em acao e efetua a sua respetiva funcao


    if (option == 1){
         //importante inicializar a zero, pois snao este incrementa valores de operacoes anteriores
         soma = 0;
        
        //para isso pergunto ao user quantos numeros quer adicionar
        printf("Quantos numeros quer adicionar? \n");

        scanf("%d", &repeatread);
      
        //este for loop gira de acordo com a quantidade de numeros a pessoa quer adicionar
        for(i=1;i<=repeatread;i++){
     
            printf("Insira %d  numero a adicionar: \n", i);

            //obtendo o(s) valore(s) a cada iteracao
            scanf("%d", &value);

            //incrementa a soma com o valor adicionado.
            soma += value;

        }
        //output
        printf("+++++++++++++++++++++++++++++++++\n");
        printf("A soma dos seus numeros eh %d.\n", soma);
        printf("+++++++++++++++++++++++++++++++++\n");
    }

    else if(option == 2){
        multiplicar = 1;
        
        //para isso pergunto ao user quantos numeros quer multiplicar
        printf("Quantos numeros quer multiplicar? \n");

        scanf("%d", &repeatread);

        //for loop para girar conforme o limite dado pelo user
        for(i=1;i<=repeatread;i++){

            printf("Insira o %d� a multiplicar: \n", i);

            scanf("%d", &value);

            //multiplicar o valor adicionado pela variavel multiplicar e incrementar o resultado em multiplicar
            multiplicar *= value;

        }
        //output
        printf("**********************************\n");
        printf("A sua mutiplicacao eh %d.\n", multiplicar);
        printf("**********************************\n");
    }

    //escolha == 3, logo o programa gera uma mensagem de saida e depois termina devida a condicao imposta pelo do{}while() 
    else if(option == 3){

        printf("TERMINADO!!");

    }

    //Caso user inserir um valor que nao consta nas opcoes do programa este gera uma mensagem de valor nao atribuido e pede para inserir um dos valores dado por ele.
    else{

        printf("\nVALOR N�O ATRIBUIDO. INSIRA VALORES DA TABELA \n\n");

        
}

    
}while(option != 3);//unica condicao paragem do loop


}
