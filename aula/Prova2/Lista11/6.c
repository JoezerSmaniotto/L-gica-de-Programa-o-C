#include <stdio.h>

int main()
{
	int x,y,i,somaimp=0,cont=0,somador=0;
	printf("Informe Dois Valores: ");
	scanf("%d %d",&x,&y);
	if(x==y){
		printf("Informe Dois Valores Diferentes: ");
		scanf("%d %d",&x,&y);

	}
	if(x<y){
		for(i=x;i<=y;i++){
			if((i%2)!=0){
				somaimp=somaimp+i;
				
			}
			
		}
		printf("Valores Impares Somados: %d\n",somaimp);
		
	}
	if(x>y){
		for(i=y;i<=x;i++){
			if((i%3)==0){
				somador=somador+i;
				cont++;
			}
		}	
		somador=somador/cont;
		printf("%d\n",somador);
	} 
	
	return 0;
}

