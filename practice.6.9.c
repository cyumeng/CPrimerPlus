// Modify exercise 8 so that it uses a function to return the value of the calculation
#include <stdio.h>
double calculation(double num1, double num2);

int main(void)
{
	double num1, num2;

	printf("Enter a pair of floating-point numbers, ");
	printf("or q to exit.\n");
	while (scanf("%lf %lf", &num1, &num2) == 2) 
	{
		printf("(%lf - %lf) / (%lf * %lf) = %lf\n", num1, num2, num1, num2,
				calculation(num1, num2));
		printf("Enter the next pair of floating-point numbers: ");
	}
	
	return 0;
}

double calculation(double num1, double num2)
{
	return (num1 - num2) / (num1 * num2);
}
