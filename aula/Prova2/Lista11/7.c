#include <stdio.h>

int main(){
	int num,soma;
	scanf("%d",&num);
	if(num%2==0){
		soma=num*3;
		printf("%d\n",soma);
	
	}else{
		if(num==1){
			num=5;
			printf("%d\n",num);
		} else{
			soma=5+ ((num-1)*3); // Menos 1 pq inicio com o 5
			printf("%d",soma);
		
		}
	}
	
	
	return 0;
}

