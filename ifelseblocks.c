#include <stdio.h>



void main(){

    int codigo, viagem;

    float preco;



    printf("Insira seu destino 1= SantoAntão/ 2=Sal/ 3=Boa Vista/ 4=Santiago: ");

    scanf("%d", &codigo);

    
    printf("Tipo de passgem só IDA (0) ou IDA & VOLTA(1): ");

    scanf("%d", &viagem);

    
    if (codigo == 1){

        if (viagem == 0){

            preco = 800;

        }
        
     else if(viagem == 2){

            preco = 1600;

        }

        else {printf("Valor nao atribuido");}

    }

    else if(codigo == 2){

        if (viagem == 0){

            preco = 3000;

        }

        else if(viagem == 1){

            preco = 6000;

        }

        else{printf("valor nao atribuido");}

    }else if (codigo == 3){

        if (viagem == 0){

            preco = 9000;

        }

        else if(viagem == 1){

            preco = 18000;

        }

        else{printf("valor nao atribuido");}

    }else if (codigo == 4) {

        if(viagem == 0){

            preco = 8000;

        }

        else if(viagem == 1){

            preco = 16000;

        }
 
        else{printf("valor nao atribuido");}

        
    }

printf("O preço da passagem é %.2f", preco);
}