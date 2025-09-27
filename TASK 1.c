#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if (age<=5)
	{
		printf("Kids eat for free");
	}
	else if(age>=65)
	{
		printf("You are eligibe for a 20% discount your total is 800 ");
	}
	else if(age>5 && age<65)
	{
		printf("You will be charged the standard price, your total is 1000 ");
	}
	return 0;
}
