/* Computes and siaplays the number of friends each week.
   In general, in the Nth week, N friends dropped out and the ramaining
   number doubled.
   The program should continue until the count exceeds Dunbar's number,
   its approximate value is 150;
*/
#include <stdio.h>
#define DUNBAR 150
int main(void)
{
	long num = 5;
	long count = 1;

	while (num <= DUNBAR)
	{
		num = (num - count) * 2;
		printf("After the week %ld, the number of friends is %ld.\n", count, num);
		count++;
	}

	return 0;
}
