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
		printf("�������%d���������Ϣ\n",i+1);
		printf("��������������:");
		scanf("%s",&fj[i].name);
		printf("�����������ĳ�������:");
		scanf("%d %d %d",&fj[i].ccsj.year,&fj[i].ccsj.month,&fj[i].ccsj.day);
		printf("�����������ļ۸�:");
		scanf("%d",&fj[i].price);
		printf("�����������ı��:");
		scanf("%d",&fj[i].num);
	}
	for(i=0;i<5;i++)
	{
		printf("----------------------\n");
		printf("��%d�����\n�������:%s\n�����������:%d %d %d\n����۸�:%d\n������:%d\n",i+1,fj[i].name,fj[i].ccsj.year,fj[i].ccsj.month,fj[i].ccsj.day,fj[i].price,fj[i].num);
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
	printf("�۸���ߵ��������:%s\n����ʱ��:%d %d %d\n�۸�:%d\n���:%d\n",fj[0].name,fj[0].ccsj.year,fj[0].ccsj.month,fj[0].ccsj.day,fj[0].price,fj[0].num);
	printf("---------------------------\n");
	printf("\n");
	printf("����ʱ�����������㲿��:\n");
	printf("-------------------------\n");
	for(i=0;i<5;i++)
	{
		if(2022-fj[i].ccsj.year>5)
		{
			fj[i].price=fj[i].price/2;
			printf("�������:%s\n����ʱ��:%d %d %d\n�۸�:%d\n���:%d\n",fj[i].name,fj[i].ccsj.year,fj[i].ccsj.month,fj[i].ccsj.day,fj[i].price,fj[i].num);
			printf("-------------------------\n");
		}
	}
	return 0;
}
