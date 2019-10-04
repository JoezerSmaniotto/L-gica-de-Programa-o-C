#include <stdio.h>

int main (){
	
	int op,ggre,gint,vg=0,vi=0,empates=0,cgren=0;

	do {
		scanf("%d%d",&gint,&ggre);
		cgren++; // Conta qt de grenais

		if(ggre>gint){
			vg++;
		
		}else if (gint>ggre){
			vi++;
		
		}else{
			empates++;
		}



		printf("Novo grenal (1-sim 2-nao)");
		scanf("%d",&op);	
		

	}while(op==1);

	printf("%d grenais\n",cgren);
	printf("Inter:%d\n",vi);
	printf("Gremio:%d\n",vg);
	printf("Empates:%d\n",empates);

	if( vg>vi ){
		printf("Gremio venceu mais\n");
	
	}else if(vi>vg){
		printf("Inter venceu mais\n");
	}

	return 0;
}	