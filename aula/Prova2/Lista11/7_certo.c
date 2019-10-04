#include <stdio.h>

int main(){
	int qt, soma=0,i,flag=1;
	scanf("%d",&qt);
	
	for(i=1;i<=qt;i++){
		if(flag==1){
			soma=soma+5;
			flag=0;
		
		}else{
			soma=soma+1;
			flag=1;
		}		
	}
	printf("%d\n",soma);
	
	
	return 0;
}

