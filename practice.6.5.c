/* Have a program request user to enter an uppercase letter.
   Usen nested loops to produce a pyramid pattern like this:
       A    
      ABA
	 ABCBA
	ABCDCBA
   ABCDEDCBA
*/
#include <stdio.h>
int main(void)
{
	char start = 'A';
	char end = 'Z';
	char input;
	int dif;
	int i, j, k, l;

	printf("Please enter an uppercase letter: ");
	while ((scanf("%c", &input) == 0) || (input < start || input > end))
		printf("Please enter an upercase letter: ");
	dif = input - start;

	for (i = 0; i <= dif; i++)
	{
		// the loop of handling spaces
		for (j = i; j < dif; j++)
			printf(" ");
		// the loop of handling ascending letters
		for (k = 0; k <= i; k++)
			printf("%c", start + k);
		// the loop of handling descending letters
		for (l = i; l > 0; l--)
			printf("%c", start + l - 1);
		printf("\n");
	}

	return 0;
}
