#include<stdio.h>
main()
{
	int salary,hra,da,ta,gross;
	
	printf("salary =");
	scanf("%d" ,&salary);
	printf("hra =");
	scanf("%d",&hra);
	printf("da =");
	scanf("%d",da);
	printf("ta =");
	scanf("%d",&ta);
	
	hra=salary*hra/100;
	ta=salary*ta/100;
	da=salary*da/100;
	
	gross=salary+hra+ta+da;
	printf("gross salary=%d",gross);
}