#include <stdio.h>

int main(){
	int a,b,imp=0,i, med=0,cont=0;
	scanf("%d %d",&a,&b);
	
	while(a==b){
		printf("Infome Novos Valores Diferentes:");
		scanf("%d %d",&a,&b);
	}
	
	if(b>a){
		for(i=a;i<=b;i++){
			if(i%2!=0){
				printf("%d\n",i);
				imp=imp+i;
			}
		}
		printf("Soma Dos Impares: %d\n",imp);
	}
	
	if(a>b){
		for(i=b;i<=a;i++){
			if((i%3)==0){
				med=med+i;
				cont++;
			}
		}
		med=med/cont;
		printf("Media Mult 3: %d\n",med);
	}
	
	
	return 0;
}

