#include <stdio.h>

/**
 * main - prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
		return (0);
}
