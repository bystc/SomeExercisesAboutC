#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char filename[20];
void read_file()
{
    FILE *fp;
    printf("�������ļ���:");
	gets(filename);
	if((fp=fopen(filename,"r"))==NULL)
    {
        printf("�޷���ָ���ļ�");
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
	printf("Ӣ����ĸ��%d\n",letter);
	printf("Ӣ�ĵ��ʣ�%d\n",word);
	printf("���֣�%d\n",number);
	printf("�ո�%d\n",space);
	printf("�������ţ�%d\n",other);
	printf("���ģ�%d\n",chs/2);
    fclose(fp);
}
void new_file()
{
    FILE *fp;
    char filename[20];
    char ch;
    printf("�������ļ���:");
	gets(filename);
    fp=fopen(filename,"w");
    printf("�������ı�����#��Ϊ����������\n");
    while((ch=getchar())!='#')
    fwrite(&ch,1,1,fp);
    fclose(fp);
}

int main()
{
	int k,i=1;
	while(i)
	{
		printf("1.��ȡ�ı��ļ�\n");
		printf("2.�½��ı��ļ�\n");
		printf("3.ͳ������\n");
		printf("0.�˳�\n");
		printf("��ѡ��:");
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
