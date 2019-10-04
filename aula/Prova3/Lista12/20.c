#include <stdio.h>

int main(){
	int cod[5],qt[5],i,op,cd,pos,flag=1,qtd;
	float prec[5],ValVenda,val;
	for(i=0;i<5;i++){
		printf("Informe o Cod %d: ",i);
		scanf("%d",&cod[i]);
		printf("Informe o Preco %d: ",i);
		scanf("%f",&prec[i]);
		printf("Informe o QT %d: ",i);
		scanf("%d",&qt[i]);
	}
	
	printf("1=Venda 2=Reposicao 3=Inventario 4=Sair\n");
	printf("Informe a OP:");
	scanf("%d",&op);
	
	while(op==1 || op==2 || op==3){
	
			if(op==1){
				printf("Informe o Cod do Prod: ");
				scanf("%d",&cd);
				for(i=0;i<5;i++){
					if(cod[i]==cd){
						pos=i;
						flag=0;
						break;
					}
				}
				if(flag==0){
					printf("Informe a QT Vendida: ");
					scanf("%d",&qtd);
					qt[pos]=qt[pos]-qtd;
					ValVenda=qtd*prec[pos];
					
				}
				if(flag==1){
					printf("Cod Invalido\n");
					//flag2=1;
					//break;
				}
				
			}
			if(op==2){
				printf("Informe o Cod do Prod: ");
				scanf("%d",&cd);
				for(i=0;i<5;i++){
					if(cod[i]==cd){
						pos=i;
						flag=0;
						break;
					}
				}
				
				if(flag==0){
					printf("Informe a QT Reposta: ");
					scanf("%d",&qtd);
					qt[pos]=qt[pos]+qtd;
					printf("Estoque Atualizado: %d\n",qt[pos]);
					
				}
						
			}
			
			if(op==3){
				for(i=0;i<5;i++){
					printf("%d %.2f %d ",cod[i],prec[i],qt[i]);
					if(qt[i]>0){
						val=qt[i]*prec[i];
						printf("RS %.2f\n",val);
					}else{
						printf("\n");
					}
					
				}
				
			}
			
		printf("1=Venda 2=Reposicao 3=Inventario 4=Sair\n");
		printf("Informe a OP:");
		scanf("%d",&op);
		
	}
	
	return 0;
}

