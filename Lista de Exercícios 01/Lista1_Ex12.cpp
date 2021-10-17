//Transformar temperatura de celcius para farenheit (formula matemática tem na web)
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float celcius,farenheit;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a temperatura em graus farenheit: ");
	scanf("%f",&farenheit);
	celcius=(5*(farenheit-32)/9);
	printf("\n%.2f°F é igual a %.2f°C",farenheit,celcius);
return(0);
}
