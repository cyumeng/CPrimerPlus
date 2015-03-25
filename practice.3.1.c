/* find out what my system does with integer overflow, floating-point overflow, and floating-point underflow */
#include <stdio.h>
int main(void)
{
	int overflow = 2147480000;

	while (overflow > 0) {
		printf("%d\n", overflow);	/* the biggest integer is 2147483647 */
		overflow++;
	}
	printf("%d\n", overflow);		/* -2147483648 */

	float floatOverflow = 3.4E38 * 100.0f;
	printf("%f\n", floatOverflow);

	float floatUnderflow = 1.234567E-38 / 10.0f;
	printf("%e\n", floatUnderflow);
	
	return 0;
}
