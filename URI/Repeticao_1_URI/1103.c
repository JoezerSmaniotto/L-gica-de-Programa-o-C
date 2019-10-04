#include <stdio.h>


int main (){
	
	int h1,m1,h2,m2,totm,toth,tot;

	do{
		
		scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
		
		toth=(h2-h1);

		if(toth<0){
			toth=24+(h2-h1);
			tot=toth*60;

		}else{
			tot=toth*60;
		}


		totm=m2-m1;
		
		if(totm<0){
			totm=60+(m2-m1);
			tot= tot + totm -(60);
		
		}else{
			tot= tot + totm;
		}

		if(h1==h2 && m1>m2){
			tot=(23*60) + (60+(m2-m1));
		}

		if(tot>0){

			printf("%d\n",tot);
		}



	}while(h1!=0 || m1!=0 || h2!=0 || m2!=0);
		
	return 0;
}