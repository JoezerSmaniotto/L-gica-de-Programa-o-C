#include <stdio.h>
int main(){
	int certa,cont=0,i=0,v[5]; //op1,op2,op3,op4,op5,
	do{
		scanf("%d",&certa);
	}while(certa<1 ||certa>4);
	
	do{
		scanf("%d",&v[i]);
		
		if(v[i]>=1 && v[i]<=4){
			i++;
		} 
		
		if(v[i]<1 && v[i]>4){
			while(v[i]<1 && v[i]>4){
				//printf("Informe uma Opcao Correta entre 1 ea 4: ");
				scanf("%d",&v[i]);
			}
			i++;
		}
		
	}while(i<=4);
	
	for(i=0;i<=4;i++){
		if(v[i]==certa){
			cont++;
		}
	}
	
	printf("%d\n",cont);
	
	return 0;
}

