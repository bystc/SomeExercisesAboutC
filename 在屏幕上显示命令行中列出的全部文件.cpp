#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
 int i,n=argc;
 char str[100];
 FILE *fp;
 for(i=1; i<4; i++)
 {
  printf("\nFILE %d -- %s:\n",i,argv[i]);
  if ( (fp = fopen(argv[i],"r")) == NULL)
  {
   printf ("Can't open %s\n", argv[i]);
   exit(1);
  }
  while(fscanf(fp,"%s",str)!=EOF)
   fprintf(stdout,"%s",str);
  fclose(fp);
 }
 return 0;
}

