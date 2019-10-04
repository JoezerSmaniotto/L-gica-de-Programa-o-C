#include <stdio.h>

int main (){
	int p,s,t,temp1,temp2,temp3,temp4;

	scanf("%d%d%d",&p,&s,&t);

	temp1=s-p;
	temp2=t-s;
	temp3=p-s;
	temp4=s-t;

	
	if( (p == s) && (t > s)){  // Setimo
		printf(":)\n");
	

	} else if(s>p && t>s && temp2>=temp1 ){ //Quarto
		printf(":)\n");
	
	} else if(p>s && s>t && temp3>temp4){  // Quinto
		printf(":)\n");
	
	} else if(p>s && t>s){   // Primeiro
		printf(":)\n");
	
	} else if(p>s && t==s){   // 
		printf(":)\n");
			
	}else {
		printf(":(\n");

	}

	return 0;
}
