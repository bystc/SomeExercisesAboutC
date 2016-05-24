#include<stdio.h>
float cube(float);
int main()
{
	float a;
	scanf("%f",&a);
	printf("%f",cube(a));
	return 0;
}
float cube(float a)
{
	return(a*a*a);
	
}
