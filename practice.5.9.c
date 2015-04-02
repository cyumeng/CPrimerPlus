// requests a Fahrenheit temperature, then converts it to  Celsius and Kelvin
#include <stdio.h>
void Temperatures(double fah);
int main(void)
{
	double fah;
	int flag;

	printf("Enter a Fahrenheit temperature: ");
	flag = scanf("%lf", &fah);
	while (flag == 1)
	{
		Temperatures(fah);
		printf("Enter the next Fahrenheit temperature: ");
		flag = scanf("%lf", &fah);
	}

	return 0;
}

void Temperatures(double fah)
{
	const double TO_CELSIUS_ONE = 5.0 / 9.0;
	const double TO_CELSIUS_TWO = 32.0;
	const double TO_KELVIN = 273.16;

	printf("The temperature is %.2lf.\n", fah);
	printf("The Celsius equivalent is %.2lf.\n",
			TO_CELSIUS_ONE * (fah - TO_CELSIUS_TWO));
	printf("The Kelvin equivalent is %.2lf.\n",
			TO_CELSIUS_ONE * (fah - TO_CELSIUS_TWO) + TO_KELVIN);
}
