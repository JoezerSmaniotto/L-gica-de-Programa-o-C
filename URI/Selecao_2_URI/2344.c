#include<stdio.h>

int main (){
	
	int num;
	scanf("%d",&num);

	if(num==0){
		printf("E\n");
	
	}else if (num>=1 && num<=35){
		printf("D\n");
	
	}else if(num>=36 && num<=60){
		printf("C\n");
	
	}else if(num>=61 && num<=85){
		printf("B\n");

	} else if(num>=86 && num<=100){
		printf("A\n");
	}
	

	return 0;
}
