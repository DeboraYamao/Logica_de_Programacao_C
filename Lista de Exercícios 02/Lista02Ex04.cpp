//Receber um número do teclado e informar se ele é divisível por 10, por 5, por 2 ou se não é divisível por nenhum destes.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: ");
	scanf("%d",&num);
	if(num%10==0){
		printf("\nO número %d é dividível por 10.",num);
		
	}if(num%5==0){
		printf("\nO número %d é dividível por 5.",num);
		
	}if(num%2==0){
		printf("\nO número %d é dividível por 2.",num);
	
	}else{
		printf("\nO número %d não é dividível por 10, 5 e 2.",num);
	}
	return(0);
}
