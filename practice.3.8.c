/* requests a volume in cpus and that displays in pints, ounces, tablespoons, and teaspoons */
#include <stdio.h>
int main(void)
{
	float cup;

	printf("Enter a volume in cups: ");
	scanf("%f", &cup);
	printf("%.1f cups in pints is %.2f.\n", cup, cup / 2.0f);
	printf("%.1f cups in ounces is %.1f.\n", cup, cup * 8.0f);
	printf("%.1f cups in tablespoons is %.1f.\n", cup, cup * 8.0f * 2.0f);
	printf("%.1f cups in teaspoons is %.1f.\n", cup, cup * 8.0f * 2.0f * 3.0f);

	return 0;
}
