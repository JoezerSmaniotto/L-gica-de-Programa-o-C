#include <stdio.h>

int main (){
	int  op,conta=0,contg=0,contd=0;

	do{
		scanf("%d",&op);
		
		while( (op != 1) && (op != 2) && (op != 3) && (op!=4) ){
			scanf("%d",&op);
		}

		if(op ==  1){
			conta++;
		
		} else if(op == 2){
			contg++;
		
		} else if(op == 3){
			contd++;
		}


	}while (op==1 || op==2 || op==3);	

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",conta);
	printf("Gasolina: %d\n",contg);
	printf("Diesel: %d\n",contd);

	return 0;
}