#include <stdio.h>

int main(){
	int i,n,x,y,soma=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		if(x>=y){
			y++;
			for(j=y;j<x;j++){
				
				if((j%2)!=0){
					soma=soma+j;
				}
			}
		}
		
		if(y>x){
			x++;
			for(j=x;j<y;j++){
				if((j%2)!=0){
					soma=soma+j;
				}
			}
			
		}
		printf("%d\n",soma);
		soma=0;	
	}
	
	
	return 0;
}

