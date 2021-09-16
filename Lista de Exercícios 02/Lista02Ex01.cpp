//Apresentar todos os números divisíveis por 4 que sejam menores que 200.
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<=200;i++){
		if(i!=0 && i%4==0){
			printf("O número %d é divisível por 4\n",i);
		}
	}
	return(0);
}
