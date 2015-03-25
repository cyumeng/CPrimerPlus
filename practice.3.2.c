/* Enter an ASCII code value, and then prints the character having that ASCII code */
#include <stdio.h>
int main(void)
{
	int num;

	printf("Enter an ASCII code value: ");
	scanf("%d", &num);
	printf("ASCII code value %d represents %c.\n", num, num);

	return 0;
}
