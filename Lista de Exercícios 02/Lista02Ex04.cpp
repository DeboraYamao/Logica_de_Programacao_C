#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	if(num%10==0){
		printf("\nO n�mero %d � divid�vel por 10.",num);
		
	}if(num%5==0){
		printf("\nO n�mero %d � divid�vel por 5.",num);
		
	}if(num%2==0){
		printf("\nO n�mero %d � divid�vel por 2.",num);
	
	}else{
		printf("\nO n�mero %d n�o � divid�vel por 10, 5 e 2.",num);
	}
	return(0);
}
