//Ler a idade de uma pessoa e informar a sua classe eleitoral.  
//   a. Não-eleitor (abaixo de 16 anos)  
//   b. Eleitor obrigatório (entre 18 e 65 anos)  
//   c. Eleitor facultativo (entre 16 e 18 e maior de 65anos) 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int idade;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	if(idade<16){
		printf("\nNăo-eleitor.");
		
	}if(idade>=16 and idade<18 or idade>65){
		printf("\nEleitor facultativo.");
		
	}if(idade>=18 and idade<=65){
		printf("\nEleitor obrigatório.");
	}
	return(0);
}
