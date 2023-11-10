#include<stdio.h>

main()
{
	int x =20 ,y = 14, z = 8, d;
	
	d= (x*x) + (2*x*y) + (y*y);
	printf("ans = %d\n",d);
	
	d=(x*x) - (2*x*y) + (y*y);
	printf("ans = %d\n",d);
	
	d=(x*x*x) + ((3*x*y) * (x+y)) + (y*y*y);
	printf("ans = %d\n",d);
	
	d=(x*x*x) - (y*y*y) - ((3*x*y) * (x+y));
	printf("ans = %d\n",d);
	
	d=(x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	printf("ans = %d\n",d);
	
	d=(x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y)) + (3*(y+z)+(3*(z+x)));
	printf("ans = %d\n",d);
	
	d=(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	printf("ans = %d\n",d);
}