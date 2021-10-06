#include <stdio.h>
#include <stdlib.h>
int calcula(int valor){
	int calculo=valor*2;
	return calculo;
}



int main(){
	int numero;
	int conta;
	scanf("%d",&numero);
	calcula(numero);
	conta=2*calcula(numero);
	printf("%d",conta);
	return 0;
}
