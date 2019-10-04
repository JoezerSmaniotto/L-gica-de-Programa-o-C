#include <stdio.h>
int main()
{
	int nota,ap=0,apm=0,ex=0,exm=0;
	
	scanf("%d",&nota);
	
	while(nota!=99){
		if(nota>=6){
			ap++;
			apm=apm+nota;
		}
		else if (nota>= 3 && nota <6){
			ex++;
			exm=exm+nota;		
		}
		
		scanf("%d",&nota);
	}
	
	apm=apm/ap;
	exm=exm/ex;
	
	printf("Aprovador: %d\n",apm);
	printf("Exame: %d\n",exm);
	
	return 0;
}

