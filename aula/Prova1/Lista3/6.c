#include <stdio.h>

int main (){
	 
	int v1,v2,v3;

	printf("Informe Um Valor: ");
	scanf("%d",&v1);

	printf("Informe Um Valor: ");
	scanf("%d",&v2);

	printf("Informe Um Valor: ");
	scanf("%d",&v3);


	if(v1>v2){

	 	if (v1>v3){

 				printf("Maior Valor :%d\n",v1 );
	 	} else {

	 		printf("%d\n",v3);

	 	}

 	} else  if (v2>v1){

				if (v2>v3){

					printf("Maior Valor :%d\n",v2 );

				}else {

					printf("%d\n",v3);

				}

			} else if ( v3 > v1){

						if ( v3 >v2 ){

							printf("%d\n",v3 );
						
						} else {

							printf("%d\n",v2 );

						} 	

					}




	return 0;
}


/*

#include <stdio.h>

int main (){
	 
	int v1,v2,v3,pri, seg, tot;

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

		} else {

				printf("%d\n",v3);
				pri=v3;				

			} 

	} else if ( v2 > v3){

				printf("%d\n",v2);
				pri=v2;	

			} else {

				printf("%d\n",v3);
				pri=v3;

			}



	return 0;
}



*/