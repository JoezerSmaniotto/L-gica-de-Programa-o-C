#include <stdio.h>
void exibeOnzeTracos(void);
void paralelogramoTracos(void);

void exibeOnzeTracos(void){
 int i;
 for(i=1;i<=11;i++){
	printf("-");	 
 }
}

void paralelogramoTracos(void){
 int i,j;	
	for(i=1;i<=3;i++){
		exibeOnzeTracos();
		printf("\n");
		for(j=0;j<=i;j++){
			printf(" ");
		}
	}
	printf("\n");	
}

int main(){
	
	paralelogramoTracos();
	paralelogramoTracos();
	
	return 0;
}

