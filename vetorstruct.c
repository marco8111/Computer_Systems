#include<stdio.h>


typedef struct pessoa{
	char name[7];
	int age;
	float height;
}Pessoa;

void main(){
	Pessoa vetpessoa[3];
	int choice1;
	
	vetpessoa[0].age = vetpessoa[1].age = vetpessoa[2].age = 0;
	//vetpessoa[0].name = vetpessoa[1].name = vetpessoa[2].name = NULL;
	
	start:
	while(choice1 != 10){
		printf("\nQual pessoa quer adicionar seus dados?? 0/ 1/ 2\nSE DESEJAR TERMINAR INSIRA 10.\n");
		scanf("%d", &choice1);
	
	/*while(choice1 < 0 && choice1 > 2){
	printf("Qual pessoa quer adicionar seus dados?? 0/ 1/ 2\n");
	scanf("%d", &choice1);
	choice2 = choice1;
	}*/
	
	
		if(choice1>=0 && choice1 <= 2){ 
			switch(choice1){
	
			case 0:
			if(vetpessoa[0].age == 0){
				printf("Insira nome da 1ra pessoa: \n");
				scanf("%s", vetpessoa[0].name);
				printf("Insira a idade da pessoa: \n");
				scanf("%d", &vetpessoa[0].age);		
				printf("Insira a altura da pessoa: \n");
				scanf("%f", &vetpessoa[0].height);
				printf("O nome guardado eh %s.\nCom a idade %d e mede %.2f mts.\n", vetpessoa[0].name, vetpessoa[0].age, vetpessoa[0].height);
			}
			else{
				printf("Valores já atribuidos!!");
			}	
			break;
			case 1:
			if(vetpessoa[1].age == 0){
				printf("Insira nome da 2nda pessoa: \n");
				scanf("%s", vetpessoa[1].name);
				printf("Insira a idade da pessoa: \n");
				scanf("%d", &vetpessoa[1].age);		
				printf("Insira a altura da pessoa: \n");
				scanf("%f", &vetpessoa[1].height);
				printf("O nome guardado eh %s.\nCom a idade %d e mede %.2f mts.\n", vetpessoa[1].name, vetpessoa[1].age, vetpessoa[1].height);
			}
			else{
				printf("Valores atribuidos!!");
			}	
			break;
			case 2:
				if(vetpessoa[2].age == 0){
				printf("Insira nome da 3ra pessoa: \n");
				scanf("%s", vetpessoa[2].name);
				printf("Insira a idade da pessoa: \n");
				scanf("%d", &vetpessoa[2].age);		
				printf("Insira a altura da pessoa: \n");
				scanf("%f", &vetpessoa[2].height);
				printf("O nome guardado eh %s.\nCom a idade %d e mede %.2f mts.\n", vetpessoa[2].name, vetpessoa[2].age, vetpessoa[2].height);	
			}
			else{
				printf("Valores Atribuidos!!");
			}	
			break;
	
			default:
				printf("ACAO NAO ATRIBUIDA\n");	
			}
		}
		else{
			goto start;	 
		}
	}

	printf("\nTERMINADO!!\n");
	
}
