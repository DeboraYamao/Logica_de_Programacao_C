//Permitir que o usuário faça divisão dois valores informados por ele
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float numb1,numb2,divisao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: ");
	scanf("%f",&numb1);
	printf("Digite o segundo número: ");
	scanf("%f",&numb2);
	divisao=numb1/numb2;
	printf("\nA divisão dos números digitados: %.2f",divisao);
return(0);
}
