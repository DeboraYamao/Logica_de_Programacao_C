#include <stdio.h>
#include <stdlib.h>

struct funcionarios{
	char nome[100];
	float salario;
	float reajuste;
};

struct funcionarios funcionario;

int main(){
	printf("Digite o nome: ");
	fflush(stdin);
	gets(funcionario.nome);
	printf("Digite o salario: ");
	scanf("%f",&funcionario.salario);
	printf("Digite o reajuste: ");
	scanf("%f",&funcionario.reajuste);
	printf("\nAumento de %.2f",(funcionario.salario*funcionario.reajuste)/100);
	printf("\nNovo salario: %.2f",(funcionario.salario+(funcionario.salario*funcionario.reajuste)/100));
}
