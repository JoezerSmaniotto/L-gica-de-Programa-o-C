#include <stdio.h>

int main() {
	int senha, conf=1234;
	printf("Informe a Senha para Login: ");
	scanf("%d",&senha);
	if(senha==conf){
		printf("\nAcesso Permitido...");
	}
		else{
		 		printf("\nAcesso Bloqueado...");	
		}
	

	return 0;
}

