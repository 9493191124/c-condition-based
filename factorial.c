#include<stdio.h>
void main()
{
	int i,a,produ=1;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		produ=produ*i;
	}
	printf("%d",produ);
}
