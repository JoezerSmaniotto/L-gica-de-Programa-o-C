#include <stdio.h>

int main(){
	int x,y,soma=0,i;
	scanf("%d %d",&x,&y);
	
	if(x<y){
		for(i=x;i<=y;i++){
			if((i%13)!= 0){
				soma=soma+i;
			}
		}	
	}
	
	if(x>y){
		for(i=y;i<=x;i++){
			if((i%13)!=0){
				soma=soma+i;
			}
		}	
	}
	
	printf("%d\n",soma);
	
	return 0;
}

