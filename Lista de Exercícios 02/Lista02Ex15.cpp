//Preencher um vetor com os n�meros pares do n�mero 2 a 20.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int i,contador,par[50];

int main(){
	setlocale(LC_ALL,"Portuguese");
	contador=0;
	for(i=1;i<=20;i++){
		if(i%2==0){
			par[contador]=i;
			contador+=1;
		}
	}for(i=0;i<contador;i++){
		printf("\nO n�mero %d � par.",par[i]);
	}
	return(0);
}
