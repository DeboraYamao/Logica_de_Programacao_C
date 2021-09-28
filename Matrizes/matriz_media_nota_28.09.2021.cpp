//a média de 2 notas de 2 alunos
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float soma,media[4],nota[4][2];

int main(){
	int l,c;
	setlocale(LC_ALL, "Portuguese");
	for(l=0;l<4;l++){
		soma=0;
			for(c=0;c<2;c++){
				printf("Digite a nota %d do aluno %d: ",c+1,l+1);
				scanf("%f",&nota[l][c]);
				soma+=nota[l][c];
			}
		printf("\n");
		media[l]=soma/2;
	}
	printf("\n");
	for(l=0;l<4;l++){
		printf("Média do aluno %d é: %.2f\n",l+1,media[l]);
		if(media[l]>=7){
			printf("Aluno aprovado!\n\n");
		}else{
			printf("Aluno reprovado!\n\n");
		}
	}
	return 0;
}
