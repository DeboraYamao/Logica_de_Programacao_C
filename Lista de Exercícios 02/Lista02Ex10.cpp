//Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente.
//Se digitar correto mostrar o número digitado.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"Portuguese");
	num=5;
	
	while(num<=0 or num>4){
	printf("\nDigite um número entre 1 e 4: ");
	scanf("%d",&num);
		if(num>=0 and num<=4){
			printf("\nO valor digitado foi: %d",num);
		}else{
			printf("\nEntrada inválida!");
		}
	}
	return(0);
}
