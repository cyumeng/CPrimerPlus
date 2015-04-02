// how much money you get in some days if you receive $1 the first day, $2 the second day, $3 the third day, and so on
#include <stdio.h>
int main(void)
{
	int count, sum, days;
	count = 0;
	sum = 0;

	printf("How many days have you worked for? ");
	scanf("%d", &days);
	while (count++ < days)
	{
		sum = sum + count;
	}
	printf("You've worked for %d days, your salary is $%d.\n", days, sum);

	return 0;
}
