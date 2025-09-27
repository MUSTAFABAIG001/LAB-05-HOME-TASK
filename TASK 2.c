#include<stdio.h>
int main()
{
	int signal;
	char colour;
	printf("Is the signal powered on?\nType 1 for on\nType 2 if it is off");
	scanf(" %d", &signal);
	if (signal == 2)
	{
		printf("\nSignal Off\n");
	}
	else if(signal == 1)
	{
		printf("Enter the signal light\n1.Type 'R' for red\n2.Type 'Y' for Yellow\n3.Type 'G' for green\n");
		scanf(" %c",&colour);
		if(colour == 'R' || colour == 'r')
		{
			printf("Stop");
		}
		else if(colour == 'Y' || colour == 'y')
		{
			printf("Caution");
		}
		else if(colour == 'G' || colour == 'g')
		{
			printf("Go");
		}
		else if (colour != 'G' || colour != 'g' || colour != 'Y' || colour != 'y' || colour != 'R' || colour != 'r'  )
		{
			printf("Invalid signal code");
		}
		
	}
		else if (signal != 1 || signal != 2)
		{
			printf("Invalid signa code");
		}
	return 0;
	
}
