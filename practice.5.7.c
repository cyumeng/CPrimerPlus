// calculates cube value
#include <stdio.h>
void cube(double n);

int main(void)
{
	double num;

	printf("Enter a double value: ");
	scanf("%lf", &num);
	cube(num);

	return 0;
}

void cube(double n)
{
	printf("The cube value of %lf is %lf.\n", n, n * n * n);
}
