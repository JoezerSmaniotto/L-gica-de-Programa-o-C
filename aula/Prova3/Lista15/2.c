#include <stdio.h>
void exibeOnzeTracos(void);
void retTracos(void);


void exibeOnzeTracos(void){
 int i;
 for(i=1;i<=11;i++){
	printf("-");	 
 }
	
}

void retTracos(void){
	int i;
	for(i=1;i<=3;i++){
		exibeOnzeTracos();	
		printf("\n");
	}
	
}

int main(){
	retTracos();
	printf("\n\n");
	retTracos();
	
	return 0;
}

