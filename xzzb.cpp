#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
int EachDiff(int a[],int n)  
{  
int i,j;  
for(i=0;i<n;i++)  
for(j=i+1;j<n;j++)  
if(a[i]==a[j])  
return 0;  
else  
return 1;  
}  
int JudgeA(int a[],int b[],int n)  
{  
int i,result=0;  
for(i=0;i<n;i++)  
{  
if(a[i]==b[i]) result++;  
}  
return result;  
}  
int JudgeB(int a[],int b[],int n)  
{  
int i,j,result=0;  
for(i=0;i<n;i++)  
for(j=0;j<n;j++)  
if(a[i]==b[j]&&i!=j){result++;break;}  
return result;  
}  
void CreateNum(int a[],int n)  
{  
int i;  
srand(time(0));  
do  
{  
for(i=0;i<n;i++)a[i]=rand()%10;  
}while(!EachDiff(a,n));  
}  
int JudgeInput(int a[],int n)  
{  
int i;  
if(!EachDiff(a,n))  
return 0;  
else  
for(i=0;i<n;i++)  
if(a[i]>9||a[i]<0)  
return 0;  
else  
return 1;  
}  
int main()  
{  
//system();  
int a[4],b[4],i;  
int fth=1;  
printf("���� Dante -- л�϶�");  
printf("\t\t ��ӭ������������Ϸ\n\n");  
printf(" ����������һ��4λ���ظ����֣���λ����Ϊ�㡣\n ����:0913�ǿ��Եģ�3502Ҳ�ǿ��Եģ�6787�����ԡ�\n");  
printf(" ��������취��������ֲ³�����\n\n");  
printf(" ÿ��һ�����֣�����������������ָ�����A��B:\n ����Aǰ������ֱ�ʾλ����ȷ�����ĸ�����\n ��Bǰ�����ֱ�ʾ������ȷ��λ�ò��Ե����ĸ�����\n\n");  
//printf(" ����ȷ��Ϊ5234�����µ��˲�5346������1A2B��\n ������һ��5��λ�ö��ˣ���Ϊ1A��\n ��3��4���������ֶ��ˣ���λ��û�ԣ���˼�Ϊ2B��\n ����������1A2B��\n\n");  
printf(" ��ס��1:�㹲��8�λ���,2:��������ֲ����ظ���\n\n");  
printf(" ������\"�ڼ���:\"�������ȴ���ʱ�����Ϳ���������Ҫ�²����λ���֣�\n ������֮��س�ȷ�ϡ�ף������\n\n ����֮���������Ϸ��ʽ��ʼ!");  
getchar();  
CreateNum(a,4);  
system("cls");  
printf("\t\t���ڿ���������Ҫ�µ���λ������,����֮��س�ȷ�ϡ�\n");  
while(fth<=8)  
{  
int t=1000;  
printf("��%d��: ",fth);  
for(i=0;i<3;i++)  
{  
b[i+1]=b[i]%t;  
b[i]=b[i]/t;  
t/=10;  
}  
for(i=0;i<4;i++){printf("%d",b[i]);}  
if(JudgeInput(b,4)==0)  
{  
printf("�������������⣬����������\n");  
continue;  
}  
if(JudgeA(a,b,4)==4)  
{  
printf("\t���: ����ˣ��ô�����");  
system("pause");  
//return;  
}  
printf("\t���:����%d�����ֺ�λ�ö����ˣ���%d�����ֶ��˶�λ��û��\n",JudgeA(a,b,4),JudgeB(a,b,4));  

fth++;  
}  
printf("\n���ź�����ȷ����:");  
for(i=0;i<4;i++)  
printf("%d",a[i]);  
printf("�´�����ɣ�88\n");  
system("pause");  

return 0;  
}
