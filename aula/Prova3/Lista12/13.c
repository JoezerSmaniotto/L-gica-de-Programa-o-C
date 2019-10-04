#include <stdio.h>

int main(){
	int q,r,i,tot,j,op;
	printf("Informe a QT Q: ");
	scanf("%d",&q);
	printf("Informe a QT R: ");
	scanf("%d",&r);
	int vq[q],vr[r];
	printf("Vetor Q\n");
	for(i=0;i<q;i++){
		printf("Informe Uma Temp: P/ Pos %d: ",i);
		scanf("%d",&vq[i]);
	}
	printf("Vetor R\n");
	for(i=0;i<r;i++){
		printf("Informe Uma Temp: P/ Pos %d: ",i);
		scanf("%d",&vr[i]);
	}
	
	tot=q+r;
	int soma[tot];
	printf("1.Vetor A antes de B 2.Vetor B antes de A 3.Fim: ");
	scanf("%d",&op);
	
	while(op==1 || op==2){
		if(op==1){
			for(i=0,j=0;j<q;j++,i++){
				soma[i]=vq[j];
			}
			for(j=0;j<r;j++,i++){
				soma[i]=vr[j];
			}
			
			printf("|");
			for(i=0;i<tot;i++){
				printf("%d|",soma[i]);
			}
			
			printf("\n1.Vetor A antes de B 2.Vetor B antes de A 3.Fim: ");
			scanf("%d",&op);
		}
		if(op==2){
			for(i=0,j=0;j<r;j++,i++){
				soma[i]=vr[j];
			}
			
			for(j=0;j<q;j++,i++){
				soma[i]=vq[j];
			}
			
			printf("|");
			for(i=0;i<tot;i++){
				printf("%d|",soma[i]);
			}
			
			printf("\n1.Vetor A antes de B 2.Vetor B antes de A 3.Fim: ");
			scanf("%d",&op);
		}
		
	
	}
	
	return 0;
}

