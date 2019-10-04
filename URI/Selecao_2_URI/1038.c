#include <stdio.h>

int main (){
	
 	double qt, op, valt;

 	scanf("%lf %lf",&op,&qt);

 	if(op==1){
 		valt = qt * 4;
 		printf("Total: R$ %.2lf\n",valt);


 	} else if (op ==2){
 		valt = qt * 4.5;
 		printf("Total: R$ %.2lf\n",valt);

 	} else if (op ==3){
 		valt = qt * 5;
 		printf("Total: R$ %.2lf\n",valt);

 	} else if (op ==4){
 		valt = qt * 2;
 		printf("Total: R$ %.2lf\n",valt);

 	} else if (op == 5){
 		valt = qt * 1.5;
 		printf("Total: R$ %.2lf\n",valt);

 	}



	return 0;
}