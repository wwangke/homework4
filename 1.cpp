#include <stdio.h>
struct time
{
	int year;
	int month;
	int day;
};
struct plane
{
	char name[20];
	struct time ccsj;
	int price;
	int num;
};
int main()
{
	int i;
	struct plane fj[5];
	for(i=0;i<5;i++)
	{
		printf("请输入第%d个零件的信息\n",i+1);
		printf("请输入该零件名称:");
		scanf("%s",&fj[i].name);
		printf("请输入该零件的出厂日期:");
		scanf("%d %d %d",&fj[i].ccsj.year,&fj[i].ccsj.month,&fj[i].ccsj.day);
		printf("请输入该零件的价格:");
		scanf("%d",&fj[i].price);
		printf("请输入该零件的编号:");
		scanf("%d",&fj[i].num);
	}
	for(i=0;i<5;i++)
	{
		printf("----------------------\n");
		printf("第%d个零件\n零件名称:%s\n零件出厂日期:%d %d %d\n零件价格:%d\n零件编号:%d\n",i+1,fj[i].name,fj[i].ccsj.year,fj[i].ccsj.month,fj[i].ccsj.day,fj[i].price,fj[i].num);
	}
	printf("\n");
	int k,j;
	struct plane temp;
	for(i=0;i<4;i++)
		for(j=i+1;j<5;j++)
		{
			k=i;
		if(fj[j].price>fj[k].price)k=j;
		if(k!=i)
		{
			temp=fj[k];
			fj[k]=fj[i];
			fj[i]=temp;
		}
		}
	printf("---------------------------\n");
	printf("价格最高的零件名称:%s\n出厂时间:%d %d %d\n价格:%d\n编号:%d\n",fj[0].name,fj[0].ccsj.year,fj[0].ccsj.month,fj[0].ccsj.day,fj[0].price,fj[0].num);
	printf("---------------------------\n");
	printf("\n");
	printf("出厂时间大于五年的零部件:\n");
	printf("-------------------------\n");
	for(i=0;i<5;i++)
	{
		if(2022-fj[i].ccsj.year>5)
		{
			fj[i].price=fj[i].price/2;
			printf("零件名称:%s\n出厂时间:%d %d %d\n价格:%d\n编号:%d\n",fj[i].name,fj[i].ccsj.year,fj[i].ccsj.month,fj[i].ccsj.day,fj[i].price,fj[i].num);
			printf("-------------------------\n");
		}
	}
	return 0;
}
