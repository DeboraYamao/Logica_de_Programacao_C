//Ler um n�mero e imprimir: se � maior que 20, igual a 20 ou menor que 20
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float numb;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um n�mero: ");
	scanf("%f",&numb);
	if (numb>20){
		printf("\nO n�mero digitado %.2f � maior que 20.",numb);
	}else if(numb==20){
		printf("\nO n�mero digitado %.2f � igual a 20.",numb);
	}
	else{
		printf("\nO n�mero digitado %.2f � menor que 20.",numb);
	}
return(0);
}
