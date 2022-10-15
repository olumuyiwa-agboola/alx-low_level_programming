#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: 0 if no error, nonzero if error
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
