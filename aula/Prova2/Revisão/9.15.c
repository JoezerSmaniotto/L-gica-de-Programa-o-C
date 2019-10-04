#include <stdio.h>

int main(){
	int num,fat=1,i;
	
	printf("Informe Um Numero Positivo: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fat=fat*i;
	}
	printf("%d\n",fat);
	
	return 0;
}

