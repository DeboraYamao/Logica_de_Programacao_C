//Receber 4 números e imprimi-los em ordem crescente 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int num[4],i,contador,ordem[4];

int main(){
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<4;i++){
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<4;i++){
		if(num[0]>num[i]){
			contador+=1;
		}
	}
	ordem[contador]=num[0];
	
	contador=0;
	for(i=0;i<4;i++){
		if(num[1]>num[i]){
			contador+=1;
		}
	}
	ordem[contador]=num[1];
	
	contador=0;
		for(i=0;i<4;i++){
		if(num[2]>num[i]){
			contador+=1;
		}
	}
	ordem[contador]=num[2];
	
	contador=0;
			for(i=0;i<4;i++){
		if(num[3]>num[i]){
			contador+=1;
		}
	}
	ordem[contador]=num[3];
	printf("\nOs números digitados em ordem credcente: ")
	for(i=0;i<4;i++){
		printf("\n%d",ordem[i]);
	}
	return(0);
}
