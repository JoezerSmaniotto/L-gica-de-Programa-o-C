#include <stdio.h>

int main(){
	float n1,maior=0, menor=12;
	do{
		scanf("%f",&n1);
		if(n1>=0 && n1<=10){
			if(n1<menor){
				menor=n1;
			}
			if(n1> maior){
				maior=n1;
			}	
		}
		
	}while (n1>= 0 && n1<=10);
	
	printf("Menor: %.2f\n",menor);
	printf("Maior: %.2f\n",maior);
	
	
	return 0;
}

