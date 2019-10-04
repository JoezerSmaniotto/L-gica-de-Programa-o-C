#include <stdio.h>

int main(){
	int n;
	printf("Informe Um Valor 1 ou 2  ");
	scanf("%d",&n);

	while(n!=1 && n!=2){
		printf("Informe Um Valor 1 ou 2: Correto: ");
		scanf("%d",&n);
		
	}
	
	printf("Certo!!\n");
	return 0;
}

