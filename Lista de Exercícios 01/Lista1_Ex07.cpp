//Permitir que o usuário some dois números informados por ele
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int numb1,numb2,soma;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: ");
	scanf("%d",&numb1);
	printf("Digite o segundo número: ");
	scanf("%d",&numb2);
	soma=numb1+numb2;
	printf("\nA soma dos números digitados: %d",soma);
return(0);
}
