#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

char nome[50];
int i,num;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o nome: ");
	gets(nome);
	
	num=strlen(nome);
	
	if(num!=0){
		printf("O nome informado possui %d caracteres!",num);	
	}else{
		printf("Nome não informado.");
	}
	return(0);
}
