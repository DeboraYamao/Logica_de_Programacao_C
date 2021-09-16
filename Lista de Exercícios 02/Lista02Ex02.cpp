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
	
	if(num>4){
		for(i=0;i<4;i++){
			printf("\n%c",nome[i]);
		}
	}else{
		printf("O nome informado não possui o mínimo de caracteres!");
	}
	return(0);
}
