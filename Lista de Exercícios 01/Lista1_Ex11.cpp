//Transformar temperatura de celcius para farenheit (formula matemática tem na web)
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float celcius,farenheit;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a temperatura em graus celcius: ");
	scanf("%f",&celcius);
	farenheit=(celcius*1.8)+32;
	printf("\n%.2f°C é igual a %.2f°F",celcius,farenheit);
return(0);
}
