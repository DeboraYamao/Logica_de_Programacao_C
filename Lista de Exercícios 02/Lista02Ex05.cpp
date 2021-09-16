#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int idade;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	if(idade<16){
		printf("\nNão-eleitor.");
		
	}if(idade>=16 and idade<18 or idade>65){
		printf("\nEleitor facultativo.");
		
	}if(idade>=18 and idade<=65){
		printf("\nEleitor obrigatório.");
	}
	return(0);
}
