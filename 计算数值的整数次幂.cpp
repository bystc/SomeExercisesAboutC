#include<stdio.h>
double power(double n,int p);

int main()
{
    double x,xpow;
	int exp;
	while(scanf("%lf%d",x,exp)==2)
	{
		xpow=power(x,exp);
		printf("%.3g to the power %d is %.5g\n",x,exp,power);
	}
	return 0;	
}
double power(double n,int p)
{
	int i;
	double pow=1;
	
	for(i=1;i<=p;i++)
		pow*=n;
	return pow;
	
}
