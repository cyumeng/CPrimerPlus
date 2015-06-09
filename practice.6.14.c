/* Creates two eight-element arrays of doubles and
   uses a loop to let the user enter values for the eight elements of
   the first array.
   Sets the elements of the second array to the cumulative totals of
   the elements of the first array.
*/
#include <stdio.h>
void printArray(const double arr[], int size);
int main(void)
{
	const int SIZE = 8;
	double arr1[SIZE];
	double arr2[SIZE];
	int count = 0;

	arr2[0] = 0;
	while (count < SIZE)
	{
		printf("Enter No.%d element: ", count + 1);
		if (scanf("%lf", &arr1[count])) 
		{
			if (count == 0) 
				arr2[count] = arr1[count];
			else
				arr2[count] = arr2[count - 1] + arr1[count];
			count++;
		}
		while (getchar() != '\n');
	}
	printArray(arr1, SIZE);
	printArray(arr2, SIZE);

	return 0;
}

void printArray(const double arr[], int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		printf("%lf ", arr[i]);
	printf("\n");
}
