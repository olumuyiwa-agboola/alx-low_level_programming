#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single digit numbers
 * Return: 0 if no error, nonzero if error
 */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
