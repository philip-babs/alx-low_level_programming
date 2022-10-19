#include "main.h"

/**
 * print_sign - prints the sign of numbers
 * @n: the number to be checked
 * Return: 1,0,-1 if the number is +,0,-
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

