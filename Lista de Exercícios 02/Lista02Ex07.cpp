#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	if(num>20 and num<80){
		printf("\nParab�ns!");
	}else{
		printf("\nTente outra vez!");
	}
	return(0);
}
