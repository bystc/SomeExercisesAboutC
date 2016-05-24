#include <stdio.h>
#include <stdlib.h>
#define MAX 81

int main(void)

{
 char name[30],content[MAX];
 int row,column;
    FILE *fp;
 printf("input the name of file:");
 gets(name);
 if(  ( fp=fopen(name,"r") )   == NULL   )
 {
  printf("Can't open %s",name);
  exit(1);
 }
 printf("input the row and column to output:");
 while ( scanf("%d%d",&row,&column) == 2 )
 {
  row--,column--;
  fseek(fp,0,SEEK_SET);
  while (row--) fgets(content,MAX,fp);//简便起见，未做一些越界判断
  fseek(fp,column,SEEK_CUR);
  fgets(content,MAX,fp);
  printf(content);
  printf("input the start position to output:");
 }
 printf("Quit\n");

    return 0;
}

