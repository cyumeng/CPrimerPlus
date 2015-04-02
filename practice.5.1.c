// converts time in minutes to time in hours and minutes
#include <stdio.h>
int main(void)
{
	const int MINUTES_PER_HOUR = 60;
	int minutes;

	printf("Enter the time in minutes:\n");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		printf("%d = %d hour(s) and %d minut(s).\n", 
				minutes, minutes / MINUTES_PER_HOUR, minutes % MINUTES_PER_HOUR);
		printf("Enter the next time:\n");
		scanf("%d", &minutes);
	}
	printf("Done!\n");

	return 0;
}
