#include <stdio.h>

/**
 * main - print combinations of 2 digit numbers with out repit
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		if (j > i)
		{
		putchar(i + '0');
		putchar(j + '0');

		if (i != 8 || j != 9)
		{
		putchar(',');
		putchar(' ');
		}
		}

	}
	}


	putchar('\n');

	return (0);
}
