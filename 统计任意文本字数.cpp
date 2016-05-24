#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char filename[20];
void read_file()
{
    FILE *fp;
    printf("请输入文件名:");
	gets(filename);
	if((fp=fopen(filename,"r"))==NULL)
    {
        printf("无法打开指定文件");
        exit(0);
    }
}
void count()
{
    FILE *fp;
	char ch;
	int letter=0,number=0,space=0,word=0,chs=0,other=0;
    int k;
    fp=fopen(filename,"r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        {
            letter++;
            k=1;
        }
        else
        {
            if(k==1)
            {
                word++;
                k=0;
            }
            if(ch>='0'&&ch<='9')
                number++;
            else
            {
                if(ch<0)
                    chs++;
                else
                {
                    if(ch==32)
                        space++;
                    else
                        other++;
                }
            }
        }
    }
	printf("\n");
	printf("英文字母：%d\n",letter);
	printf("英文单词：%d\n",word);
	printf("数字：%d\n",number);
	printf("空格：%d\n",space);
	printf("其他符号：%d\n",other);
	printf("中文：%d\n",chs/2);
    fclose(fp);
}
void new_file()
{
    FILE *fp;
    char filename[20];
    char ch;
    printf("请输入文件名:");
	gets(filename);
    fp=fopen(filename,"w");
    printf("请输入文本（以#作为结束符）：\n");
    while((ch=getchar())!='#')
    fwrite(&ch,1,1,fp);
    fclose(fp);
}

int main()
{
	int k,i=1;
	while(i)
	{
		printf("1.读取文本文件\n");
		printf("2.新建文本文件\n");
		printf("3.统计字数\n");
		printf("0.退出\n");
		printf("请选择:");
		scanf("%d",&k);
		getchar();
		switch(k)
		{
			case 1: read_file();break;
			case 2: new_file();break;
			case 3: count();break;
			case 0: i=0;break;
		}
		if(i!=0)
		{
			printf("\n");
			system("pause");
		}
        system("cls");
	}
}
