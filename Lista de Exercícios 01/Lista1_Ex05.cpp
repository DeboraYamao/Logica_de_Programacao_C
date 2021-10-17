//Ler dois valores e apresentar a média
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float num1,num2,media;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: ");
	scanf("%f",&num1);
	printf("Digite o segundo número: ");
	scanf("%f",&num2);
	media=(num1+num2)/2;
	printf("\nA média dos números digitados: %.2f",media);
return(0);
}
