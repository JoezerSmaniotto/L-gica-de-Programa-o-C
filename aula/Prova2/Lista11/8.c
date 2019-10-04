#include <stdio.h>

int main(){
	int i,pri=1, seg=2, ter=3,resp=0;
	printf("%d %d %d ",pri,seg,ter);
	for(i=4;i<=15;i++){
		           
		resp = ter + (2*seg) - pri;
		printf("%d ",resp);
		pri=seg;
		seg=ter;
		ter=resp;
		
	}	
	return 0;
}
