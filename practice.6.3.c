/* Use nested loops to produce the following pattern:
   F
   FE
   FED
   FEDC
   FEDCB
   FEDCBA
*/
#include <stdio.h>
int main(void)
{
	int i, j;
	char start = 'F';

	for (i = 0; i < 6; i++)
	{
		for (j = 0; i - j >= 0; j++)
			printf("%c", start - j);
		printf("\n");
	}

	return 0;
}
