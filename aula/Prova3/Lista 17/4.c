	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>

	int fatorial (int n);
	float calculaSerie(int n,int x);
	// A
	int fatorial (int n){
		int i,fat=1;
		
		for(i=1;i<=n;i++){
			fat=fat*i;
		}
		
		return fat;
				
	}
	// B
	float calculaSerie(int n,int x){
		float s=0;
		int den=1,i;
		for(i=1;i<=n;i++,den=den+2){  // den=den+2
			if(i%2==1){
				s=s+pow(x,den)/fatorial(den);
				
			}else{
				s=s-pow(x,den)/fatorial(den);
				
			}
			
		}
		return s;
	}

	int main(){
		int x,q;
		float r;
		printf("Informe a QT:");
		scanf("%d",&q);
		while(q>0){
			printf("Informe a X:");
			scanf("%d",&x);
			r=calculaSerie(q,x);
			printf("R: %f\n",r);
			printf("Informe a QT:");
			scanf("%d",&q);
		}
		return 0;
	}

