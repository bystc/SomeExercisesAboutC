#include<stdio.h>
void chline(char , int , int );

int main(void)
{
 int x,y;
 char ch;
 printf("input a char:");
 scanf("%c",&ch);
 printf("input column and row:");
 scanf("%d%d",&x,&y);
 chline(ch,x,y);
 return 0;
}

void chline(char ch, int column, int row)
{
 int x,y;
 for(y=0; y<row; y++)
 {
  for(x=0; x<column; x++)
   printf("%c",ch);
  printf("\n");
 }
}

