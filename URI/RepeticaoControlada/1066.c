#include <stdio.h>

int main()
{
	int cp=0,cn=0,ci=0,cpos=0,num,i;
	
	for(i=0;i<5;i++){
		scanf("%d",&num);
		
		if((num%2)==0){
			cp++; // Par
		} else{
			ci++; // Impar
		}
		
		if(num>0){
			cpos++;
		}else if(num<0){
			cn++;
		}
		
	}
	printf("%d valor(es) par(es)\n",cp);
	printf("%d valor(es) impar(es)\n",ci);
	printf("%d valor(es) positivo(s)\n",cpos);
	printf("%d valor(es) negativo(s)\n",cn);
	
	return 0;
}

