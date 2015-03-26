// try the %u or %lu specifiers if you implementation
// does not recognize the %zd specifier
#include <stdio.h>
#include <string.h>		/* provides strlen() prototype */
#define PRAISE "You are an extraodinary bing."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));
	printf("and occupies %zd memory calls.\n", sizeof PRAISE);

	return 0;
}
