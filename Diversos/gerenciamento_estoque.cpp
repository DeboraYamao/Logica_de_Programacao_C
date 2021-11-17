//Sistema gerenciamento estoque de produto
//	**Entrada de produtos:	cod_produto
//							nome_produto
//							valor_produto
//							qtde_produto
//	**Listagem dos produtos:todos_produtos
//							por_codigo
//	**Ajuste de estoque:	alterar_qtde_produto
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct produto{
	int cod_produto;
	char nome_produto[100];
	int qtde_produto;
	float unit_produto;
	float vlr_total;
};

struct produto material[100];

void cadastro(){
	
	printf("Digite o código do produto: ");
	scanf("%d",&material.cod_produto);
	
	printf("\nDigite o descrição do produto: ");
	fflush(stdin);
	gets(material.nome_produto);
	
	printf("\nDigite a quantidade do produto: ");
	scanf("%f",&material.qtde_produto);
	
	printf("\nDigite o valor unitário do produto: ");
	scanf("%f",&material.unit_produto);
	
	printf("\nDigite o valor total do produto: ");
	scanf("%f",&material.vlr_total);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	cadastro;
	return 0;
}
