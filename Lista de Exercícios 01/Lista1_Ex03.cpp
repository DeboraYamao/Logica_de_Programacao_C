//Ler um número e se for maior que 50 imprimir a metade desse número
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float numb;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: ");
	scanf("%f",&numb);
	if (numb>50){
		printf("\nA metade do número digitado foi: %.2f",numb/2);
	}else{
		printf("\nO número digitado foi: %.0f",numb);
	}
return(0);
}
