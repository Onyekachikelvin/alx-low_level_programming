#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

for (n = 0; n <= 16; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
			if (n != 24; || m !40;)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
