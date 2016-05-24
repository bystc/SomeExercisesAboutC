#include <stdio.h>
int Fibonacci(int n);
int count;

int main(void)
{
 int n;
 printf("input the max term of Fibonacci:");
 while( scanf("%d",&n) == 1 )
 {
  count = 0;
  Fibonacci(n);
  printf("The function of Fibonacci has call %d times\n",count);
  printf("input the max term of Fibonacci:");
 }
 puts("Quit");

 return 0;
}

int Fibonacci(int n)
{
 count++;
 if( n>2 )
  return Fibonacci(n-1) + Fibonacci(n-2);
 else
  return 1;
}

