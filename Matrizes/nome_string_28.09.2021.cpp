#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

char nome[2][50];
int i,j;
int main(){
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<2;i++){
		printf("Digite o nome do aluno %d: ",i+1);
		gets(nome[i]);
	}
	for(j=0;j<2;j++){
		printf("\n[%s]",nome[j]);
	}	
	
	return 0;
}
