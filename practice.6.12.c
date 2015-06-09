// tests runing totals of two series
#include <stdio.h>
int main(void)
{
	double start = 1.0;
	double lower, upper;
	double s1 = 0, s2 = 0;
	double sign = -1.0;

	scanf("%lf", &upper);
	for (lower = start; lower <= upper; lower++)
	{
		s1 += start / lower;
		if (sign == -1)
			sign = 1;
		else
			sign = -1;
		s2 += (start / lower) *	sign; 
	}

	printf("s1 = %lf\n", s1);
	printf("s2 = %lf\n", s2);

	return 0;
}
