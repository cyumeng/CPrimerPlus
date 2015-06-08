/* Use nested loops to produce the following pattern:
   A
   BC
   DEF
   GHIJ
   KLMNO
   PQRSTU
*/
#include <stdio.h>
int main(void)
{
	int i, j;
	int move = 0;
	char start = 'A';

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++, move++)
			printf("%c", start + move);
		printf("\n");
	}

	return 0;
}
