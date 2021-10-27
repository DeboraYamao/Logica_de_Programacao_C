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
int opcao,sequencia=0,cont=0,valida=0;
const int A=1,F=2,C=3;

void dados_tela(int i){
	printf("\nCódigo: %d ",projetos[i].codigo);
	printf("\nTítulo: %s ",projetos[i].titulo);
	printf("\nDescrição: %s ",projetos[i].descricao);
	printf("\nResponsável: %s ",projetos[i].responsavel);
	printf("\nStatus: %d ",projetos[i].status);
	printf("\n\n****************************************\n");
}

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
		
		printf("\nInforme o status do Projeto:\n1 - A iniciar\n2 - Em execução\n3 - Concluído\nStatus: ");
		fflush(stdin);
		scanf("%d",&projetos[sequencia].status);
	
		printf("\nCadastro realizado com sucesso!\n\nDeseja realizar um novo cadastro? S-Sim N-Não ");
		fflush(stdin);
		scanf("%c",&continuar);
		if((continuar=='N') or (continuar=='n')){
			cadastro=false;
		}
		sequencia++;
		cont+=1;
	}while(cadastro==true);
}

void todos_projetos(){
	system("cls");
	int i;
	if(cont>0){
		for(i=0;i<sequencia;i++){
			dados_tela(i);
		}
	}else{
		printf("\nNenhum projeto cadastrado.");
	}
	system("pause");
}

void por_status(int s){
	system("cls");
	int i;
	if(cont>0){
		for(i=0;i<sequencia;i++){
			if(projetos[i].status==s){
				dados_tela(i);
			}
		}
	}else{
		printf("\nNenhum projeto encontrado.");
	}
	system("pause");
}

busca_codigo(){
	int i, busca=0;
	system("cls");
	printf("\nInforme o código de busca: ");
	scanf("%d",&busca);
	if(cont>0){
		for(i=0;i<sequencia;i++){
			if(projetos[i].codigo==busca){
				dados_tela(i);
			}
		}
	}else{
		printf("\nNenhum projeto encontrado.");
	}
	system("pause");
}

void atualizar_projeto(){
	int i, busca=0;
	bool cadastro=true;
	char continuar;
	system("cls");
	printf("\nInforme o código de busca: ");
	scanf("%d",&busca);
	if(cont>0 and busca<=sequencia){
		for(i=0;i<sequencia;i++){
			if(projetos[i].codigo==busca){
				dados_tela(i);
				
				projetos[busca-1].codigo;
				
				printf("\nDigite o título do Projeto atualizado: ");
				fflush(stdin);
				gets(projetos[busca-1].titulo);
				
				printf("\nDigite a descrição do Projeto atualizado: ");
				fflush(stdin);
				gets(projetos[busca-1].descricao);
				
				printf("\nDigite o responsável do Projeto atualizado: ");
				fflush(stdin);
				gets(projetos[busca-1].responsavel);
				
				printf("\nInforme o status do Projeto atualizado:\n1 - A iniciar\n2 - Em execução\n3 - Concluído\nStatus: ");
				fflush(stdin);
				scanf("%d",&projetos[busca-1].status);
			
				printf("\nAtualização realizada com sucesso!\n");
				system("pause");
			}
		}
	}else{
		printf("\nNenhum projeto encontrado.\n");
		system("pause");
	}

}

int main(){
	setlocale(LC_ALL,"Portuguese");
	do{
		system("cls");
		opcao=9;
		printf("\nOpções:\n\n1 - Cadastrar projetos\n2 - Imprimir todos os projetos\n3 - Imprimir todos os projetos com status: A INICIAR\n4 - Imprimir todos os projetos com status: EM EXECUÇÂO\n5 - Imprimir todos os projetos com status: CONCLUÍDO\n6 - Busca de projeto por código\n7 - Atualizar Projeto \n0 - Sair da aplicação\n\nOpção selecionada: ");
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
				busca_codigo();
			break;
			
			case 7:
				atualizar_projeto();
			break;
			
			case 0:
				printf("\nEncerrando a aplicação!");
			break;
			
			default:
				printf("\nOpção inválida!\n");
				system("pause");
		}
		
	}while(opcao!=0);
return 0;	
}
