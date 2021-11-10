#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct pessoa{
	char cpf[16];
	char nome[100];
	char sexo[1];
	int idade;
};
//vari�veis globais
struct pessoa paciente;
int total_pontos,sintomas_pontos[10]={5,1,1,1,3,10,1,1,10,3};
char sintomas_descricao[10][200]={"Tem febre?",
"Tem dor de cabe�a?",
"Tem secre��o nasal ou espirros?",
"Tem dor/irrita��o na garganta?",
"Tem tosse seca?",
"Tem dificuldade respirat�ria?",
"Tem dores no corpo?",
"Tem diarr�ia?",
"Esteve em contato com algu�m positivado?",
"Esteve em locais com grande aglomera��o?"};

void cadastro_paciente(){
	printf("\nPara atendimento, fa�a seu cadastro!");
	printf("\nDigite seu CPF: ");
	fflush(stdin);
	gets(paciente.cpf);
	printf("\nDigite seu nome: ");
	fflush(stdin);
	gets(paciente.nome);
	printf("\nDigite seu sexo: ");
	fflush(stdin);
	gets(paciente.sexo);
	printf("\nDigite sua idade: ");
	scanf("%d",&paciente.idade);
	system("cls");
	printf("Confira seus dados: ");
	printf("\nCPF: %s",paciente.cpf);
	printf("\nNome: %s",paciente.nome);
	printf("\nSexo: %s",paciente.sexo);
	printf("\nIdade: %d",paciente.idade);
}

void coleta_sintomas(){
	char resposta;
	total_pontos=0;
	int i=0;
	printf("\n\nResponda o question�rio para saber a qual ala deve se dirigir.");
	while(i<10){
		printf("\n%s | S-sim N-n�o: ",sintomas_descricao[i]);
		fflush(stdin);
		scanf("%c",&resposta);
			if((resposta=='s') or (resposta=='S')){
				total_pontos=total_pontos+sintomas_pontos[i];
				i++;
			}else if((resposta=='n') or (resposta=='N')){
				i++;
			}else{
				printf("\nValor inv�lido, digite novamente!");
			}
	}
}

void triagem(){
	system("cls");
	printf("O total de pontos foi: %d",total_pontos);
	if(total_pontos<=9){
		printf("\nEncaminhe-se para a ala de risco BAIXO");
	}else if(total_pontos>=20){
		printf("\nEncaminhe-se para a ala de risco ALTO");
	}else{
		printf("\nEncaminhe-se para a ala de risco M�DIO");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	cadastro_paciente();
	coleta_sintomas();
	triagem();
	return 0;
}
