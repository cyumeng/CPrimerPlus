// converts centimeters in feet and inches
#include <stdio.h>
int main(void)
{
	const float CENTIMETERS_PER_INCH = 2.54f;
	const float INCHES_PER_FEET = 12.0f;
	float cents;
	int feets;
	float inches, remaining;

	printf("Enter a height in centimeters (<=0 to quit): ");
	scanf("%f", &cents);
	while (cents > 0)
	{
		
		inches = cents / CENTIMETERS_PER_INCH;
		feets = (int)(inches / INCHES_PER_FEET);
		remaining = inches - (float)feets * INCHES_PER_FEET;
		printf("%.1f cm = %d feet, %.1f inches\n", cents, feets, remaining);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &cents);
	}
	printf("Bye!\n");

	return 0;
}
