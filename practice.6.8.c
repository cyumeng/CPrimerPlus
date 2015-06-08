/* Write a program that requests two floating-point numbers and prints the
   value of their difference divided by their product.
   Have the program loop through pairs of input values until the user
   enters nonnumeric input.
*/
#include <stdio.h>
int main(void)
{
	double num1, num2;
	
	printf("Enter a pair of floating-point numbers, ");
	printf("or q to exit.\n");
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		printf("(%lf - %lf) / (%lf * %lf) = %lf\n", num1, num2, num1, num2, 
				(num1 - num2) / (num1 * num2));
		printf("Enter the next pair of floating-point numbers: ");
	}

	return 0;
}
