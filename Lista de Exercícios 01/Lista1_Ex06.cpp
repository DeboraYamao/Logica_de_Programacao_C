//Ler um número e imprimir: se é maior que 20, igual a 20 ou menor que 20
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float numb;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: ");
	scanf("%f",&numb);
	if (numb>20){
		printf("\nO número digitado %.2f é maior que 20.",numb);
	}else if(numb==20){
		printf("\nO número digitado %.2f é igual a 20.",numb);
	}
	else{
		printf("\nO número digitado %.2f é menor que 20.",numb);
	}
return(0);
}
