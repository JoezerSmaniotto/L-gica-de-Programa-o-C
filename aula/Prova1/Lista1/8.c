#include <stdio.h>
int main (){
	
	float rtc,rtd,rtot,rrtc,rrtd,rrtot,artd;
	
	printf("Informe a QTD de alunos reprovados na turma C: ");
	scanf("%f",&rtc);
	
	printf("Informe a QTD de alunos reprovados na turma D: ");
	scanf("%f",&rtd);
		
	rrtc= (60*rtc)/100;
	printf("\nrrtc: %f",rrtc);
		
	rrtd= (20-(20*rtd)/100);
	printf("\nrrtd: %f",rrtd);
	
	artd = 20-((20*rtd)/100);
	
	
	rrtot = (((rrtc+rrtd)*100)/80);
	
	printf("\nquantidade de alunos reprovados na turma C: %.2f",rrtc);
	printf("\nquantidade de alunos reprovados na turma D: %.2f",artd);
	printf("\npercentual de alunos reprovados ao total de alunos das duas turmas: %.2f",rrtot);
		
	
	return 0;
}
