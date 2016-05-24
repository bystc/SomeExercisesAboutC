#include "stdio.h"
//#include "stdlib.h"
int main()
{
int a[4]={0};
int i,j,t;
printf("请依次输入三个整数,用回车隔开\n");
for(i=0;i<3;i=i+1)
    {
        scanf("%d",&a[i]);
        printf("\n");
        //a[3]=a[3]+a[i];
    }
    for(i=0;i<2;i++)
    {
        for(j=i;j<3;j=j+1)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }

        }
    }
    for(i=0;i<3;i=i+1)
    {
        printf("%d\t",a[i]);
    }
    printf("%d",a[3]/3);
}
