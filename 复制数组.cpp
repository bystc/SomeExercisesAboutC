#include <stdio.h>
void copy_arr(double [], double [], int );
void copy_ptr(double *, double *, int );

int main(void)
{
 double source[] = {1.1, 2.2, 3.3, 4.4, 5.5};
 double target1[5] = {0};
 double target2[5] = {0};
 printf("Before operation:\n");
 printf("source :\t%g\t%g\t%g\t%g\t%g\n",source[0],source[1],source[2],source[3],source[4]);
 printf("target1:\t%g\t%g\t%g\t%g\t%g\n",target1[0],target1[1],target1[2],target1[3],target1[4]);
 printf("target2:\t%g\t%g\t%g\t%g\t%g\n",target2[0],target2[1],target2[2],target2[3],target2[4]);
 copy_arr(source, target1, 5);
 copy_ptr(source, target2, 5);
 printf("After operation:\n");
 printf("source :\t%g\t%g\t%g\t%g\t%g\n",source[0],source[1],source[2],source[3],source[4]);
 printf("target1:\t%g\t%g\t%g\t%g\t%g\n",target1[0],target1[1],target1[2],target1[3],target1[4]);
 printf("target2:\t%g\t%g\t%g\t%g\t%g\n",target2[0],target2[1],target2[2],target2[3],target2[4]);

 return 0;
}  

void copy_arr(double a1[], double a2[], int n)
{
 int i;
 for (i=0; i<n; i++)
  a2[i] = a1[i];
}

void copy_ptr(double *p1, double *p2, int n)
{
 int i;
 for (i=0; i<n; i++)
  *( p2 + i ) = *( p1 + i );
}

