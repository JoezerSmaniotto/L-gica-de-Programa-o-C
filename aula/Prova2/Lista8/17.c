#include <stdio.h>

int main()
{
	int i, tot=0,totd=0,num;
	
	for(i=1;i<11;i++){
		scanf("%d",&num);
		if(num>=100 && num<=200){
				tot++;
		}else {
				totd++;
		}
		
	}
	printf("Dentro do intervalo: %d\n",tot);
	printf("Fora do intervalo: %d\n",totd);
	
	return 0;
}

