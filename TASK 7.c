#include<stdio.h>
int main()
{
	int permission;
	printf("Enter permission\n ");
	scanf("%d",&permission);
	if(permission & 4 )
	{
		printf("Access granted: Full control");
	}
	else if (permission &1 && permission &2)
	{
		printf("\nAccess granted: read and write");
	}
	else if(permission & 1 )
	{
		printf("Access granted: read-only");
	}
	else
	{
		printf("Access denied");
	}
	
	
 return 0;
}
