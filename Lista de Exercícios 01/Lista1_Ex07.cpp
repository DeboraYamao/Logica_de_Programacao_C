//Permitir que o usu�rio some dois n�meros informados por ele
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int numb1,numb2,soma;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&numb1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&numb2);
	soma=numb1+numb2;
	printf("\nA soma dos n�meros digitados: %d",soma);
return(0);
}
