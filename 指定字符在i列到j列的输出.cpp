#include<stdio.h>
void chline(char ch , int i, int j);

int main(void)
{
 int x,y;
 char ch;
 printf("input a char:");
 scanf("%c",&ch);
 printf("input two int:");
 scanf("%d%d",&x,&y);
 chline(ch,x,y);
 return 0;
}

void chline(char ch, int i, int j)
{
 int k;
 for(k=1; k<i; k++)
  printf(" ");
 for(;k<=j; k++)
  printf("%c",ch);
 printf("\n");
}

