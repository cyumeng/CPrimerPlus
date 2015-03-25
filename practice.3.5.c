/* enters age in years, and then displays the equivalent number of seconds */
#include<stdio.h>
int main(void)
{
	int year;

	printf("Enter your age in years: ");
	scanf("%d", &year);
	printf("%d years in seconds is %e seconds.\n", year, 3.156E7 * year);
	
	return 0;
}
