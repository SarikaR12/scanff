#include<stdio.h>

main()
{
	int r,s,t;
	
	printf("value of R =");
	scanf(" %d",&r);
	printf("value of S =");
	scanf(" %d",&s);
	
	t=r;
	r=s;
	s=t;
	
	printf("swapping value of R = %d\n",r);
	printf("swapping value of S = %d\n",s);
	
}