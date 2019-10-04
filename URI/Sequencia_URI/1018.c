#include <stdio.h>

int main (){
	
	int total,n100=0,r100=0,n50=0,r50=0,n20=0,r20=0,n10=0,r10=0,n5=0,r5=0,n2=0,r2=0,n1=0,r1=0;

	scanf("%d",&total);

	n100=total/100; /*503*/
	r100=total%100; /*3*/

	n50=r100/50; /*0*/
	r50=r100%50; /*3*/

	n20=r50/20; /*0*/
	r20=r50%20; /*3*/

	n10=r20/10; /*0*/
	r10=r20%10; /*3*/

	n5=r10/5; /*0*/
	r5=r10%5; /*3*/

	n2=r5/2; /*1*/
	r2=r5%2; /*1*/

	n1=r2/1; /*1*/
	r1=r2%1; /*0*/

	printf("%d\n",total);
	printf("%d nota(s) de R$ 100,00\n",n100);
	printf("%d nota(s) de R$ 50,00\n",n50);
	printf("%d nota(s) de R$ 20,00\n",n20);
	printf("%d nota(s) de R$ 10,00\n",n10);
	printf("%d nota(s) de R$ 5,00\n",n5);
	printf("%d nota(s) de R$ 2,00\n",n2);
	printf("%d nota(s) de R$ 1,00\n",n1);


	return 0;
}


