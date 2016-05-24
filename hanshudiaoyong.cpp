#include <stdio.h>
int a()
{
	return 1;
 } 
int fun()
{
 return a();   /*返回值5*/
}
int main()
{
 int a=3, b;
 b=a+fun();    /*函数fun的返回值到这里*/
 printf("%d\n", b);
 return 0;
}

