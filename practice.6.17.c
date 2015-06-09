/* Finds out how many years it takes for Chuckie to empty
   his one million dollars
   the interest compounded annually: 8%
   the withdraw per year: 100,000
*/
#include <stdio.h>
int main(void)
{
	double account = 1000000.0;
	double rate = 0.08;
	double withdraw = 100000.0;
	int count = 0;
	
	while (account > 0)
	{
		account *= (1.0 + rate);
		account -= withdraw;
		count++;
	}
	printf("After %d years, Chuckie will empty his account.\n", count);

	return 0;
}
