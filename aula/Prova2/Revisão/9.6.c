#include <stdio.h>

int main(){
	float qt,n1,n2,md,perA,medA=0,qttot=0,i,qtApro=0;
	printf("Informe a QT de Alunos: ");
	scanf("%f",&qt);
	
	for(i=1;i<=qt;i++){
		printf("Informe N1: ");
		scanf("%f",&n1);
		printf("Informe N2: ");
		scanf("%f",&n2);
		md=(n1+n2)/2;
		if(md>=6){
			medA=medA+md;
			qtApro++;
		}
		qttot++;
		printf("MD Final: %.2f\n",md);		
	}
	medA=medA/qtApro;
	perA=(qtApro*100)/qttot;
	
	printf("%.2f (média dos aprovados)\n",medA);
	printf("%.2f (percentual de aprovados)\n",perA);
	return 0;
}

