#include <stdio.h>

typedef struct pessoa{
	char nome[7];
	int idade;
	int BI;
}Pessoa;

void main(){
	Pessoa pessoa;	
	
	printf("Insira sua idade: \n");
	scanf("%d", &pessoa.idade);

	printf("Insira seu BI: \n");
	scanf("%d", &pessoa.BI);
	getchar();
	printf("Insira seu nome: \n");
	scanf("%c", pessoa.nome);
	
	printf("Chamo-me %.7s, tenho %d  anos e o meu BI eh %d.\n", pessoa.nome, pessoa.idade, pessoa.BI);
}
