#include<stdio.h>
void main()
{
	int cp,sp,p,l;
	float perc;
	printf("enter the cp,sp");
	scanf("%d%d",&cp,&sp);
	if(cp<sp)
	{
		printf("profit\n");
		p=sp-cp;
		perc=p*100/cp;
		printf("profit amount:%d\n",p);
		printf("percentage: %f\n",perc);
	}
	else if(cp>sp)
	{
		printf("loss\n");
		l=cp-sp;
		perc=1*100/cp;
		printf("loss amount:%d\n",l);
		printf("percentage:%f\n",perc);
	}
	else
	{
		printf("no profit");
	}
}
