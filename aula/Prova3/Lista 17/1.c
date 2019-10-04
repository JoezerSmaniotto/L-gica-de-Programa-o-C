
#include <stdio.h>
int maiorNumero (int a,int b);
int maiorNumero (int a,int  b){
	int respota; 
	if(a>b){
		respota=a;
	
	} else if (b>a){
		respota=b;
		
	} else {
		respota=-1;
		
	}	
	
	return respota;
	
}

int main(){
	int x,y,qt,i,resp;
	printf("Informe a QT: ");
	scanf("%d",&qt);
	for(i=1;i<=qt;i++){
		printf("Informe dos Valores Inteiros: ");
		scanf("%d%d",&x,&y);
		resp=maiorNumero(x,y);
		if(resp!=-1){
			printf("%d \n",resp);
		
		}else {
			printf("Eles Sao Iguais\n");
		}
		
		
	}
	
	return 0;
}

