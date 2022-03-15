#include "main.h"
/**
 * _abs - entry to the program
 * @n: argument to be checked
 * Return: the absolte value of @n
 */

int _abs(int n)
{
		return (n < 0 ? -1 * n : n);
}
/**
 * print_last_digit - entry to the funciton
 * @n: value
 * Return: last digit
 */

int print_last_digit(int n)
{
		int lastDigit;

			lastDigit = _abs((n % 10));
				_putchar(lastDigit + 48);
					return (lastDigit);
}
