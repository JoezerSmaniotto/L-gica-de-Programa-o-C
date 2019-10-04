#include <stdio.h>
int main(){
	int i,qt,cd=0,ct=0,cq=0,cc=0,num;	
	scanf("%d",&qt);
	
	for(i=0;i<qt;i++){
		scanf("%d",&num);
		if(num%2==0){
			cd++;
		}
		if(num%3==0){
			ct++;
		}
		if(num%4==0){
			cq++;
		}
		if(num%5==0){
			cc++;	
		}
		
	}
	
	printf("%d Multiplo(s) de 2\n",cd);
	printf("%d Multiplo(s) de 3\n",ct);
	printf("%d Multiplo(s) de 4\n",cq);
	printf("%d Multiplo(s) de 5\n",cc);
	
	return 0;
}

