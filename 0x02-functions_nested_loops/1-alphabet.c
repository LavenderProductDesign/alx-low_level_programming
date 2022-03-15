#include <stdio.h>
#include " main.h"

/**
 * main print alphabets in lowercase
 * Description- function should print alphabet in lower case
 * this program prints alpha
 * Return: 0 
 */
int main(void)
{
	char c;
	for (c = 'a' ; c<= 'z' ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
