#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 if no error, nonzero if error
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
