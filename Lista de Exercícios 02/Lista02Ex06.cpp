#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num1,num2,soma;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf("Digite o 2� n�mero: ");
	scanf("%d",&num2);
	
	soma=num1+num2;
	
	if(soma>10){
		printf("\nA soma dos valore �: %d",soma);
	}else{
		printf("\nA soma dos valores � menor que 10.");
	}
	return(0);
}
