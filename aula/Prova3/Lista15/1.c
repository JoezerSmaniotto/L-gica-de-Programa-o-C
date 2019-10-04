#include <stdio.h>
void exibeOnzeTracos(void);



int main(){
	int op;
	printf("1-Xavante 2 - Pelotas: ");
	scanf("%d",&op);
	while(op!=1 && op!=2){
		printf("1-Xavante 2 - Pelotas: ");
		scanf("%d",&op);
	}
	
	 printf("           +");
	 exibeOnzeTracos();
	 printf("+\n");
	 exibeOnzeTracos();
	
	if(op==1){
		 printf("|  XAVANTE  |"); 
		 
	} else{
		 
		 printf("|  PELOTAS  |");		
		
		}
		
	 exibeOnzeTracos();
	 printf("\n");
	 printf("           +");
	 exibeOnzeTracos();
	 printf("+\n");

	
	return 0;
}

void exibeOnzeTracos(void){
 int i;
 for(i=1;i<=11;i++){
	printf("-");	 
 }
	
}
