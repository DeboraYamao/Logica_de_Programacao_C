//a média de 2 notas de 4 alunos
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float soma,media[4],nota[4][2];
char nome[4][50];
int i,j;

int main(){
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<4;i++){
		printf("Digite o nome do aluno %d: ",i+1);
		fflush(stdin);
		gets(nome[i]);
		soma=0;
			for(j=0;j<2;j++){
				printf("Digite a nota %d do aluno %d: ",j+1,i+1);
				scanf("%f",&nota[i][j]);
				soma+=nota[i][j];
			}
		printf("\n");
		media[i]=soma/2;
	}
	printf("\n");
	for(i=0;i<4;i++){
		printf("Média do aluno %s é: %.2f\n",nome[i],media[i]);
		if(media[i]==10){
			printf("Aluno aprovado com distinção!\n\n");
		}else if(media[i]>=7 and media[i]<10){
			printf("Aluno aprovado!\n\n");
		}else{
			printf("Aluno reprovado!\n\n");
		}
	}
	return 0;
}
