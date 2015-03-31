#include <stdio.h>
#include <string.h>
int main(void)
{
	char fname[40];
	char lname[40];

	printf("What's your first name?\n");
	scanf("%s", fname);
	printf("What's your last name?\n");
	scanf("%s", lname);
	printf("%s %s\n", fname, lname);
	printf("%*zd %*zd\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	printf("%s %s\n", fname, lname);
	printf("%-*zd %-*zd\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

	return 0;
}
