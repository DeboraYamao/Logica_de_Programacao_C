#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

float n1,n2,soma,sub,mult,divisao;
int op;

float calc_soma(float n1,float n2){
	soma=n1+n2;
	return soma;
}
float calc_sub(float n1,float n2){
	sub=n1-n2;
	return sub;
}
float calc_mult(float n1,float n2){
	mult=n1*n2;
	return mult;
}
float calc_divisao(float n1,float n2){
	divisao=n1/n2;
	return divisao;
}

entrada_num(){
	printf("Digite o 1o número: ");
	scanf("%f",&n1);
	printf("Digite o 2o número: ");
	scanf("%f",&n2);
	printf("\nEscolha a opção: \n 1-Soma\n 2-Subtração\n 3-Divisão \n 4-Multiplicação\n\n Opção: ");
	scanf("%d",&op);

switch (op){
	case 1:
		soma=calc_soma(n1,n2);
		printf("\nValor da soma %.2f",soma);
	break;
	
	case 2:
		sub=calc_sub(n1,n2);
		printf("\nValor da subtração %.2f",sub);
	break;

	case 3:
		mult=calc_mult(n1,n2);
		printf("\nValor da multiplicação %.2f",mult);
	break;

	case 4:
		divisao=calc_divisao(n1,n2);
		printf("\nValor da divisão %.2f",divisao);
	break;
	
	default:
	printf("\nOpção inválida.");
}
}	


int main(){
	setlocale(LC_ALL,"Portuguese");
	entrada_num();
	
	return 0;
}
