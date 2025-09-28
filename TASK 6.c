#include<stdio.h>
int main()
{
	char room,command;
	printf("Select the room\nType R for Living room\nType K for kitchen\n");
	scanf("%c", &room);
	printf("\nWhat do you want to adjust\nType L for Lights\nType T for thermostat\n");
	scanf(" %c",&command);
	switch(room)
	{
	case 'R' :
		case 'r' :
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
					default :
					printf("\nInvalid Command");
				}
			}
	break;
	case 'K' :
		case 'k' :
	
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
				default :
				printf("\nInvalid Command");
		}
	break ;
	default :
		printf("\nInvalid Room");
	
	}
	
		return 0;
	}
