#include<stdio.h>
int main()
{
	char room,command;
	printf("Select the room\nType R for Living room\nType K for kitchen\n");
	scanf("%c", &room);
	printf("\nWhat do you want to adjust\nType L for Lights\nType T for thermostat\n");
	scanf(" %c",&command);
	if (room == 'R' || room == 'r')
	{
		switch (command)
		{
			case 'L' :
				printf("Living Room Lights: Adjusting ambient lighting.");
				break ;
			case 'T' :
				printf("Living Room Thermostat: Setting living room temperature.");
				break ;
			case 'l' :
				printf("Living Room Lights: Adjusting ambient lighting.");
				break ;
			case 't' :
				printf("Living Room Thermostat: Setting living room temperature.");
				break ;
		}
	}
	else if (room == 'K' || room == 'k')
	{
		switch (command)
		{
			case 'L' :
				printf("Kitchen Lights: Turning on bright task lighting.");
				break ;
			case 'T' :
				printf("Kitchen Thermostat: Setting kitchen temperature.");
				break ;
			case 'l' :
				printf("Kitchen Lights: Turning on bright task lighting..");
				break ;
			case 't' :
				printf("Kitchen Thermostat: Setting kitchen temperature.");
				break ;
		}
	}
	else if (room != 'K' || room != 'k' || room != 'R' || room != 'r' || command != 'L' || command != 'l' || command != 'T' || command != 't')
	{
		printf("Enter correct command");
	}
	return 0;
}
