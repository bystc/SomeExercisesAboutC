#include <stdio.h>
int  main()
 {
 int a[]={1,2,3};
 int b[]={4,5,6};
 int i,j;
 int *p=a,*q=b;
 void fun(int arr[],int brr[]);
 fun(a,b);
 printf("please output the numbers\n");
 for(i=0;i<=2;i++,*p++)
 {
 printf("%d\t",*p);

}
 printf("\n");
 
 for(j=0;j<=2;j++,*q++)
 {
 printf("%d\t",*q);
 
 }
 printf("\n");
 
 }
 void fun(int arr[],int brr[])
 {  
 int a,i;
 for(i=0;i<3;i++,arr++,brr++)       //��Ĵ�����i<=3,��Ϊi��0��ʼ������ѭ�����εĻ�Ҫ��i<3
 {
 a=*arr;
 *arr=*brr;
 *brr=a;
 }
 }
