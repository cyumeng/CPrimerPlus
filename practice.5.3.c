// converts days to weeks and days
#include <stdio.h>
int main(void)
{
	const int DAYS_PER_WEEK = 7;
	int days;

	printf("Enter the number of days:\n");
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days are %d weeks, %d days.\n",
				days, days / DAYS_PER_WEEK, days % DAYS_PER_WEEK);
		printf("Enter the next number:\n");
		scanf("%d", &days);
	}
	printf("Done!\n");

	return 0;
}
