#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 if no error, nonzero if error
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
