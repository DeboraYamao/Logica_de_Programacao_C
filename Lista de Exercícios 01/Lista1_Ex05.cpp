//Ler dois valores e apresentar a m�dia
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float num1,num2,media;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f",&num2);
	media=(num1+num2)/2;
	printf("\nA m�dia dos n�meros digitados: %.2f",media);
return(0);
}
