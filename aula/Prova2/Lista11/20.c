	#include <stdio.h>

	int main(){
		int num,i=0,cont=0,contv=0,val=1;
		scanf("%d",&num);
		
		while (num>contv){		
			if(num>0){
				
					for(i=1 ; i <= (val/2); i++){
						if((val%i)==0){
							cont=cont+i;
						}
					}
					
					if(val==cont){
						printf("%d ",val);
						contv++;
					
					}
					
					cont=0;
					val++;
			}
					
		}
			
		
		return 0;
	}

