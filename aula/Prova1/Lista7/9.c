#include <stdio.h>

int main (){
	
	int ant=-1, num,cont=0;

	do{
		scanf("%d",&num);
		if(num>=0){
			
			if(ant>num){
				cont++;
			}

			ant=num;
		}

	}while(num > 0);

	printf("Total: %d\n",cont);

	return 0;
}