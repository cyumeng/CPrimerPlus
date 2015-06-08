/* Write a program that prints a table with each line giving an integer,
   its square, and its cube.
   Ask the user to input the lower and upper limits for the table.
   Use a for loop.
*/
#include <stdio.h>
int main(void)
{
	int lower, upper;

	printf("Please input the lower and upper limits in integers: ");
	scanf("%d %d", &lower, &upper);
	if (lower > upper)
	{
		int temp  = lower;
		lower = upper;
		upper = temp;
	}
	printf("    number|    square|      cube\n");
	for (;lower <= upper; lower++)
		printf("%10d|%10d|%10d\n", lower, lower * lower, lower * lower * lower);

	return 0;	
}
