//Ler 2 n�meros inteiros e soma-los. Se a soma for maior que 35, mostrar o resultado da soma
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
	if (soma>35){
		printf("\nA soma dos n�meros digitados foi: %d",soma);
	}
return(0);
}
