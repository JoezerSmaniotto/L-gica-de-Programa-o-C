#include <stdio.h>

int main(){
	int etp,i,j, trec,km=0,temp=0, totkm=0,tre50=0, totemp=0,distMaisCurta=100000000;
	scanf("%d",&etp);
	for(i=1;i<=etp;i++){
		scanf("%d",&trec);
		for(j=1;j<=trec;j++){
			scanf("%d %d",&km,&temp);
			if(km<50){
				tre50++;
			}
			totkm=totkm+km;	
			totemp=totemp+temp;
		}
		
		if(totkm<distMaisCurta){
			distMaisCurta=totkm;
		}
		printf("Etapa: %d %d(Tempo Total da Etapa)\n",i,totemp);
		totemp=0;
		totkm=0;
	}
	
	printf("%d (Trecos Com Menos de 50 Km)\n",tre50);
	printf("%d (dist. do perc. da etapa mais curta)",distMaisCurta);
	
	return 0;
}

