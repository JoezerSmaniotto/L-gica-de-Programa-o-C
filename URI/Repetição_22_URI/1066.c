#include <stdio.h>

int main(){
	int num,i,contPosi=0,contNeg=0,contImp=0,contPar=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&num);
		if((num%2)==0){ // Par
			contPar++;
			
		}else{
			contImp++; // Impar 
			
		}
		
		if(num>0){
			contPosi++; // Positivo
		}
		if(num<0){
			contNeg++; // Negativo
		}
	}
	printf("%d valor(es) par(es)\n",contPar);
	printf("%d valor(es) impar(es)\n",contImp);
	printf("%d valor(es) positivo(s)\n",contPosi);
	printf("%d valor(es) negativo(s)\n",contNeg);
	
	return 0;
}

