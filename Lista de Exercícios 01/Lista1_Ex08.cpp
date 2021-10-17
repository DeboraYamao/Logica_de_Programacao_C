//Permitir que o usuário faça subtração dois valores informados por ele
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int numb1,numb2,subtracao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: ");
	scanf("%d",&numb1);
	printf("Digite o segundo número: ");
	scanf("%d",&numb2);
	subtracao=numb1-numb2;
	printf("\nA subtração dos números digitados: %d",subtracao);
return(0);
}
