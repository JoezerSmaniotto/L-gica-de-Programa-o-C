#include <stdio.h>

int main(){
	int ba=500,bb=1500, contAnos=0;
	
	while(bb>ba){
		ba= ba + (ba* (5.2/100));
		bb= bb + (bb*(1.8/100));
		printf("A: %d\n",ba);
		printf("B: %d\n",bb);
		contAnos++;
	}
	printf("Anos: %d\n",contAnos);
	
	
	return 0;
}

