#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii cpde for a new line*/
	
	return (0);
}
