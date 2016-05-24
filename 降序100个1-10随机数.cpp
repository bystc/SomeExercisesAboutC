#include <stdio.h>
#include <stdlib.h>
#define WIDTH 100

int main(void)
{
    char num[WIDTH],i,j,temp;
 for(i=0; i<WIDTH; i++)
  num[i] = rand() % 10 + 1;
 printf("Original\n");
 for(i=0; i<WIDTH; i++)
 {
  printf("%d\t",num[i]);
 // if(i%10 == 9)   printf("\n");
 }
 printf("Sort:\n");
 for(i=0; i<WIDTH-1; i++)
  for(j=0; j<WIDTH-1-i; j++)
   if (num[j] < num[j+1])
   {
    temp = num[j];
    num[j] = num[j+1];
    num[j+1] = temp;
   }

 for(i=0; i<WIDTH; i++)
 {
  printf("%d\t",num[i]);
 // if(i%10 == 9)   printf("\n");
 }

    return 0;
}

