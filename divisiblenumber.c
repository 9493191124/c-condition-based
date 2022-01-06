#include<stdio.h>
void main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	if(number%1==number)
	{
		printf("divisible by 1");
	}
	if(number%2==0&&number%2==1)
	{
		printf("divisible by 2");
	}
	if(number%3==0&&number%3==1)
	{
		printf("divisible by 3");
	}
	if(number%4==0&&number%4==1)
	{
		printf("divisible by 4");
	}
	if(number%5==0&&number%5==1)
	{
		printf("divisible by 5");
	}
}
