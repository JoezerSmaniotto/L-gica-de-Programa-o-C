#include <stdio.h>

int main (){
	int gre,inter;
	
	printf("Informe a QTD de gols do Gremio: ", gre);
	scanf("%d",&gre);
	printf("Informe a QTD de gols do Inter: ", gre);
	scanf("%d",&inter);

	if(gre>inter){

		printf("Gremio is Champion: %d\n",gre );

	} else if (gre==inter){

			printf("Gremio  and Inter is Champion 'Empate'\n");

 	  	   }else {

	 		printf("Internacional is Champion: %d\n",inter );	
 		}


	return 0;
}