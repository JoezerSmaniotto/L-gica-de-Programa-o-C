#include <stdio.h>

int main (){
	 
	int x,y;

	printf("Informe Um Valor: ");
	scanf("%d",&x);

	printf("Informe Um Valor: ");
	scanf("%d",&y);

	if ( x>=0){

		if(x==0){

			printf("NQ\n");

		} else 	if(x>0){

					if(y>0){

						printf("I\n");

					} else 	{

						printf("IV\n");		
						
					}
				}			


	} else if (y==0){

				printf("NQ\n");

			} else  if (y>0){

						printf("II\n");

					} else {

						printf("III\n");


					}


	return 0;
}