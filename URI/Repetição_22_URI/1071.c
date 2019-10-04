#include <stdio.h>

int main(){
	int n1,n2,cont=0,i;
	scanf("%d %d",&n1,&n2);
	//printf("%d Aqui\n",5%2);
	
	if(n1<n2){
		n1++;
		for(i=n1;i<n2;i++){
			if((i%2)!=0){
				//printf("%d i\n",i);
				cont=cont+i;
				//printf("%d C\n",cont);
			}
		}	
	} 
	
	if(n1>n2){
		n2++;
		for(i=n2;i<n1;i++){
			if((i%2)!=0){
				//printf("%d i\n",i);
				cont=cont+i;
				//printf("%d C\n",cont);
			}
		}		
	}
	
	//if(cont<0){
		//cont=cont*(-1);
	//}
	printf("%d\n",cont);
	
	return 0;
}

