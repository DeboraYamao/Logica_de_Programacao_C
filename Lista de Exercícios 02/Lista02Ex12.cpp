//Apresentar o total da soma obtida dos 20 primeiros n�meros inteiros.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int i,soma;

int main(){
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<=20;i++){
		soma+=i;
	}
	printf("A soma dos 20 primeiros n�meros inteiros �: %d",soma);
	return(0);
}
