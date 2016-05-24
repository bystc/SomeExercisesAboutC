#include "stdio.h"
#include "string.h"
#define N 2
struct student 
{
    long num;
    char name[20];
    char sex;
    int chinese;
    int math;
    int english;
}stu[N];

int n;
int choose;
void fun1();
void fun2();
void fun3();
void fun4();


void fun1()
{
    int i;
        for(i=0;i<N;i++)
        {
            printf("请输入学号：\n");
            scanf("%ld",&stu[i].num);
            printf("请输入名字：\n");
            scanf("%s",stu[i].name);
            getchar();
            printf("请输入性别：\n");
            scanf("%c",&stu[i].sex);
            printf("请输入语文成绩：\n");
            scanf("%d",&stu[i].chinese);
            printf("请输入数学成绩：\n");
            scanf("%d",&stu[i].math);
            printf("请输入英语成绩：\n");
            scanf("%d",&stu[i].english);
        }

}

void fun2()
{    int i;
    for(i=0;i<N;i++)
    {
        printf("%ld\t%s\t%c\n",stu[i].num,stu[i].name,stu[i].sex);
        printf("%d\t%d\t%d\n",stu[i].chinese,stu[i].math,stu[i].english);
    }
}

void fun3()
{    char name[20];
    int k,f=0;
    printf("请输入您所要查找的姓名: ");
    gets(name);
    for(k=0;k<2;k++)
        if(strcmp(name,stu[k].name)==0)
        {    printf("%ld,%s,%c,%d,%d,%d",stu[k].num,stu[k].name,stu[k].sex,stu[k].chinese,stu[k].math,stu[k].english);
            f=1;
        }
    if(f=0)
    printf("木有这个人~~~TOT");
    
}

void fun4()
{       int k;
        char newname[20];
        printf("请输入该学生的名字！\n");
        gets(newname);
        printf("所有学生记录为：\n");
        fun2();
        for(k=0;k<2;k++)
            if(strcmp(newname,stu[k].name)==0)
        {
           printf("你选择的学生为：\n");
                printf("%ld,%s,%c,%d,%d,%d",stu[k].num,stu[k].name,stu[k].sex,stu[k].chinese,stu[k].math,stu[k].english);
        

       stu[k].num=stu[k+1].num;
       strcpy(stu[k].name,stu[k+1].name);
       stu[k].sex=stu[k+1].sex;
       stu[k].chinese=stu[k+1].chinese;
       stu[k].math=stu[k+1].math;
       stu[k].english=stu[k+1].english;

    }
      
        
        printf("学生记录删除完毕！");


}

int main()
{
    printf("*********************************************\n");
    printf("*************学生成绩管理程序****************\n");
    printf("*********************************************\n");
    printf("1..............................添加\n");
    printf("2..............................显示\n");
    printf("3..............................查询\n");
    printf("4..............................删除\n");

    printf("请输入您要进行的操作：\n");
    scanf("%d",&choose);
    while(choose!=1&&choose!=2&&choose!=3&&choose!=4)
    {    
        scanf("%d",&choose);
    }
while(choose==1||choose==2||choose==3||choose==4)  
{switch(choose)
    {
    case 1:fun1(); break;
    case 2:fun2(); break;
    case 3:fun3(); break;
    case 4:fun4(); break;
    }
      printf("请输入您要进行的操作：\n");
    scanf("%d",&choose);
}

}

 
