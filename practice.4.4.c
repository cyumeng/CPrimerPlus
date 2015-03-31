#include <stdio.h>
int main(void)
{
	char name[40];
	float height;

	printf("What's your name?\n");
	scanf("%s", name);
	printf("How high are you in centimeters?\n");
	scanf("%f", &height);
	printf("%s, you are %.3f meters tall.\n", name, height / 100.0f);

	return 0;
}
