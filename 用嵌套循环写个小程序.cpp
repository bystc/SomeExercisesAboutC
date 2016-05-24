#include<stdio.h>
int main()

//	char ch='$';
//	int i,j;
//	for(i=0;i<4;i++){
//	
//		for(j=0;j<8;j++)
//			printf("%c",ch);
//			printf("\n");
//	return 0;

{
 char a;
 int i;
 printf("Please input a string end by #:");
 for(i = 1; (a = getchar()) != '#'; i++)
 {
  printf("%c--%d\t",a,a);
  if(i%8 == 0) printf("\n");
 }
 printf("\n");
 return(0);
}


