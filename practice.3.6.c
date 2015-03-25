/* requests an mount of water qin quarts, and displays the number of water molecules */
#include <stdio.h>
int main(void)
{
	float singleMass = 3.0E-23f;
	float perQuart = 950.0f;
	float quarts;

	printf("Enter the amount of water in quarts: ");
	scanf("%f", &quarts);
	printf("%.1f quarts water has %e molecules.\n", quarts, quarts * perQuart / singleMass);

	return 0;
}
