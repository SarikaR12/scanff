#include<stdio.h>

main()
{
	int p,q;
	
	printf("value of P =");
	scanf(" %d",&p);
	printf("value of Q =");
	scanf(" %d",&q);
	
	p=p+q;
	q=p-q;
	p=p-q;
	
	printf("swapping value of p = %d\n",p);
	printf("swapping value of q = %d\n",q);
}