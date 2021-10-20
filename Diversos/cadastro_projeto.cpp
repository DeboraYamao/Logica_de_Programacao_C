#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

struct projeto{
	int codigo;
	char titulo[100];
	char descricao[100];
	char responsavel[100];
	int status;
};

struct projeto projetos[200];//vetor projetos com atributos do projeto
int opcao,sequencia=0;
const int A=1,F=2,C=3;

void cadastrar_projeto(){
	bool cadastro=true;
	char continuar;
	do{
		system("cls");
		projetos[sequencia].codigo=sequencia+1;
		
		printf("\nDigite o título do Projeto: ");
		fflush(stdin);
		gets(projetos[sequencia].titulo);
		
		printf("\nDigite a descrição do Projeto: ");
		fflush(stdin);
		gets(projetos[sequencia].descricao);
		
		printf("\nDigite o responsável do Projeto: ");
		fflush(stdin);
		gets(projetos[sequencia].responsavel);
		
		printf("\nDigite o status do Projeto: ");
		fflush(stdin);
		scanf("%d",&projetos[sequencia].status);
		
		printf("\nCadastro realizado com sucesso!\n\nDeseja realizar um novo cadastro? S-Sim N-Não ");
		fflush(stdin);
		scanf("%c",&continuar);
		if((continuar=='N') || (continuar=='n')){
			cadastro=false;
		}
		sequencia++;
	}while(cadastro==true);
}

void todos_projetos(){
	system("cls");
	int i;
	if(projetos[0].codigo>0){
		for(i=0;i<sequencia;i++){
			printf("\nCódigo: %d ",projetos[i].codigo);
			printf("\nTítulo: %s ",projetos[i].titulo);
			printf("\nDescrição: %s ",projetos[i].descricao);
			printf("\nResponsável: %s ",projetos[i].responsavel);
			printf("\nStatus: %d ",projetos[i].status);
			printf("\n****************************************\n");
		}
	}else{
		printf("\nNenhum projeto cadastrado.");
	}
	system("pause");
}

void por_status(int s){
	system("cls");
	int i;
	bool achou;
	for(i=0;i<sequencia;i++){
		if(projetos[i].status==s){
			printf("\nCódigo: %d ",projetos[i].codigo);
			printf("\nTítulo: %s ",projetos[i].titulo);
			printf("\nDescrição: %s ",projetos[i].descricao);
			printf("\nResponsável: %s ",projetos[i].responsavel);
			printf("\nStatus: %d ",projetos[i].status);
			printf("\n****************************************\n");
			achou=true;
		}else{
			achou=false;
			
		}
	}
	if(achou==false){
		printf("\nProjeto não encontrado!");
	}
	system("pause");
}

busca_codigo(){
	
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	do{
		system("cls");
		opcao=9;
		printf("\nDigite:\n1 - Cadastrar projetos\n2 - Imprimir todos os projetos\n3 - Imprimir todos os projetos com status: A INICIAR\n4 - Imprimir todos os projetos com status: EM EXECUÇÂO\n5 - Imprimir todos os projetos com status: CONCLUÍDO\n6 - Busca de projeto por código\n0 - Sair da aplicação\nOpção: ");
		scanf("%d",&opcao);
		
		switch (opcao){
			case 1:
				cadastrar_projeto();
			break;
			
			case 2:
				todos_projetos();
			break;
			
			case 3:
				por_status(A);
			break;
			
			case 4:
				por_status(F);
			break;
			
			case 5:
				por_status(C);
			break;
			
			case 6:
				//busca_codigo();
			break;
			
			case 0:
				
			break;
			
			default:
				printf("\nOpção inválida!");
				system("pause");
		}
		
	}while(opcao!=0);
return 0;	
}

