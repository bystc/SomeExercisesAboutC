
#include<stdio.h>
#include<stdlib.h>
struct Ticket{
	int distance;
	int price;
	int z[5];
	int g[5];

}
ticket[4]={{700,68},{1100,90},{1000,85},{500,60}},s,total,count;
int in[6]={0};
int out[6]={0};
int a[2];
int tickets=0;
int money=0;
void find();
void Out();
void In();
void buyticket(int x,int y);
void sellticket()
{
	FILE *fp;
	int i,k;
	printf("������վ���Ӧ���ѡ�������յ�\n");
    printf("1.����<->2.��ɳ<->3.�人<->4.֣��<->5.����\n");
	if(tickets<5)
	{
		fp=fopen("count","r");
		if((fp=fopen("count","a"))==NULL)
			printf("д���ļ�ʧ�ܣ�");
        fread(&count,sizeof(struct Ticket),1,fp);
        fclose(fp);
		for(i=0;i<2;i++)
		{
		    scanf("%d",&a[i]);
            system("cls");
		}
		if(a[0]==a[1])
		{
			printf("�����յ㲻����ͬ\n");
			system("cls");
			printf("1.��Ʊ\n");
			printf("2.��ѯ����\n ");
			printf("3.�˳�\n");
			scanf("%d",&k);
			switch(k)
			{
				case 1:sellticket();break;
				case 2:find();break;
				case 3:break;
			}
        }
        else
		{
			printf("���\t�յ�\n");
			for(i=0;i<2;i++)
            {
                switch(a[i])
                {
                    case 1:Out();In();
                    printf("����\t");
                    count.z[0]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 2:Out();In();
                    printf("��ɳ\t");
                    count.z[1]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 3:Out();In();
                    printf("�人\t");
                    count.z[2]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 4:Out();In();
                    printf("֣��\t");
                    count.z[3]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 5:Out();In();
                    printf("����\t");
                    count.z[4]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];
                    break;
                }
            }
			count.g[0]=count.z[0];count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
			printf("\n");
			fp=fopen("count","w");
			if(fwrite(&count,sizeof(struct Ticket),1,fp)!=1)
                printf("д���ļ�ʧ�ܣ�\n");
			fclose(fp);
			fp=fopen("count","r");
			if((fp=fopen("count","r"))==NULL)
				printf("��ȡ�ļ�ʧ�ܣ�");
            fread(&count,sizeof(struct Ticket),1,fp);
            fclose(fp);
            buyticket(a[0],a[1]);
			fp=fopen("ticket","w");
			if(fwrite(&total,sizeof(struct Ticket),1,fp)!=1)
                printf("д���ļ�ʧ�ܣ�\n");
			fclose(fp);
			fp=fopen("ticket","r");
			if((fp=fopen("ticket","r"))==NULL)
				printf("��ȡ�ļ�ʧ�ܣ�");
            fread(&total,sizeof(struct Ticket),1,fp);
            fclose(fp);
            tickets++;
		}
    }
	else printf("Ʊ�����꣡");
	exit(0);
}
void buyticket(int x,int y)
{
	int t,i,k;
	FILE *f;
	s.distance=0;
	s.price=0;
	if(y<x)
	{
		t=y;
		y=x;
		x=t;
	}
	for(i=x-1;i<y-1;i++)
	{
		s.distance=s.distance+ticket[i].distance;
		s.price=s.price+ticket[i].price;
		f=fopen("ticket","r");
		if((f=fopen("ticket","r"))==NULL)
			printf("��ȡ�ļ�ʧ�ܣ�");
        fread(&total,sizeof(struct Ticket),1,f);
        fclose(f);
		total.price=total.price+s.price;
		money=total.price;
	}
	printf("����:%dKM,���:��%d\n",s.distance,s.price);
	printf("1.��Ʊ\n");
	printf("2.��ѯ\n");
	printf("3.�˳�\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1:sellticket();break;
		case 2:find();break;
		case 3:break;
	}
}
void Out()
{
	int k;
	k=a[0];
	switch(k)
	{
	    case 1:out[1]++;break;
	    case 2:out[2]++;break;
	    case 3:out[3]++;break;
	    case 4:out[4]++;break;
	    case 5:out[5]++;break;
	}
}
void In()
{
	int k;
	k=a[1];
	switch(k)
	{
	    case 1:in[1]++;break;
	    case 2:in[2]++;break;
	    case 3:in[3]++;break;
	    case 4:in[4]++;break;
	    case 5:in[5]++;break;
	}
}
void find()
{
	int k;
    system("cls");
	printf("��Ʊ��ѯϵͳ\n");
	printf("1.��ѯ���ؿ�����\n");
    printf("2.��ѯ����Ʊ���\n");
    printf("3.�˳�\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1: printf("����վ ���� %d �ˣ����� %d ��\n",out[1]/2,in[1]/2);
                printf("��ɳվ ���� %d �ˣ����� %d ��\n",out[2]/2,in[2]/2);
                printf("�人վ ���� %d �ˣ����� %d ��\n",out[3]/2,in[3]/2);
                printf("֣��վ ���� %d �ˣ����� %d ��\n",out[4]/2,in[4]/2);
                printf("����վ ���� %d �ˣ����� %d ��\n",out[5]/2,in[5]/2);
                break;
		case 2: printf("�ܽ��:%d",money);break;
		case 3: break;
	}
}
int main()
{
	FILE *fp;
    FILE *f;
	int k;
    printf("����<->��ɳ<->�人<->֣��<->����\n");
    system("pause");
    system("cls");
    fp=fopen("count","w");
    if(fwrite(&count,sizeof(struct Ticket),1,fp)!=1)
	    printf("д���ļ�ʧ�ܣ�\n");
    fclose(fp);
    f=fopen("ticket","a");
	if(fwrite(&total,sizeof(struct Ticket),1,f)!=1)
        printf("д���ļ�ʧ�ܣ�\n");
	fclose(f);
	printf("1.��Ʊ\n");
	printf("2.��ѯ\n");
	printf("3.�˳�\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1:sellticket();break;
		case 2:find();break;
		case 3:break;
	}
}


