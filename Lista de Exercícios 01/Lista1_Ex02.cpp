//Fazendo do comando de entrada scanf receba um valor digitado pelo usuário e em seguida apresente ele em tela.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int numb;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: ");
	scanf("%d",&numb);
	printf("\nO número digitado foi: %d",numb);
	
return(0);
}
