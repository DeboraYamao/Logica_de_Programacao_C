#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<=200;i++){
		if(i!=0 && i%4==0){
			printf("O n�mero %d � divis�vel por 4\n",i);
		}
	}
	return(0);
}
