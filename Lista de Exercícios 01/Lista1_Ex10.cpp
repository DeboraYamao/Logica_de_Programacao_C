//Permitir que o usu�rio informa dois valores e ele insira qual opera��o ele deseja fazer
//(op��es s�o 1- soma, 2-subtra��o, 3-divis�o, 4-multiplica��o
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int opcao;
float num1,num2,soma,subtracao,divisao,multiplicacao;

float calc_soma(float num1,float num2){
	soma=num1+num2;
	return soma;
}
float calc_subtracao(float num1,float num2){
	subtracao=num1-num2;
	return subtracao;
}
float calc_divisao(float num1,float num2){
	divisao=num1/num2;
	return divisao;
}
float calc_multiplicacao(float num1,float num2){
	multiplicacao=num1*num2;
	return multiplicacao;
}
entrada_num(){
	printf("Digite o 1� n�mro: ");
	scanf("%f",&num1);
	printf("Digite o 2� n�mro: ");
	scanf("%f",&num2);
	printf("\nEscolha a opera��o que deseja realizar: \n 1-Soma 2-Subtra��o 3-Divis�o 4-Multiplica��o\n\n Op��o: ");
	scanf("%d",&opcao);

switch (opcao){
	case 1:
		soma=calc_soma(num1,num2);
		printf("\nA soma dos valores: %.2f",soma);
	break;
	
	case 2:
		subtracao=calc_subtracao(num1,num2);
		printf("\nA subtracao dos valores: %.2f",subtracao);
	break;
	
	case 3:
		divisao=calc_divisao(num1,num2);
		printf("\nA divis�o dos valores: %.2f",divisao);
	break;
	
	case 4:
		multiplicacao=calc_multiplicacao(num1,num2);
		printf("\nA multiplica��o dos valores: %.2f",multiplicacao);
	break;
	
	default:
		printf("Op��o inv�lida.");
}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	entrada_num();
return(0);
}
