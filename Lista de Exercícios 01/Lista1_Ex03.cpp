//Ler um n�mero e se for maior que 50 imprimir a metade desse n�mero
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float numb;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um n�mero: ");
	scanf("%f",&numb);
	if (numb>50){
		printf("\nA metade do n�mero digitado foi: %.2f",numb/2);
	}else{
		printf("\nO n�mero digitado foi: %.0f",numb);
	}
return(0);
}
