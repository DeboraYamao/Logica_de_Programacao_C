#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: ");
	scanf("%d",&num);
	
	if(num>20 and num<80){
		printf("\nParabéns!");
	}else{
		printf("\nTente outra vez!");
	}
	return(0);
}
