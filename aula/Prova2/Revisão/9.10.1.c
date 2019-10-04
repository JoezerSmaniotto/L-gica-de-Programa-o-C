#include <stdio.h>

int main(){
	int num;
	
	do{		
		printf("Informe Um Valor: ");
		scanf("%d",&num);
			if(num>0){
				printf("%d ",num);
				while(num>1){	
						if((num%2)==1){ // Impar
							num=(3*num)+1;
							printf("%d ",num);
						
						}else{ // Par
							num=num/2;
							printf("%d ",num);	
						}
				}
				printf("\n");
			}
	}while(num>0);
	
	return 0;
}

