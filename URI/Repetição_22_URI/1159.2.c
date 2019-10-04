#include <stdio.h>

int main(){
	int x=0,soma=0,i;
	scanf("%d",&x);
	
	while(x!=0){
		
		if((x%2)==0){ // par
			for(i=0;i<5;i++){
				soma=soma+x;
				//printf("Soma: %d\n",soma);
				x=x+2;
				//printf("X: %d\n",x);
			}
		}
		
		if((x%2)!=0){ // Impar
			x++;
			for(i=0;i<5;i++){
				soma=soma+x;
				x=x+2;
			}
		}
		printf("%d\n",soma);
		soma=0;
		//x=0;
		
		scanf("%d",&x);
	}
	
	return 0;
}

