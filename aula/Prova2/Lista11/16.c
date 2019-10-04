#include <stdio.h>

int main(){
	float idad,n1,maior=0,armId, maisVelho=0,armNota;
	do{
		printf("Informe Idade: ");
		scanf("%f",&idad);	
		if( idad>=0 ){
			printf("Informe NT: ");
			scanf("%f",&n1);
			if(n1>maior){ // Idade do Aluno com maior Nota
				maior=n1;
				armId=idad;
			}
			if(maisVelho < idad ){ // // Armazena Nota do Aluno mais Velho
				maisVelho = idad;
				armNota=n1; 
				
			}
			
		}
		
	}while ( idad>= 0 );
	
	printf("Idade Maior NT: %.2f\n",armId);
	printf("Nota Aluno Mais Velho: %.2f\n",armNota);
	
	
	return 0;
}

