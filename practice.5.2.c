// asks for an integer and then prints all the integers from (and including)that value up to (and including) a value larger by 10.
#include <stdio.h>
int main(void)
{
	int num, limit;

	printf("Enter an integer:\n");
	scanf("%d", &num);
	limit = num + 10;
	while (num <= limit)
	{
		printf("%d\n", num++);
	}

	return 0;
}
