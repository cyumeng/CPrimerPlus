/* Write a program that reads a single word into a character array and then prints the word backward.
   Use strlen() to compute the index of the last character in the array.
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[30];
	int i;

	printf("Please input a word: ");
	scanf("%s", word);
	// prints the word backward
	for (i = strlen(word) - 1; i >= 0; i--)
		printf("%c", word[i]);
	printf("\n");

	return 0;
}
