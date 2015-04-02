// how much money you get in some days if you receive $1 the first day, $4 the second day, $9 the third day, and so on
#include <stdio.h>
int main(void)
{
	int count = 0, sum = 0, days;

	printf("How many days have you worked for? ");
	scanf("%d", &days);
	while (count++ < days)
	{
		sum = sum + count * count;
	}
	printf("You've worked for %d days, your salary is %d.\n", days, sum);

	return 0;
}
