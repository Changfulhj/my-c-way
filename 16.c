#include<stdio.h> 
#include<math.h> 
int main()
{
	double a=0.0,b=1.0,t=1.0;
	for(int i=3;fabs(b)>1e-6;i+=2)
	{
		a=a+b;
		t=-t;
		b=t/i;
	}
	printf("%.6f\n",4*a);
	return 0;
	} 
