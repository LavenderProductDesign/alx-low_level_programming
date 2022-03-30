#include "main.h"

int check_path(char *S1, char *s2);
char *move_char(char *s2);

/**
 * wildcmp - compares 2 strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: returns numeral value
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move_char(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == '*')
	{
		s2 = move_char(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			i += wildcmp(s1 + 1, s2 + 1);
		i += check_path(s1 + 1, s2);
		return (!!i);
	}
	return (0);
}

/**
 *check_path - checks recursively for all the paths when the
 * characters are equal
 * @s1: first string
 * @s2: second string
 *
 * Return: return value of wildcmp() or of itself
 */
int check_path(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return  (check_path(s1 + 1, s2));

}

/**
 * *move_char - moves the current char past the *
 * @s2: string to iterate over
 *
 * Return: the address of the character after the *
 */
char *move_char(char *s2)
{
	if (*s2 == '*')
		return (move_char(s2 + 1));
	else
		return (s2);
}
