	#include <stdio.h>

	int main(){
		int x,i,soma=0;
		scanf("%d",&x);
		while(x!=0){
			if((x%2)==0){
				for(i=x;i<(x+10);i=i+2){
					soma=soma+i;
					printf("i %d\n",i);
				}
			}
			if((x%2)==1){
				x++; // Para virar par
				for(i=x;i<(x+10);i=i+2){
					soma=soma+i;
				}
				
			}
			printf("%d\n",soma);
			soma=0;
			scanf("%d",&x);
		}
		
		
		return 0;
	}

