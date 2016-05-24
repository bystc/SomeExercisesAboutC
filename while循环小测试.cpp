#include<stdio.h>

int main(void)
{
 double investment = 100;
 int i=0;
 while(investment > 0)
 {
  investment += investment * 0.08;
  investment -= 10;
  i++;
 }
 printf("After %d years,Chuckie Lucky's investment is out\n",i,investment);
 return(0);
}

