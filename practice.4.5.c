#include <stdio.h>
int main(void)
{
	float speed;
	float size;

	printf("Enter your download speed in megabits per second(Mbs):\n");
	scanf("%f", &speed);
	printf("Enter the size of a file in megabytes(MB):\n");
	scanf("%f", &size);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
	printf("downloads in %.2f seconds.\n", size / (speed / 8.0f));

	return 0;
}
