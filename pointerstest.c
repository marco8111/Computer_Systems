#include<stdio.h>

void add(float *value, float *saldo);
void get(float *value, float *saldo);

void main(){
	float saldo, value;
	int action, choice;
	
	repeat:
	printf("Qual seu saldo: \n");
	scanf("%f", &saldo);
	
	start:
	printf("Qual acao quer fazer 1 = Adicionar / 2 = Retirar \n");
	scanf("%d", &action);
	
	if (action == 1){
		printf("Quanto quer adicionar? \n");
		scanf("%f", &value);
		add(&value, &saldo); 
	}
	else if(action = 2){
		retificar:
		printf("Quanto quer retirar?? \n");
		scanf("%f", &value);
		if (value > saldo){
			printf("ERRO SALDO INSUFICIENTE!!\n");
			goto retificar;
		}
		else{
			get(&value, &saldo);
		}
	}
	else{
		printf("ACAO NAO PERMITIDA!!!!");
		goto start;
	}
	getchar();
	char desire;
	printf("\nQUER continuar na mesma conta(s/S)\nMUDAR conta (c/C)\nSAIR(outra letra qualquer)?? \n");
	scanf("%c", &desire);
	if(desire == 's' || desire == 'S'){
		goto repeat;
	}
	else if(desire == 'c' || desire  == 'C'){
		saldo = 0;
		goto repeat;
	}
	else{
		printf("\nTERMINADO.\n");
	}
	
}



void add(float *value, float *saldo){
	*saldo += *value; 
	printf("O seu saldo agora eh: %.2f.\n", *saldo);
}

void get(float *value, float *saldo){
	*saldo -= *value;
	printf("O seu saldo agora eh: %.2f.\n", *saldo);
}
