#include <stdio.h>
#define GALLON_TO_LITERS 3.785
#define MILE_TO_KILOMETERS 1.609
int main(void)
{
	float miles, gallons;

	printf("Enter the number of miles traveled:\n");
	scanf("%f", &miles);
	printf("Enter the number of gallons of gasoline consumed:\n");
	scanf("%f", &gallons);
	printf("The miles-per-gallon value is %.1f.\n", miles / gallons);
	printf("The liters-per-100-km value is %.1f.\n", ((gallons * GALLON_TO_LITERS) / (miles * MILE_TO_KILOMETERS)) * 100.0);

	return 0;
}
