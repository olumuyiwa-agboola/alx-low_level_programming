#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alpahbet in lowercase except q and e
 * Return: 0 if no error, nonzero if error
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
