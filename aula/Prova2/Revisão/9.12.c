#include <stdio.h>

int main(){
	int x,z,cont=0,soma=0;
	printf("Informe Um Valor x < z: ");
	scanf("%d %d",&x,&z);
	
	while(x>z){
		printf("Informe Um Valor Z maior Que o Z: ");
		scanf("%d",&z);
	}
	
	while(soma<z){
		soma=soma+x;
		x++;
		cont++;
	}
	printf("QT: %d\n",cont);
	
	return 0;
}

