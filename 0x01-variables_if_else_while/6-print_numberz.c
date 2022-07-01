#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	int ch;
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	putchar(10); /* this is an ascii code for new line */

	return (0);
}
