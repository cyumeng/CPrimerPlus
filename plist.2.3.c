// a program using two functions in on file
#include <stdio.h>
void butler(void);

int main(void)
{
	printf("I will summon the bulter function.\n");
	butler();
	printf("Yes. Bring me some tea and writable DVDs.\n");

	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}
