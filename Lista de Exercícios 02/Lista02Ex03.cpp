#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char nome[50];
int sexo,idade;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o seu nome: ");
	gets(nome);
	printf("\nDigite o seu sexo: 1-Masculino 2-Feminino\nOpcao: ");
	scanf("%d",&sexo);
	printf("\nDigite a sua idade: ");
	scanf("%d",&idade);
	
	if(sexo==1 && idade>18){
		printf("\n%s ALISTAMENTO.",nome);
	}else{
		printf("\nNÃO ESTÁ APTO.");
	}
	return(0);
}
