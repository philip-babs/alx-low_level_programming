#include <stdio.h>

/**
 * main - prints all possible diffrent combination of two digit
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; b <= '9'; c++)
	{
		for (a = '0'; b <= '9'; C++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);

				if (a == '8' && b == '9')
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
