//Fazer um programa que receba N valores no teclado e determine o maior.
//A condi��o de t�rmino do programa � quando o usu�rio digitar zero. 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num[50],num2,i,contador,j,contador2;

int main(){
	setlocale(LC_ALL,"Portuguese");
	num2=1;
	contador=0;
	while(num2!=0){
		printf("\nDigite um n�mero: ");
		scanf("%d",&num[contador]);
		num2=num[contador];
		contador+=1;
	}
	for(i=0;i<contador;i++){
		for(j=0;j<contador;j++){
			if(num[i]>=num[j]){
				contador2+=1;
			}
		}
		if(contador2==contador){
			printf("\nO maior n�mero � %d.",num[i]);
		}
		contador2=0;
	}
	return(0);
}
