#include<stdio.h>
double min(double a ,double b);

int main(void)
{
 double x,y;
 printf("input two doubles:");
 scanf("%lf%lf",&x,&y);
 printf("the smaller is:%.2lf\n",min(x,y));
 return(0);
}

double min(double a,double b)
{
 return a<b?a:b;
}

