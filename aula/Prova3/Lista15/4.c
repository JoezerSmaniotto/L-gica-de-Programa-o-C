#include <stdio.h>
void exibeAlfabeto(void);
void exibeDigitos(void);
void exibeCardapio(void);

void exibeAlfabeto(void){
	for(int i=65;i<=90;i++){
		printf("%c ",i);
	}
	printf("\n");	
}
void exibeCardapio(void){
	printf("1.Alfabeto\n");
	printf("2.Digitos\n");
	printf("3.Sair\n");	
}

void exibeDigitos(void){
	for(int i=0;i<=9;i++){
		printf("%d ",i);	
	}	
	printf("\n");
}

int main(){
	int op;
	
	exibeCardapio();
	scanf("%d",&op);
	while(op!=3){
		if(op==1){
			exibeAlfabeto();
			printf("\n");
		}
		
		if(op==2){
			exibeDigitos();
			
		}
		
			
		printf	("Informe UM Op: ");
		scanf("%d",&op);
			
		
	}
	
	
	return 0;
}

