#include<stdio.h>
int main()
{
	int Course,PQ;   //PQ stands for pre requisit 
	printf("Have you completed the prequisite?\nType 1 if yes\nType 2 if no\n");
	scanf("%d",&PQ);
	printf("\nIs the course full?\nType 1 if yes\nType 2 if no\n\n");
	scanf(" %d",&Course);
	if(PQ == 1)
	{	
		if (Course == 2)
		{
			printf("Enrolled successfully");
		}
		else if (Course == 1)
		{
			printf("Cannot enroll: course is full");
		}
		
	}
	else if (PQ == 2 && Course == 2)
	{
		printf("Cannot enroll: prerequisite missing");
	}
	else if(PQ == 2 && Course == 1)
	{
		printf("Cannot enroll: prerequisite missing and course is full");
	}
	else if (PQ !=1 || PQ!=2 || Course!=1 || Course !=2)
	{
		printf("Invalid Code");
	}
	return 0;
	 
}
