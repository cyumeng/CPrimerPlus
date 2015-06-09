// Reads eight integers into an array and then prints them in reverse order.
#include <stdio.h>
int main(void)
{
	int size = 8;
	int array[size];
	int count = 0;
	int index;

	while (count < size)
	{
		printf("Enter No.%d integer of eight integers: ", count + 1);
		if (scanf("%d", &array[count]))
			count++;
		while (getchar() != '\n');
	}	
	for (index = size - 1; index >= 0; index--)
		printf("%d ", array[index]);
	printf("\nDone!\n");

	return 0;
}
