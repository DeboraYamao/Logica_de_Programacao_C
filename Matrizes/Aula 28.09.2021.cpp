#include <stdio.h>
#include <stdlib.h>

float n1,n2,soma,sub,mult,divisao;
int op;

calc_soma(){
	soma=n1+n2;
	printf("Resultado da soma %.2f",soma);
}
calc_sub(){
	sub=n1-n2;
	printf("Resultado da subtracao %.2f",sub);
}
calc_mult(){
	mult=n1*n2;
	printf("Resultado da multiplicacao %.2f",mult);
}
calc_divisao(){
	divisao=n1/n2;
	printf("Resultado da divisao %.2f",divisao);
}

entrada_num(){
	printf("Digite o 1o numero: ");
	scanf("%f",&n1);
	printf("Digite o 2o numero: ");
	scanf("%f",&n2);
	printf("Escolha a opção: \n 1-Soma\n 2-Subtração\n 3-Multiplicacao \n 4-Divisao\n Escolha a opcao: ");
	scanf("%d",&op);

switch (op){
	case 1:
		calc_soma();
	break;
	
	case 2:
		calc_sub();
	break;

	case 3:
		calc_mult();
	break;

	case 4:
		calc_divisao();
	break;
	
	default:
	printf("Opcao invalida.");
}
}	


int main(){
	entrada_num();
	return 0;
}
