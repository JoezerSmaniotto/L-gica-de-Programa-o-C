#include <stdio.h>

int main(){
	int q,i,num,flag=0;
	
	printf("Informe A Qt: ");
	scanf("%d",&q);
	
	int v[q];
	for(i=0;i<q;i++){
		printf("Informe Uma Idade p/ pos:%d ",i);
		scanf("%d",&v[i]);
	}
	
	do{
		flag=0;
		printf("Informe a Posi: ");
		scanf("%d",&num);
		for(i=0;i<q;i++){
			if(v[i]==v[num]){
				flag=1;
				printf("%d\n",v[num]);
			}
		}
		i=0;
	}while(flag==1);
	
	
	return 0;
}

