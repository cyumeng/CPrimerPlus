/* Use nested loops to produce the following pattern:
   $
   $$
   $$$
   $$$$
   $$$$$
*/
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i < 6; i++)
	{
		for (j = 1; j <= i; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}
