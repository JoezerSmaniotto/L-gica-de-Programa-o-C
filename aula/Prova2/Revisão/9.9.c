#include <stdio.h>

int main(){
	int com,cont=0;
	scanf("%d",&com);
	
	while(com>1){
		cont++;
		com=com/2;
		printf("Cont: %d\n",cont);
	}
	
	printf("QT: %d\n",cont);
	
	return 0;
}

