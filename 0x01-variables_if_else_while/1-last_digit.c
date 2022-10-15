#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: determines and checks the last digit of a random number
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n < 0)
	{
		n = -1 * n;
	}
	printf("is %d ", n % 10);
	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
		return (0);
	} else if ((n % 10) == 0)
	{
		printf("and is 0\n");
		return (0);
	} else if (((n % 10) == 6) & (n % 10) != 0)
	{
		printf("and is less than 6 and not 0\n");
		return (0);
	}
}
