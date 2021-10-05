#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

float calculo_media(float nota1,float nota2);

int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,media;
	printf("Digite a nota 1: ");
	scanf("%f",&n1);
	printf("Digite a nota 2: ");
	scanf("%f",&n2);
	media=calculo_media(n1,n2);
	printf("\nA média do aluno é: %.2f",media);
	return 0;
}

float calculo_media(float n1, float n2){
	float media=(n1+n2)/2;
	return media;
}
