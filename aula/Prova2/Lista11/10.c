#include <stdio.h>

int main(){
	
	int num, i,cont=0;
	scanf("%d",&num);
	
	while(num<0){
		scanf("%d",&num);
	}
	
	for(i=1;i<=num;i++){
		if((num%i) == 0 ){
			cont++;
			
		}
	
	}
	
	if(num==1){
		printf("Nao eh Primo\n");
		
	}else if(cont==2){
		printf("Eh Primo\n");
		
	}else if (cont>2){
		printf("Nao eh Primo\n");
		
	}
	
	return 0;
}


