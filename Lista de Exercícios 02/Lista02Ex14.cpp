//Receber um nome no teclado e imprimir quantas letras "A" tem o nome
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

char nome[50],nome2[50];
int i,tamanho,contador;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o nome: ");
	gets(nome);
	
	tamanho=strlen(nome);
	
	for(i=0;i<tamanho;i++){
		nome2[0]=nome[i];
		if(strcmp(nome2,"a")==0 or strcmp(nome2,"A")==0){
			contador+=1;
		}
	}
	printf("\nO nome possui %d letras A.",contador);
	return(0);
}
