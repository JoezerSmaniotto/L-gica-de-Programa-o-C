#include <stdio.h>

int main (){
	
	int h1,h2,m1,m2,toth, totm;

	scanf("%d%d%d%d",&h1,&m1,&h2,&m2);

	toth=h2-h1;

	if(toth<0){ // Aqui pega os negativos  Caso das 
		toth = 24 + (h2-h1);
	}

	totm=(m2-m1);

	if(totm<0){
		totm = 60 + (m2 - m1);
		toth--;
	}


	if(m2==m1 && m1==m2){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	
	} else if(h1==h2 && m1 > m2){
		toth = 23;
		//totm = 60-(m2-m1);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",toth,totm);

	}else {
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",toth,totm);

	} 


	return 0;
}