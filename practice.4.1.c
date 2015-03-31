/* asks for first name, last name, and then prints the names in format last, firts*/
#include <stdio.h>
int main(void)
{
	char fname[40];
	char lname[40];

	printf("What's your first name?\n");
	scanf("%s", fname);
	printf("What's your last name?\n");
	scanf("%s", lname);
	printf("Your name in format last, first:\n");
	printf("%s, %s\n", lname, fname);

	return 0;
}
