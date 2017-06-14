#include<stdio.h>

int main()
{

volatile int c, q=0, a=1, b=2, n=10000000;
//int * ptr=NULL;
for (q=0;q<n;q++)
{
	
//	a++;
//	a--;
	if (b<a)
	{
		b=a*a-2*b;
		a=b*b*b-a*a -3;
//		printf("taken\n");
	}
	else
	{	
		a=b*b-2*a;
		b=a*a*a - b*b -3;
//		printf("not taken\n");
	}
	/*if (q>5)
	{
		a++;
		*ptr=0;
		a--;
	}	*/
//	b++;
//	b--;
}

return 0;
}

