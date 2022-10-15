#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting 0
 * Return: 0 if no error, nonzero if error
*/
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		printf("%d", d);
	}
	printf("\n");
	return (0);
}
