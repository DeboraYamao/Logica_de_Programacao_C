//Escrever um programa, que leia valores inteiros até ser lido o valor -99.
//Quando isso acontecer o programa deverá escrever a soma e a média dos valores lidos.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int i,num[50],num2,contador;
float soma;

int main(){
	setlocale(LC_ALL,"Portuguese");
	num2=0;
	contador=0;
	while(num2!=-99){
		printf("\nDigite um valor: ");
		scanf("%d",&num[contador]);
		num2=num[contador];
		contador+=1;
	}
	for(i=0;i<=contador;i++){
		soma+=num[i];
	}
	printf("\nA soma dos %d números inteiros é: %.2f",contador,soma);
	printf("\nA média dos %d números inteiros é: %.2f",contador,soma/contador);
	return(0);
}
