#include<stdio.h>
#define width 6
int max(int ar[],int );
int main()
{
	int array[]={1,2,3,4,5,6};
	int i;
	for(i=0;i<6;i++)
	printf("%d",array[i]);
	printf("\n");
	printf("max is %d",max(array,width));
	return 0;
}
int max(int ar[],int n)
{
	int i,max; 
	for(i=1,max=ar[0];i<n;i++)
	if (max<ar[i])
	max=ar[i];
	return max;
}
	
