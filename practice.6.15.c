// Reads in a line of input and then prints the line in reverse order.
// Assume that the line is no longer than 255 characters;
#include <stdio.h>
#define SIZE 255
int main(void)
{
	char line[SIZE];
	int i = 0;
	int j;

	printf("Please enter a line of text:\n");
	scanf("%c", &line[i]);
	while (line[i] != '\n' && ++i < SIZE)
		scanf("%c", &line[i]);
	for (--i; i >= 0; i--)
		printf("%c", line[i]);
	printf("\n");

	return 0;
}
