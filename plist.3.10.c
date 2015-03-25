/* uses escape characters */
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:");	/* alert signal */
	printf(" $________\b\b\b\b\b\b\b\b");			/* backspace */
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);	/* tab */
	printf("\rGee!\n");

	return 0;
}
