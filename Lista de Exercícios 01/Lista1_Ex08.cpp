//Permitir que o usu�rio fa�a subtra��o dois valores informados por ele
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int numb1,numb2,subtracao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&numb1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&numb2);
	subtracao=numb1-numb2;
	printf("\nA subtra��o dos n�meros digitados: %d",subtracao);
return(0);
}
