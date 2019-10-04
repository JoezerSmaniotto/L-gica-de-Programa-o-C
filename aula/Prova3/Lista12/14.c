#include <stdio.h>

int main(){
	int q,i,j,flag=0,k;
	printf("Informe a QT: ");
	scanf("%d",&q);
	int a[q],b[q],s[q*2];
	for(i=0;i<q;i++){	
		printf("Informe Um Valor Para a Pos %d: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<q;i++){	
		printf("Informe Um Valor Para a Pos %d: ",i);
		scanf("%d",&b[i]);
	}
	
	j=0;
	k=0;	
	for(i=0;i<(q*2);i++){
		if(flag==0 && j<q){
			s[i]=a[j];
			j++;
			flag=1;
			
		}else{
			s[i]=b[k];
			k++;
			flag=0;
			
		}
		
	}
	printf("Vetor Intercalado!\n|");
	for(i=0;i<(q*2);i++){
		printf("%d|",s[i]);
	}
	
	return 0;
}

