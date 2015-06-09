/* Daphne invests $100 at 10% simple interests.
   Deirdre invests $100 at 5% interest compounded annually.
   Finds how many years it takes for the value of Deirdre's investment to
   exceed the value of Daphne's investment.
*/
#include <stdio.h>
#define SEED 100.0
#define SIMPLE_RATE 0.1
#define COMPOUNDED_RATE 0.05
int main(void)
{	
	double valueDa = SEED, valueDe = SEED;
	int count = 0;

	while (valueDe <= valueDa)
	{
		valueDa += SEED * SIMPLE_RATE;
		valueDe *= (1.0 + COMPOUNDED_RATE);
		count++;
	}
	printf("After %d years, Deirdre's investment will exceed the value of Daphne's investment.\n", count);
	printf("Deirdre's investment: %.2lf\n", valueDe);
	printf("Daphne's investment:  %.2lf\n", valueDa);

	return 0;
}
