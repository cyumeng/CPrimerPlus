// Creates an eight-element array of ints and sets the elements to
// the first eight powers of 2
#include <stdio.h>
int main(void)
{
	const int SIZE = 8;
	int array[SIZE];
	int i;

	array[0] = 1;
	for (i = 1; i < SIZE; i++)
		array[i] = array[i - 1] * 2;
	i = 0;	
	do
	{
		printf("2^%d = %d\n", i, array[i]);
	} while (++i < SIZE);

	return 0;
}
