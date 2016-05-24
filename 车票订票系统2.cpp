
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
	printf("请输入站点对应序号选择起点和终点\n");
    printf("1.昆明<->2.长沙<->3.武汉<->4.郑州<->5.北京\n");
	if(tickets<5)
	{
		fp=fopen("count","r");
		if((fp=fopen("count","a"))==NULL)
			printf("写入文件失败！");
        fread(&count,sizeof(struct Ticket),1,fp);
        fclose(fp);
		for(i=0;i<2;i++)
		{
		    scanf("%d",&a[i]);
            system("cls");
		}
		if(a[0]==a[1])
		{
			printf("起点和终点不能相同\n");
			system("cls");
			printf("1.买票\n");
			printf("2.查询流量\n ");
			printf("3.退出\n");
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
			printf("起点\t终点\n");
			for(i=0;i<2;i++)
            {
                switch(a[i])
                {
                    case 1:Out();In();
                    printf("昆明\t");
                    count.z[0]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 2:Out();In();
                    printf("长沙\t");
                    count.z[1]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 3:Out();In();
                    printf("武汉\t");
                    count.z[2]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 4:Out();In();
                    printf("郑州\t");
                    count.z[3]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
                    break;
                    case 5:Out();In();
                    printf("北京\t");
                    count.z[4]++;count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];
                    break;
                }
            }
			count.g[0]=count.z[0];count.g[1]=count.z[1];count.g[2]=count.z[2];count.g[3]=count.z[3];count.g[4]=count.z[4];
			printf("\n");
			fp=fopen("count","w");
			if(fwrite(&count,sizeof(struct Ticket),1,fp)!=1)
                printf("写入文件失败！\n");
			fclose(fp);
			fp=fopen("count","r");
			if((fp=fopen("count","r"))==NULL)
				printf("读取文件失败！");
            fread(&count,sizeof(struct Ticket),1,fp);
            fclose(fp);
            buyticket(a[0],a[1]);
			fp=fopen("ticket","w");
			if(fwrite(&total,sizeof(struct Ticket),1,fp)!=1)
                printf("写入文件失败！\n");
			fclose(fp);
			fp=fopen("ticket","r");
			if((fp=fopen("ticket","r"))==NULL)
				printf("读取文件失败！");
            fread(&total,sizeof(struct Ticket),1,fp);
            fclose(fp);
            tickets++;
		}
    }
	else printf("票已售完！");
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
			printf("读取文件失败！");
        fread(&total,sizeof(struct Ticket),1,f);
        fclose(f);
		total.price=total.price+s.price;
		money=total.price;
	}
	printf("距离:%dKM,金额:￥%d\n",s.distance,s.price);
	printf("1.订票\n");
	printf("2.查询\n");
	printf("3.退出\n");
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
	printf("购票查询系统\n");
	printf("1.查询各地客流量\n");
    printf("2.查询总售票金额\n");
    printf("3.退出\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1: printf("昆明站 流出 %d 人，流入 %d 人\n",out[1]/2,in[1]/2);
                printf("长沙站 流出 %d 人，流入 %d 人\n",out[2]/2,in[2]/2);
                printf("武汉站 流出 %d 人，流入 %d 人\n",out[3]/2,in[3]/2);
                printf("郑州站 流出 %d 人，流入 %d 人\n",out[4]/2,in[4]/2);
                printf("北京站 流出 %d 人，流入 %d 人\n",out[5]/2,in[5]/2);
                break;
		case 2: printf("总金额:%d",money);break;
		case 3: break;
	}
}
int main()
{
	FILE *fp;
    FILE *f;
	int k;
    printf("昆明<->长沙<->武汉<->郑州<->北京\n");
    system("pause");
    system("cls");
    fp=fopen("count","w");
    if(fwrite(&count,sizeof(struct Ticket),1,fp)!=1)
	    printf("写入文件失败！\n");
    fclose(fp);
    f=fopen("ticket","a");
	if(fwrite(&total,sizeof(struct Ticket),1,f)!=1)
        printf("写入文件失败！\n");
	fclose(f);
	printf("1.订票\n");
	printf("2.查询\n");
	printf("3.退出\n");
	scanf("%d",&k);
	switch(k)
	{
		case 1:sellticket();break;
		case 2:find();break;
		case 3:break;
	}
}


