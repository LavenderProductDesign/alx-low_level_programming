#include <stdio.h>
/**
 * * main - prints the lowercase alphabet in reverse
 * *
 * * Description: using the main function
 * * this program prints "Printing the lowercase in reverse
 * * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)

	putchar(ch);

	putchar('\n');

	return (0);
}
