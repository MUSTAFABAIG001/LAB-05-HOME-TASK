#include<stdio.h>
int main()
{
	int un,pw;
	printf("Is the username correct?\nType 1 if it is correct\nType 2 if it is incorrect\n ");
	scanf("%d",&un);
	if (un == 2)
	{
		printf("Username not found");
	}
	else if(un == 1)
	{
		printf("\nIs the password correct?\nType 1 if it is correct\nType 2 if it is incorrect\n");
		scanf(" %d",&pw);
		if (pw==1)
		{
			printf("\nYou are logged in\n");
		}
		else if(pw == 2)
		{
			printf("Incorrect Password\n");
		}
		else
		{
			printf("Incorrect Code");
		}
	}
	else if(un!=1 && un != 2)
	{
		printf("You entered incorrect code");
	}
	
	return 0;
	
}
