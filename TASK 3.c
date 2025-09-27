#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,D,x2,y,z;
	printf("The standard quadratic equation is ax^2+bx+c\n");
	printf("Enter the coefficient of x^2\n");
	scanf("%d", &a);
	if(a == 0)
	{
		printf("Coefficient of x^2 can not be equal to zero");
	}
	else if(a>0)
	{
		printf("\nEnter the coefficient of x\n");
		scanf(" %d", &b);
		printf("Enter constant of equation");
		scanf(" %d", &c);
		y=4*a*c;
		z = sqrt(y);
		x1 = (b*b -z)/(2*a);
		x2 = (b*b + z)/(2*a);
		D = b*b - y;
		
		if (D>0)
		{
			printf("\nEquation has two roots\n");
		}
		else if (D<0)
		{
			printf("Equation has imaginary roots\n");
		}
		else if (D==0)
		{
			printf("Equation has one root\n");
		}
		printf("Value of x1 is %f\nValue of x2 is %f",x1,x2);
	}
	return 0;
	
}
