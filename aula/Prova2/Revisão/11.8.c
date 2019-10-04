#include <stdio.h>

int main(){
	int i,seq,pri=1,seg=2,terc=3;
	
	printf("%d %d %d ",pri,seg,terc);
	for(i=4;i<=15;i++){
		seq=terc+(2*seg)-pri;
		pri=seg;
		seg=terc;
		terc=seq;
		printf("%d ",seq);
	}

	
	return 0;
}

