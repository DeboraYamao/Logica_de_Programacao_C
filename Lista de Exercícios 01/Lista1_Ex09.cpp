//Permitir que o usu�rio fa�a divis�o dois valores informados por ele
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float numb1,numb2,divisao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&numb1);
	printf("Digite o segundo n�mero: ");
	scanf("%f",&numb2);
	divisao=numb1/numb2;
	printf("\nA divis�o dos n�meros digitados: %.2f",divisao);
return(0);
}
