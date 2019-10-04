#include <stdio.h>

int main(){
	
	int i,num,nd=0,nf=0,l;
	scanf("%d",&l);
	
	for(i=0;i<l;i++){
		scanf("%d",&num);
		if(num>= 10 && num<=20){
			nd++;
		} else {
			nf++;
		}
	
	}
	
	printf("%d in\n",nd);
	printf("%d out\n",nf);
	
	return 0;
}

