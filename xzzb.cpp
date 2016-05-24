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
printf("作者 Dante -- 谢煜东");  
printf("\t\t 欢迎来到猜数字游戏\n\n");  
printf(" 计算机想好了一个4位无重复数字，首位可以为零。\n 例如:0913是可以的，3502也是可以的，6787不可以。\n");  
printf(" 现在您想办法把这个数字猜出来。\n\n");  
printf(" 每猜一个数字，计算机会根据这个数字给出几A几B:\n 其中A前面的数字表示位置正确的数的个数，\n 而B前的数字表示数字正确而位置不对的数的个数。\n\n");  
//printf(" 如正确答案为5234，而猜的人猜5346，则是1A2B。\n 其中有一个5的位置对了，记为1A；\n 而3和4这两个数字对了，而位置没对，因此记为2B；\n 合起来就是1A2B。\n\n");  
printf(" 记住！1:你共有8次机会,2:输入的数字不能重复。\n\n");  
printf(" 当出现\"第几次:\"字样并等待的时候，您就可以输入你要猜测的四位数字，\n 输入完之后回车确认。祝您开心\n\n 明白之后任意键游戏正式开始!");  
getchar();  
CreateNum(a,4);  
system("cls");  
printf("\t\t现在可以输入你要猜的四位数字了,输入之后回车确认。\n");  
while(fth<=8)  
{  
int t=1000;  
printf("第%d次: ",fth);  
for(i=0;i<3;i++)  
{  
b[i+1]=b[i]%t;  
b[i]=b[i]/t;  
t/=10;  
}  
for(i=0;i<4;i++){printf("%d",b[i]);}  
if(JudgeInput(b,4)==0)  
{  
printf("您的输入有问题，请重新输入\n");  
continue;  
}  
if(JudgeA(a,b,4)==4)  
{  
printf("\t结果: 答对了！好聪明！");  
system("pause");  
//return;  
}  
printf("\t结果:您有%d个数字和位置都对了，有%d个数字对了而位置没对\n",JudgeA(a,b,4),JudgeB(a,b,4));  

fth++;  
}  
printf("\n很遗憾。正确答案是:");  
for(i=0;i<4;i++)  
printf("%d",a[i]);  
printf("下次再玩吧！88\n");  
system("pause");  

return 0;  
}
