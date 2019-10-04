#include <stdio.h>

int main(){
	int v[13],i,j,m[13][3],k,acert=0,ContSim=0,ContDuP=0,ContTrip=0,soma=0;
	//Preenche o Vetor
	printf("Preenche o Vetor! !\n");
	for(i=0;i<13;i++){
		printf("Informe Um Valor Pos:%d = ",i);
		scanf("%d",&v[i]);
	}
	// Preenche a Matriz
	printf("\nPreenche a Matriz! !\n");
	for(i=0;i<13;i++){
		for(j=0;j<3;j++){	
			printf("Inf. Valor L:%d C:%d = ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	// Printa a Matriz
	printf("\nMatriz! !\n|");
	for(i=0;i<13;i++){
		for(j=0;j<3;j++){	
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	
	// Verifica ACERTOS
	printf("\nAcertos\n");
	for(k=0;k<13;k++){
		if(1==m[k][v[k]-1]){ //
			printf("\nIteracao: %d\n",k);
			acert++;
			printf("Acertos: %d\n",acert);
		}
	}
	
	// Verifica Linha (simples,duplas e triplas)
	for(i=0;i<13;i++){
		for(j=0;j<3;j++){	
			soma=soma+m[i][j];
		}
		
		if(soma==1){
			ContSim++;
			
		} 
		if(soma==2){
			ContDuP++;
			
		}  
		if (soma==3){
			ContTrip++;
			
		}
		soma=0;
		
	}
	
	printf("\n%d: Pontos\n",acert);	
	printf("%d:Simples\n",ContSim);
	printf("%d: Duplas\n",ContDuP);
	printf("%d: Triplas\n",ContTrip);	
		
	return 0;
}

