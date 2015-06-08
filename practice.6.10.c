/* Calculates the sum of all the integer squares from the square of the
   lower limit to the square of the upper limit.
   When an upper limit is euqal to or less than an lower limit,
   the program stops.
*/
#include <stdio.h>
int main(void)
{
	int lower, upper;
	int i, sum;

	printf("Enter lower an upper integer limits: ");
	while (scanf("%d %d", &lower, &upper) == 2 && (lower < upper))
	{
		for (i = lower, sum = 0; i <= upper; i++)
			sum += i * i;
		printf("The sums of the squares from %d to %d is %d\n", 
				lower * lower, upper * upper, sum);
		printf("Enter next set of limits: ");
	}
	printf("Done\n");

	return 0;
}
