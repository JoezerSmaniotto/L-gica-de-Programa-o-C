#include <stdio.h>

int main(){
	float  qt,n1, maior=0;
	scanf("%f",&qt);
	for(int i=1;i<=qt;i++){
		printf("Informe uma Nota %d: ",i);
		scanf("%f",&n1);
		if(n1>maior){
			maior=n1;
		}
	}
	printf("Maior: %.2f\n",maior);
	
	return 0;
}

