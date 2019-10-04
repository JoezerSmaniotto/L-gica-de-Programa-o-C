#include <stdio.h>
void exibeDivisores (int num);

void exibeDivisores (int num){
	int i;
	printf("%d: |",num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("%d |",i);
			
		}	
	}
	printf("\n");	
}

int main(){
	int j;
	for(j=1;j<=20;j++){
		exibeDivisores (j);
		
	}
	
	return 0;
}

