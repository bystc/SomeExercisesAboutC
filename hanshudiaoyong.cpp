#include <stdio.h>
int a()
{
	return 1;
 } 
int fun()
{
 return a();   /*����ֵ5*/
}
int main()
{
 int a=3, b;
 b=a+fun();    /*����fun�ķ���ֵ������*/
 printf("%d\n", b);
 return 0;
}

