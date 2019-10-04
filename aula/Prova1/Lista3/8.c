#include <stdio.h>

int main (){
	 
	int v1,v2,v3,pri, seg, ter, tot;

	printf("Informe Um Valor: ");
	scanf("%d",&v1);

	printf("Informe Um Valor: ");
	scanf("%d",&v2);

	printf("Informe Um Valor: ");
	scanf("%d",&v3);


	if (v1>v2){

		if (v1>v3){

			printf("%d\n",v1);
			pri=v1;
			
				if(v2>v3){

					seg=v2;
					ter=v3;
				}
				else {
					seg=v3;
					ter=v2;
				}



		} else {

				printf("%d\n",v3);
				pri=v3;	
				seg=v1;	
				ter=v2;

			} 

	} else if ( v2 > v3 ){

				printf("%d\n",v2);
				pri=v2;	
				if(v3 > v1){

					seg=v3;
					ter=v1;

				}else {

					seg=v1;
					ter=v2;
				}

			} else {

				printf("%d\n",v3);
				pri=v3;
				seg=v2;
				ter=v1;

			}

		tot = pri+seg;

		printf("Primeiro : %d \n",ter);
		printf("Segundo  : %d \n",seg);
		printf("Terceiro : %d \n",pri);

	return 0;
}