#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];

	printf("What's your first name?\n");
	scanf("%s", name);
	printf("Fist name enclosed in double quotation marks:\n");
	printf("\"%s\"\n", name);
	printf("First name with 20 characters wide and at the right end of the filed in quotes:\n");
	printf("\"%20s\"\n", name);
	printf("First name at the left end of a field 20 characters wide with enclosed in quotes:\n");
	printf("\"%-20s\"\n", name);
	printf("First name in a filed three characters wider than it:\n");
	printf("\"%*s\"\n", strlen(name) + 3, name);

	return 0;
}
