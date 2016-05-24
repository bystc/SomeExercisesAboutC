#include<stdio.h>

int main(void)
{
 unsigned int a=4294967295;
 float b=3.4E38;
 float c=b*10;
 float d=0.1234E-2;
 printf("%u+1=%u\n",a,a+1);
 printf("%e*10=%e\n",b,c);
 printf("%f/10=%f\n",d,d/10);
 return(0);
}
//5	2	C:\Users\huang\OneDrive\Documents\ÕûÊıÒç³ö.cpp	[Warning] this decimal constant is unsigned only in ISO C90
 
