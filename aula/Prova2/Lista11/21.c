#include <stdio.h>

int main(){
	int qt,i,qfil,j,idade,sex=0,flagid=2,contIdade18=0, contid=0,contM18=0, idM=0,sexom; //cSf=0,cSm=0,
	float result;
	scanf("%d",&qt);
	
	for(i=0;i<qt;i++){
		scanf("%d",&qfil);
		for(j=1;j<=qfil;j++){
			scanf("%d %d",&idade,&sex);
			// Sexo do Filho Mais Velho
			if(idade>idM){
				idM=idade;
				sexom=sex;
			}
			
			/*if(sex==2){
			 cSf++;	
			} else if (sex==2){
				cSm++;
				
			}*/
			if(idade>=18){
				flagid=1;
				
			}
			
			if(idade>=18 && sex==1){
				contid++;
				contM18=contM18+idade;
			}
			
		} // Fim do For mais Interno
		
		if(sexom==1){
			printf("Masculino\n");
		}
			
		if(sexom==2){
			printf("Feminino\n");	
		}
		
		sexom=0;
		
		if(flagid==1){
			contIdade18++;
		}
		
		flagid=0;
	}
	
	result=(float)contM18/contid;
	printf("%d (qde. de famílias com filhos maiores de idade)\n",contIdade18);
	printf("%.2f (média de idade dos homens m. de idade)\n",result);
	
	return 0;
}

